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
#include <Windows.h>
#include <memory>
#include <string>
#include <atomic>
#include <unordered_map>
#include "RengaPluginHelper.hpp"


class EquipmentBuilderActionHandler;

struct ActionHandlerDeleter {
    void operator()(EquipmentBuilderActionHandler* ptr) const;
};

class EquipmentBuilder : public Renga::IPlugin {
public:

    static std::unordered_map<HWND, EquipmentBuilder*> s_windowMap;
    
    
    EquipmentBuilder() : ActiveBuilder(nullptr) {}
    ~EquipmentBuilder() { CloseUI(); };

    bool initialize(const wchar_t* Path) override;
    void stop() override;

    void OpenUI(EquipmentBuilder* builder);
    void CloseUI();

private:
    void ClearWindow(HWND hwnd);
    void DrawMainPage(HWND hwnd);
    void DrawGeoPage(HWND hwnd);
    void ImportPrimitives();

    HWND Window = nullptr;
    static LRESULT CALLBACK WndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
    LRESULT HandleMessage(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
    std::atomic<bool> fWindowCreated{false};



    Renga::IApplicationPtr pApplication;
    Renga::IProjectPtr pProject;
    std::wstring IconsPath = L"";
    std::wstring PluginPath = L"";
    std::unique_ptr<EquipmentBuilderActionHandler, ActionHandlerDeleter> pActionHandler;
    EquipmentBuilder* ActiveBuilder;
    int ConeId = 0;
    int CubeId = 0;
    int CylinderId = 0;
    int SphereId = 0;
    int PortId = 0;
};