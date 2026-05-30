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


class EquipmentBuilder;

class UI {
public:
    static UI& GetInstance();
    void SetBuilder(EquipmentBuilder* pBuilder);
    void OpenUI();
    void CloseUI();
private:
    UI() = default;
    ~UI() {
        CloseUI();
    }
    UI(const UI&) = delete;
    UI& operator=(const UI&) = delete;

    EquipmentBuilder* fpBuilder = nullptr;
    bool fWindowCreated = false;
    HWND Window = nullptr;

    static LRESULT CALLBACK WndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
    LRESULT HandleMessage(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
    void CreateUI(HWND hwnd);
};