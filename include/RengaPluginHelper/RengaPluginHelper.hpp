/*
 * This file is part of Renga COM SDK.
 *
 * Copyright Renga Software LLC, 2018. All rights reserved.
 *
 * RENGA SOFTWARE LLC PROVIDES THIS PROGRAM "AS IS" AND WITH ALL FAULTS. 
 * RENGA SOFTWARE LLC DOES NOT WARRANT THAT THE OPERATION OF THE PROGRAM WILL BE
 * UNINTERRUPTED OR ERROR FREE.
*/


// Copyright (C) 2026 Platon Babadey
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Affero General Public License as published
// by the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU Affero General Public License for more details.
//
// You should have received a copy of the GNU Affero General Public License
// along with this program. If not, see <https://www.gnu.org/licenses/>.


#pragma once
#include "RengaTypeLib.hpp"
#include <Windows.h>
#include <cassert>
#include <cstdint>
#include <string>


namespace Renga {

    template <typename T>
    class EventHandler : public IDispatch {
    protected:
        DWORD m_dwCookie;
        LPCONNECTIONPOINT m_pConnPt;
        LPUNKNOWN m_pContainer;
        LONG m_refCount;  // <-- ДОБАВИТЬ ЭТУ СТРОКУ

    public:
        EventHandler(LPUNKNOWN pObject);
        virtual ~EventHandler();

        int Advise();
        void Unadvise();

    protected:
        // IUnknown
        COM_DECLSPEC_NOTHROW ULONG STDMETHODCALLTYPE AddRef();
        COM_DECLSPEC_NOTHROW ULONG STDMETHODCALLTYPE Release();
        STDMETHOD(QueryInterface)(/*[in] */ REFIID riid, /* [iid_is][out] */ _COM_Outptr_ void __RPC_FAR *__RPC_FAR *ppvObject);

        // IDispatch
        STDMETHOD(GetTypeInfoCount)(unsigned int*);
        STDMETHOD(GetTypeInfo)(unsigned int, LCID, ITypeInfo**);
        STDMETHOD(GetIDsOfNames)(REFIID, LPOLESTR*, unsigned int, LCID, DISPID*);
    };

    template <typename T>
    inline EventHandler<T>::EventHandler(LPUNKNOWN pObject) : 
        m_dwCookie(0), 
        m_pConnPt(nullptr), 
        m_pContainer(pObject),
        m_refCount(1)  // <-- ДОБАВИТЬ ИНИЦИАЛИЗАЦИЮ
    {
        if (m_pContainer) { m_pContainer->AddRef(); }
        Advise();
    }

    template <typename T>
    inline EventHandler<T>::~EventHandler() {
        Unadvise();
        if (m_pContainer) {
            m_pContainer->Release();
            m_pContainer = NULL;
        }
    }

    template <typename T>
    inline int EventHandler<T>::Advise() {
        LPCONNECTIONPOINTCONTAINER lpContainer = NULL;
        if (SUCCEEDED(m_pContainer->QueryInterface(IID_IConnectionPointContainer, (LPVOID*)&lpContainer))) {
            if (lpContainer && SUCCEEDED(lpContainer->FindConnectionPoint(__uuidof(T), &m_pConnPt))) {
                m_pConnPt->Advise(this, &m_dwCookie);
            }
            lpContainer->Release();
        }
        return 0;
    }

    template <typename T>
    inline void EventHandler<T>::Unadvise() {
        if (m_pConnPt) {
            m_pConnPt->Unadvise(m_dwCookie);
            m_pConnPt->Release();
            m_pConnPt = NULL;
        }
        m_dwCookie = 0;
    }

    template <typename T>
    inline ULONG EventHandler<T>::AddRef() {
        return InterlockedIncrement(&m_refCount);
    }
    template <typename T>
    inline ULONG EventHandler<T>::Release() {
        ULONG ref = InterlockedDecrement(&m_refCount);
        if (ref == 0) delete this;
        return ref;
    }

