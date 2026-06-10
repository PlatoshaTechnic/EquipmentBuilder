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


#include <filesystem>

#include "EquipmentBuilder.hpp"

std::unordered_map<HWND, EquipmentBuilder*> EquipmentBuilder::s_windowMap;


class EquipmentBuilderActionHandler : public Renga::ActionEventHandler {
public:
    EquipmentBuilderActionHandler(Renga::IAction* pAction, EquipmentBuilder* pBuilder) : Renga::ActionEventHandler(pAction), m_pBuilder(pBuilder) {}

    void OnTriggered() override { 
        if (m_pBuilder) {
            m_pBuilder->OpenUI(m_pBuilder);
        }
    };

    void OnToggled(bool checked) override {};

private:
    EquipmentBuilder* m_pBuilder;
};

void ActionHandlerDeleter::operator()(EquipmentBuilderActionHandler* ptr) const {
    delete ptr;
}

bool EquipmentBuilder::initialize(const wchar_t* Path) {
    this->PluginPath = Path;
    this->IconsPath = this->PluginPath + L"/Application/icons/";

    this->pApplication = Renga::CreateApplication();
    if (!this->pApplication) { return false; }

    auto pUI = this->pApplication->GetUI();
    if (!pUI) { return false; }

    auto pImage = pUI->CreateImage();
    if (!pImage) { return false; }

    std::string FullPath = Renga::toNarrowString(this->IconsPath + L"icon.png");
    pImage->LoadFromFile(_bstr_t(FullPath.c_str()));

    auto pAction = pUI->CreateActionWithId({0x3b719fe0, 0xa5ae, 0x4995, {0xb5, 0xd8, 0xeb, 0x84, 0xd5, 0xed, 0xd0, 0x0c}});
    if (!pAction) { return false; }

    pAction->PutDisplayName(L"EquipmentBuilder");
    pAction->PutToolTip(L"EquipmentBuilder");
    pAction->PutIcon(pImage);

    pActionHandler.reset(new EquipmentBuilderActionHandler(pAction, this));

    auto pUIPanel = pUI->CreateUIPanelExtension();
    if (!pUIPanel) { return false; }

    pUIPanel->AddToolButton(pAction);
    pUI->AddExtensionToPrimaryPanel(pUIPanel);

    return true;
};

void EquipmentBuilder::stop() {
    CloseUI();
    pActionHandler.reset();
    return;
};

void EquipmentBuilder::ImportPrimitives() {
    std::wstring PrimitivesPath = this->PluginPath + L"/Application/primitives/";

    std::string ConePath = Renga::toNarrowString(PrimitivesPath + L"cone.rst");
    std::string CubePath = Renga::toNarrowString(PrimitivesPath + L"cube.rst");
    std::string CylinderPath = Renga::toNarrowString(PrimitivesPath + L"cylinder.rst");
    std::string SpherePath = Renga::toNarrowString(PrimitivesPath + L"sphere.rst");
    std::string PortPath = Renga::toNarrowString(PrimitivesPath + L"port.rst");

    this->pProject = this->pApplication->GetProject();
    if (!this->pProject) {
        return;
    }
    
    try {
        if (this->pProject->HasActiveOperation()) {
            MessageBox(NULL, bstr_t(L"Has Active Operation | " + this->pApplication->GetLastError()), L"Ошибка", MB_OK);
            return;
        }

        auto pOperation = this->pProject->StartOperation();

        auto ImportedCone = this->pProject->ImportCategory(Renga::EntityTypes::EquipmentCategory, _bstr_t(ConePath.c_str()));
        auto ImportedCube = this->pProject->ImportCategory(Renga::EntityTypes::EquipmentCategory, _bstr_t(CubePath.c_str()));
        auto ImportedCylinder = this->pProject->ImportCategory(Renga::EntityTypes::EquipmentCategory, _bstr_t(CylinderPath.c_str()));
        auto ImportedSphere = this->pProject->ImportCategory(Renga::EntityTypes::EquipmentCategory, _bstr_t(SpherePath.c_str()));
        auto ImportedPort = this->pProject->ImportCategory(Renga::EntityTypes::EquipmentCategory, _bstr_t(PortPath.c_str()));
    
        this->ConeId = ImportedCone->GetId();
        this->CubeId = ImportedCube->GetId();
        this->CylinderId = ImportedCylinder->GetId();
        this->SphereId = ImportedSphere->GetId();
        this->PortId = ImportedPort->GetId();

        if ((this->ConeId != 0) && (this->CubeId != 0) && (this->CylinderId != 0) && (this->SphereId != 0) && (this->PortId != 0)) {
            pOperation->Apply();
        }
        else {
            pOperation->Rollback();
        }

    }
    catch (...) {
        MessageBox(NULL, L"хз", L"Ошибка", MB_OK);
    }
    return;
};


