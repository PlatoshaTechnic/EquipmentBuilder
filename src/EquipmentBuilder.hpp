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
#include "RengaPluginHelper.hpp"




class EquipmentBuilderActionHandler;

struct ActionHandlerDeleter {
    void operator()(EquipmentBuilderActionHandler* ptr) const;
};

class UI;

class EquipmentBuilder : public Renga::IPlugin {
public:
    EquipmentBuilder() {};
    ~EquipmentBuilder() {};

    bool initialize(const wchar_t* Path) override;
    void stop() override;
    void ImportPrimitives();
    
private:
    const GUID ActionId = {0x3b719fe0, 0xa5ae, 0x4995, {0xb5, 0xd8, 0xeb, 0x84, 0xd5, 0xed, 0xd0, 0x0c}};
    Renga::IApplicationPtr pApplication;
    std::wstring PluginPath = L"";
    std::wstring IconsPath = L"";
    std::wstring PrimitivesPath = L"";
    std::unique_ptr<EquipmentBuilderActionHandler, ActionHandlerDeleter> pActionHandler;
    friend class UI;
};