    template <typename T>
    inline STDMETHODIMP EventHandler<T>::QueryInterface(REFIID riid, void ** ppvObject) {
        if (IID_IUnknown == riid || IID_IDispatch == riid || __uuidof(T) == riid) {
            *ppvObject = this;
            return NOERROR;
        }
        return E_NOTIMPL;
    }

    template <typename T>
    inline STDMETHODIMP EventHandler<T>::GetTypeInfoCount(unsigned int *) {
        return S_OK;
    }

    template <typename T>
    inline STDMETHODIMP EventHandler<T>::GetTypeInfo(unsigned int, LCID, ITypeInfo **) {
        return S_OK;
    }

    template <typename T>
    inline STDMETHODIMP EventHandler<T>::GetIDsOfNames(REFIID, LPOLESTR *, unsigned int, LCID, DISPID *) {
        return S_OK;
    }

    class ActionEventHandler : public EventHandler<_IActionEvents> {
    public:
        ActionEventHandler(IAction* pAction);
        virtual void OnTriggered() = 0;
        virtual void OnToggled(bool checked) = 0;
    protected:
        STDMETHOD(Invoke)(DISPID, REFIID, LCID, unsigned short, DISPPARAMS*, VARIANT*, EXCEPINFO*, unsigned int*);
    };

    inline ActionEventHandler::ActionEventHandler(IAction* pAction) : EventHandler<_IActionEvents>(pAction) {}

    inline STDMETHODIMP ActionEventHandler::Invoke(DISPID id, REFIID, LCID, unsigned short, DISPPARAMS * params, VARIANT *, EXCEPINFO *, unsigned int *) {
        switch (id) {
            case 1: {
                OnTriggered();
                return S_OK;
            }
            case 2: {
                auto& arg = params->rgvarg[0];
                assert(arg.vt == VT_BOOL);
                OnToggled(arg.boolVal != VARIANT_FALSE);
            }
            return S_OK;
        }
        return E_NOTIMPL;
    }

    class ApplicationEventHandler : public EventHandler<_IApplicationEvents> {
    public:
        ApplicationEventHandler(IApplication* pApplication);
    protected:
        virtual void OnBeforeApplicationClose(IApplicationCloseEvent* /*pEvent*/) {}
        virtual void OnBeforeProjectClose(IProjectCloseEvent* /*pEvent*/) {}
        virtual void OnProjectClosed() {}
        virtual void OnProjectCreated() {}
        virtual void OnProjectOpened(const std::wstring& /*filePath*/) {}
        virtual void OnProjectSaved(const std::wstring& /*filePath*/) {}
        STDMETHOD(Invoke)(DISPID, REFIID, LCID, unsigned short, DISPPARAMS*, VARIANT*, EXCEPINFO*, unsigned int*);
    };

    inline ApplicationEventHandler::ApplicationEventHandler(IApplication* pApplication) : EventHandler<_IApplicationEvents>(pApplication) {}

    inline STDMETHODIMP ApplicationEventHandler::Invoke( DISPID id, REFIID, LCID, unsigned short, DISPPARAMS* params, VARIANT*, EXCEPINFO*, unsigned int*) {
        switch (id) {
            case 1: OnBeforeApplicationClose(static_cast<IApplicationCloseEvent*>(params->rgvarg[0].punkVal)); return S_OK;
            case 2: OnBeforeProjectClose(static_cast<IProjectCloseEvent*>(params->rgvarg[0].punkVal)); return S_OK;
            case 3: OnProjectCreated(); return S_OK;
            case 4: OnProjectOpened(params->rgvarg[0].bstrVal); return S_OK;
            case 5: OnProjectSaved(params->rgvarg[0].bstrVal); return S_OK;
            case 6: OnProjectClosed(); return S_OK;
        }
        return E_NOTIMPL;
    }

