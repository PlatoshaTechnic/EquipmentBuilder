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


#include <atomic>
#include "EquipmentBuilderUI.hpp"
#include "EquipmentBuilder.hpp"


static std::atomic<int> fUIRefCount{0};
static std::atomic<bool> fUIRegistered{false};

UI& UI::GetInstance() {
    static UI instance;
    return instance;
}

void UI::SetBuilder(EquipmentBuilder* pBuilder) {
    fpBuilder = pBuilder;
}

void UI::OpenUI() {
    if (fWindowCreated) { return; }
    fWindowCreated = true;

    if (!fUIRegistered) {
        WNDCLASS wc = {};
        wc.lpfnWndProc = WndProc;
        wc.hInstance = GetModuleHandle(nullptr);
        wc.lpszClassName = L"EquipmentBuilder";
        wc.hCursor = LoadCursor(nullptr, IDC_ARROW);
        wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
        if (RegisterClass(&wc)) { fUIRegistered = true; }
    }
    fUIRefCount++;

    Window = CreateWindowEx(0, L"EquipmentBuilder", L"EquipmentBuilder", WS_OVERLAPPEDWINDOW | WS_VISIBLE, CW_USEDEFAULT, CW_USEDEFAULT, 400, 300, nullptr, nullptr, GetModuleHandle(nullptr), this);
    if (Window) { fWindowCreated = true; }
}

void UI::CloseUI() {
    if (Window) {
        DestroyWindow(Window);
        Window = nullptr;
        fWindowCreated = false;
        fUIRefCount--;
        if (fUIRefCount == 0 && fUIRegistered) {
            UnregisterClass(L"EquipmentBuilder", GetModuleHandle(nullptr));
            fUIRegistered = false;
        }
    }
}

LRESULT CALLBACK UI::WndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    UI* pUI = nullptr;

    if (uMsg == WM_CREATE) {
        CREATESTRUCT* pCreate = reinterpret_cast<CREATESTRUCT*>(lParam);
        pUI = reinterpret_cast<UI*>(pCreate->lpCreateParams);
        SetWindowLongPtr(hwnd, GWLP_USERDATA, reinterpret_cast<LONG_PTR>(pUI));
    }
    else { pUI = reinterpret_cast<UI*>(GetWindowLongPtr(hwnd, GWLP_USERDATA)); }

    if (pUI) { return pUI->HandleMessage(hwnd, uMsg, wParam, lParam); }

    return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

LRESULT UI::HandleMessage(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
        case WM_CREATE: {
            CreateUI(hwnd);
            return 0;
        }
        case WM_COMMAND: {
            if (LOWORD(wParam) == 102) {
                if (fpBuilder) {
                    fpBuilder->ImportPrimitives();
                    wchar_t buffer[256];
                    HWND hEdit = GetDlgItem(hwnd, 101);
                    if (hEdit) {
                        GetWindowText(hEdit, buffer, 256);
                        HWND hStatus = GetDlgItem(hwnd, 103);
                        if (hStatus && wcslen(buffer) > 0) {
                            wchar_t message[512];
                            swprintf(message, 512, L"Введено: \"%s\"", buffer);
                            SetWindowText(hStatus, message);
                        }
                    }
                }
                else { MessageBox(hwnd, L"Builder not initialized", L"Error", MB_OK); }
            }
            break;
        }
        case WM_DESTROY: {
            UI* pUI = reinterpret_cast<UI*>(GetWindowLongPtr(hwnd, GWLP_USERDATA));
            if (pUI) {
                pUI->fWindowCreated = false;
                pUI->Window = nullptr;
                fUIRefCount--;
                if (fUIRefCount == 0 && fUIRegistered) {
                    UnregisterClass(L"EquipmentBuilder", GetModuleHandle(nullptr));
                    fUIRegistered = false;
                }
            }
            return 0;
        }
    }
    return DefWindowProc(hwnd, uMsg, wParam, lParam);
}



void UI::CreateUI(HWND hwnd) {
    CreateWindow(L"STATIC", L"Введите данные:", WS_CHILD | WS_VISIBLE, 10, 10, 150, 20, hwnd, nullptr, GetModuleHandle(nullptr), nullptr);
    CreateWindow(L"EDIT", L"", WS_CHILD | WS_VISIBLE | WS_BORDER, 10, 35, 200, 25, hwnd, reinterpret_cast<HMENU>(101), GetModuleHandle(nullptr), nullptr);
    CreateWindow(L"BUTTON", L"Импортировать куб", WS_CHILD | WS_VISIBLE, 10, 70, 150, 30, hwnd, reinterpret_cast<HMENU>(102), GetModuleHandle(nullptr), nullptr);
    CreateWindow(L"STATIC", L"Статус: ", WS_CHILD | WS_VISIBLE, 10, 110, 300, 20, hwnd, reinterpret_cast<HMENU>(103), GetModuleHandle(nullptr), nullptr);
}