EXPORT_PLUGIN(EquipmentBuilder);




/*
    int styleId = pImportedCategory->GetId();

    auto pModel = this->pProject->GetModel();
    if (!pModel) { return; }

    auto pArgs = pModel->CreateNewEntityArgs();
    if (!pArgs) { return; }

    pArgs->StyleId = styleId;
    pArgs->PutTypeId(Renga::EntityTypes::Equipment);
    pArgs->HostObjectId = 0;

    Renga::Placement3D placement;
    if (!placement) { return; }
    placement.Origin.X = 0.0;
    placement.Origin.Y = 0.0;
    placement.Origin.Z = 0.0;
    placement.xAxis.X = 1.0;
    placement.xAxis.Y = 0.0;
    placement.xAxis.Z = 0.0;
    placement.zAxis.X = 0.0;
    placement.zAxis.Y = 0.0;
    placement.zAxis.Z = 1.0;
    pArgs->PutPlacement3D(placement);
    
    auto pOperation = this->pProject->StartOperation();
    if (!pOperation) { return; }

    auto pNewObject = pModel->CreateObject(pArgs);
    if (!pNewObject) { return; }

    pOperation->Apply();
*/

/*
enum ControlIDs : int {
    Button_OK = 100,
    Button_Cancel,
    Edit_Username,
    Edit_Password,
    Checkbox_Remember,
    Static_Info,
    MAX_CONTROLS
};
*/

void EquipmentBuilder::OpenUI(EquipmentBuilder* builder) {
    this->ActiveBuilder = builder;
    if (fWindowCreated.load()) { return; }

    WNDCLASS wc = {};
    wc.lpfnWndProc = WndProc;
    wc.hInstance = GetModuleHandle(nullptr);
    wc.lpszClassName = L"EquipmentBuilder";
    wc.hCursor = LoadCursor(nullptr, IDC_ARROW);
    wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
    if (!RegisterClass(&wc)) { return; }
    fWindowCreated.store(true);

    Window = CreateWindowEx(
        0, L"EquipmentBuilder", L"EquipmentBuilder",
        WS_OVERLAPPEDWINDOW | WS_VISIBLE, CW_USEDEFAULT, CW_USEDEFAULT, 400, 300,
        nullptr, nullptr, GetModuleHandle(nullptr), this
    );

    if (!Window) {
        if (fWindowCreated.load()) {
            UnregisterClass(L"EquipmentBuilder", GetModuleHandle(nullptr));
            fWindowCreated.store(false);
        }
        return;
    }
    
    fWindowCreated.store(true);
};

void EquipmentBuilder::CloseUI() {
    if (Window && IsWindow(Window)) { DestroyWindow(Window); }

    Window = nullptr;
    fWindowCreated.store(false);

    if (fWindowCreated.load()) {
        UnregisterClass(L"EquipmentBuilder", GetModuleHandle(nullptr));
        fWindowCreated.store(false);
    }
};