    class SelectionEventHandler : public EventHandler<_ISelectionEvents> {
    public:
        SelectionEventHandler(ISelection* pSelection);
    protected:
        virtual void OnModelSelectionChanged() = 0;
        STDMETHOD(Invoke)(DISPID, REFIID, LCID, unsigned short, DISPPARAMS*, VARIANT*, EXCEPINFO*, unsigned int*);
    };

    inline SelectionEventHandler::SelectionEventHandler(ISelection* pSelection) :
        EventHandler<_ISelectionEvents>(pSelection) {}

    inline STDMETHODIMP SelectionEventHandler::Invoke(DISPID id, REFIID, LCID, unsigned short, DISPPARAMS * params, VARIANT *, EXCEPINFO *, unsigned int *) {
        switch (id) {
            case 1: {
                OnModelSelectionChanged();
                return S_OK;
            }
        }
        return E_NOTIMPL;
    }

    inline Renga::IApplicationPtr CreateApplication(DWORD clsctx = CLSCTX_INPROC_SERVER) {
        Renga::IApplicationPtr pApplication;
        pApplication.CreateInstance(__uuidof(Renga::Application), NULL, clsctx);
        return pApplication;
    }

    class IPlugin {
    public:
        virtual ~IPlugin() = default;
        virtual bool initialize(const wchar_t* pluginPath) = 0;
        virtual void stop() = 0;
    };

    namespace Utils {
        inline int ColorToInt(const Renga::Color& color) {
            uint8_t r = static_cast<uint8_t>(color.Red);
            uint8_t g = static_cast<uint8_t>(color.Green);
            uint8_t b = static_cast<uint8_t>(color.Blue);
            uint8_t a = static_cast<uint8_t>(color.Alpha);
            uint32_t value = static_cast<uint32_t>(b | (g << 8) | (r << 16) | (a << 24));
            return static_cast<int>(value);
        }

        inline Renga::Color IntToColor(int value) {
            uint32_t u = static_cast<uint32_t>(value);
            uint8_t b = static_cast<uint8_t>(u & 0xFF);
            uint8_t g = static_cast<uint8_t>((u >> 8) & 0xFF);
            uint8_t r = static_cast<uint8_t>((u >> 16) & 0xFF);
            uint8_t a = static_cast<uint8_t>((u >> 24) & 0xFF);

            return Renga::Color{
                static_cast<uint16_t>(r),
                static_cast<uint16_t>(g),
                static_cast<uint16_t>(b),
                static_cast<uint16_t>(a)
            };
        }
    }

    namespace DoorCategories {
        const GUID Door = { 0x80c34eed, 0x5232, 0x4cd7, { 0x89, 0x25, 0x17, 0x7e, 0xe0, 0x29, 0x34, 0xd8 } };
        const GUID Opening = { 0x5a4a5eb1, 0x14df, 0x4a2a, { 0x8f, 0x83, 0x23, 0x1e, 0x31, 0xfc, 0x41, 0xb5 } };
        const GUID Other = { 0xa7a8e180, 0x242a, 0x47e7, { 0x8f, 0x79, 0x9e, 0xb6, 0xbc, 0x0c, 0xaf, 0x50 } };
    }

    namespace WindowCategories {
        const GUID Opening = { 0xd01c7085, 0x4984, 0x4789, { 0xb0, 0x09, 0x92, 0xd7, 0xf2, 0xf0, 0xb2, 0xc1 } };
        const GUID Other = { 0xf9e27c1c, 0xe123, 0x4a7e, { 0x90, 0x7f, 0x18, 0x46, 0x6c, 0x5c, 0xfe, 0x2a } };
        const GUID Window = { 0xbd23e918, 0x332c, 0x4c8a, { 0x80, 0xe9, 0x92, 0x31, 0xb8, 0xe1, 0x8f, 0x50 } };
    }

    namespace SystemCategories {
        const GUID DomesticColdWater = { 0x5fb17679, 0xfb58, 0x4334, { 0xad, 0x64, 0x61, 0xee, 0x70, 0xf9, 0x3c, 0x73 } };
        const GUID DomesticHotWater = { 0x5d30e610, 0xc90e, 0x4131, { 0x84, 0x20, 0x4e, 0x14, 0x07, 0xd9, 0x27, 0xa2 } };
        const GUID DomesticSewage = { 0x846b0ccf, 0x2d2c, 0x4969, { 0x9d, 0x4d, 0x80, 0xc6, 0xa9, 0x9e, 0xca, 0x7c } };
        const GUID Exhaust = { 0xd79acdf6, 0x7b03, 0x4d3b, { 0x99, 0xad, 0xba, 0xa0, 0x26, 0xcb, 0xa6, 0x13 } };
        const GUID Firewater = { 0x79c87e30, 0xe47a, 0x417e, { 0xbc, 0x42, 0xe4, 0xe9, 0x75, 0xe3, 0x2e, 0x95 } };
        const GUID Gas = { 0x253272fd, 0x8f97, 0x44f9, { 0xbd, 0x8a, 0xeb, 0xa2, 0x26, 0x85, 0xb4, 0x8e } };
        const GUID GaseousFireSuppression = { 0x534ee7c8, 0x1a8b, 0x4c13, { 0xae, 0xd0, 0x4e, 0x5d, 0x2d, 0x40, 0x57, 0x76 } };
        const GUID Heating = { 0xbd8b0304, 0x08d5, 0x46f2, { 0x83, 0x02, 0x1f, 0x01, 0x00, 0x07, 0x03, 0xf5 } };
        const GUID IndustrialColdWater = { 0xa3bd2140, 0xf051, 0x441a, { 0x8e, 0x6e, 0x50, 0xcf, 0xd3, 0x2e, 0x62, 0x7a } };
        const GUID IndustrialHotWater = { 0xb10b5bf4, 0x29a6, 0x4000, { 0xad, 0x13, 0xb6, 0x5d, 0x5c, 0x21, 0x45, 0xda } };
        const GUID IndustrialSewage = { 0x101c7d57, 0x93cf, 0x47e0, { 0x86, 0x77, 0x37, 0x8f, 0x97, 0x29, 0x96, 0x62 } };
        const GUID LightingCircuit = { 0xb52d3d9e, 0x7fad, 0x4806, { 0x9f, 0xb6, 0x43, 0xc4, 0x82, 0x4a, 0x08, 0x66 } };
        const GUID OtherDuctSystem = { 0x4a3350ce, 0xd47a, 0x43c4, { 0xa4, 0xa5, 0xa8, 0x85, 0xf7, 0x09, 0x85, 0x2a } };
        const GUID OtherElectricalSystem = { 0x68e42245, 0xb06c, 0x4698, { 0x8a, 0x91, 0xc4, 0x23, 0x8c, 0x3d, 0xe0, 0xe4 } };
        const GUID OtherPipeSystem = { 0x6a969910, 0xfc2b, 0x44d3, { 0xb4, 0x74, 0x92, 0x89, 0x55, 0xd4, 0xca, 0x4d } };
        const GUID PowerCircuit = { 0x57464fee, 0x9d42, 0x4854, { 0xb6, 0x65, 0x12, 0xc1, 0x49, 0x00, 0x5b, 0xd1 } };
        const GUID Pressurization = { 0x708e1a09, 0x58f4, 0x47f9, { 0x97, 0x17, 0xda, 0x2d, 0xee, 0x5f, 0x0e, 0x51 } };
        const GUID Rainwater = { 0xf5c48227, 0xa0ee, 0x4192, { 0x86, 0xa9, 0xcc, 0xb2, 0xeb, 0x0b, 0x67, 0x18 } };
        const GUID SmokeExhaust = { 0x1ee4b2e9, 0x6176, 0x4063, { 0x88, 0x8a, 0xe1, 0x06, 0x69, 0x56, 0xdf, 0x92 } };
        const GUID Vacuum = { 0x6e5c471d, 0x4314, 0x4a62, { 0x98, 0x72, 0x9c, 0x1b, 0x6b, 0xe9, 0x44, 0x24 } };
        const GUID Ventilation = { 0xd30973b8, 0xa244, 0x4c4f, { 0x91, 0xa9, 0xa0, 0x33, 0xed, 0x23, 0x36, 0xb6 } };
    }