LRESULT CALLBACK EquipmentBuilder::WndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    if (uMsg == WM_CREATE) {
        CREATESTRUCT* pCreate = reinterpret_cast<CREATESTRUCT*>(lParam);
        auto pBuilder = reinterpret_cast<EquipmentBuilder*>(pCreate->lpCreateParams);
        s_windowMap[hwnd] = pBuilder;
        SetWindowLongPtr(hwnd, GWLP_USERDATA, reinterpret_cast<LONG_PTR>(pBuilder));
        if (pBuilder) {
            return pBuilder->HandleMessage(hwnd, uMsg, wParam, lParam);
        }
    }
    else {
        auto it = s_windowMap.find(hwnd);
        if (it != s_windowMap.end()) {
            auto pBuilder = it->second;
            if (pBuilder) {
                return pBuilder->HandleMessage(hwnd, uMsg, wParam, lParam);
            }
        }
    }
    
    return DefWindowProc(hwnd, uMsg, wParam, lParam);
};

LRESULT EquipmentBuilder::HandleMessage(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
        case WM_CREATE: {
            if (this->ActiveBuilder) {
                this->ActiveBuilder->ImportPrimitives();
                DrawMainPage(hwnd);
            }
            return 0;
        }
        case WM_COMMAND: {
            if (LOWORD(wParam) == 100) {
                if (this->ActiveBuilder) {
                    DrawGeoPage(hwnd);
                }
            }
            else { MessageBox(hwnd, L"Not initialized", L"Error", MB_OK); }
            break;
        }
        case WM_DESTROY: {
            if (Window) {
                fWindowCreated.store(false);
                Window = nullptr;
                if (fWindowCreated.load()) {
                    UnregisterClass(L"EquipmentBuilder", GetModuleHandle(nullptr));
                    fWindowCreated.store(false);
                }
            }
            return 0;
        }
    }
    return DefWindowProc(hwnd, uMsg, wParam, lParam);
};

void EquipmentBuilder::ClearWindow(HWND hwnd) {
    HWND hChild = GetTopWindow(hwnd);
    while (hChild) {
        HWND hNext = GetNextWindow(hChild, GW_HWNDNEXT);
        DestroyWindow(hChild);
        hChild = hNext;
    }
}

void EquipmentBuilder::DrawMainPage(HWND hwnd) {
    ClearWindow(hwnd);
    CreateWindow(L"BUTTON", L"Открыть геометрию",
        WS_CHILD | WS_VISIBLE, 10, 70, 150, 30,
        hwnd, reinterpret_cast<HMENU>(100),
        GetModuleHandle(nullptr), nullptr
    );
    InvalidateRect(hwnd, nullptr, TRUE);
    UpdateWindow(hwnd);
};

void EquipmentBuilder::DrawGeoPage(HWND hwnd) {
    ClearWindow(hwnd);
    CreateWindow(L"BUTTON", L"Добавить куб",
        WS_CHILD | WS_VISIBLE, 10, 10, 150, 30,
        hwnd, reinterpret_cast<HMENU>(200),
        GetModuleHandle(nullptr), nullptr
    );
    CreateWindow(L"BUTTON", L"Добавить цилиндр",
        WS_CHILD | WS_VISIBLE, 10, 30, 150, 30,
        hwnd, reinterpret_cast<HMENU>(201),
        GetModuleHandle(nullptr), nullptr
    );
    CreateWindow(L"BUTTON", L"Добавить сферу",
        WS_CHILD | WS_VISIBLE, 10, 50, 150, 30,
        hwnd, reinterpret_cast<HMENU>(202),
        GetModuleHandle(nullptr), nullptr
    );
    CreateWindow(L"BUTTON", L"Добавить конус",
        WS_CHILD | WS_VISIBLE, 10, 70, 150, 30,
        hwnd, reinterpret_cast<HMENU>(203),
        GetModuleHandle(nullptr), nullptr
    );
    CreateWindow(L"BUTTON", L"Добавить порт",
        WS_CHILD | WS_VISIBLE, 10, 90, 150, 30,
        hwnd, reinterpret_cast<HMENU>(204),
        GetModuleHandle(nullptr), nullptr
    );
    InvalidateRect(hwnd, nullptr, TRUE);
    UpdateWindow(hwnd);
};