    namespace EntityTypes {
        const GUID Building = { 0x165d15bc, 0xfd8d, 0x4bbb, { 0xb7, 0x3c, 0x56, 0x95, 0x6d, 0x7c, 0xeb, 0xf1 } };
        const GUID Drawing = { 0xa7dfe1e1, 0xbf2c, 0x4c4a, { 0xba, 0x74, 0x3f, 0x15, 0x6b, 0x1b, 0xbf, 0x8f } };
        const GUID Wall = { 0x4329112a, 0x6b65, 0x48d9, { 0x9d, 0xa8, 0xab, 0xf1, 0xf8, 0xf3, 0x63, 0x27 } };
        const GUID Window = { 0x2b02b353, 0x2ca5, 0x4566, { 0x88, 0xbb, 0x91, 0x7e, 0xa8, 0x46, 0x01, 0x74 } };
        const GUID Door = { 0x1cfba99c, 0x01e7, 0x4078, { 0xae, 0x1a, 0x3e, 0x2f, 0xf0, 0x67, 0x35, 0x99 } };
        const GUID Floor = { 0x8a5e80e2, 0x8a3b, 0x4e0d, { 0x9a, 0x68, 0x4e, 0x2d, 0x1c, 0x42, 0x3c, 0x6e } };
        const GUID Column = { 0x8c3d7cf6, 0x4a06, 0x4426, { 0x93, 0x7e, 0x14, 0x31, 0x7c, 0x43, 0x05, 0x4a } };
        const GUID Beam = { 0xa46e21e5, 0x2eaf, 0x45ab, { 0x9e, 0x12, 0x8d, 0x79, 0x42, 0xcc, 0x59, 0xf3 } };
    }

    namespace Parameters {
        const GUID AssemblyHorizontalOffset = { 0xb3ea95e0, 0x0119, 0x4e90, { 0xb9, 0x9f, 0xd6, 0x24, 0xc6, 0x70, 0xd9, 0xc2 } };
        const GUID WallHeight = { 0x0c6c933c, 0xe47c, 0x40d2, { 0xba, 0x84, 0xb8, 0xae, 0x5c, 0xce, 0xc6, 0xf1 } };
    }

    namespace Quantities {
        const GUID Area = { 0x025f4cef, 0x7b6d, 0x45d9, { 0x99, 0xe6, 0x2c, 0xd8, 0x51, 0x30, 0x6e, 0x03 } };
        const GUID Volume = { 0x6e63058d, 0x0ab3, 0x4abd, { 0xa9, 0xba, 0x57, 0x4e, 0x17, 0x46, 0xc5, 0xad } };
    }


    inline std::wstring toWideString(const std::string& str) {
        if (str.empty()) return std::wstring();
        
        int size_needed = MultiByteToWideChar(CP_UTF8, 0, str.c_str(), (int)str.size(), NULL, 0);
        std::wstring result(size_needed, 0);
        MultiByteToWideChar(CP_UTF8, 0, str.c_str(), (int)str.size(), &result[0], size_needed);
        return result;
    }

    inline std::string toNarrowString(const std::wstring& str) {
        if (str.empty()) return std::string();
        
        int size_needed = WideCharToMultiByte(CP_UTF8, 0, str.c_str(), (int)str.size(), NULL, 0, NULL, NULL);
        std::string result(size_needed, 0);
        WideCharToMultiByte(CP_UTF8, 0, str.c_str(), (int)str.size(), &result[0], size_needed, NULL, NULL);
        return result;
    }
    
}


#define EXPORT_PLUGIN(PLUGIN) \
  extern "C" __declspec(dllexport) Renga::IPlugin* createPlugin() \
{ \
  return new PLUGIN(); \
}