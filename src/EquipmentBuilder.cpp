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


#include "EquipmentBuilder.hpp"
#include "EquipmentBuilderUI.hpp"


class EquipmentBuilderActionHandler : public Renga::ActionEventHandler {
public:
    EquipmentBuilderActionHandler(Renga::IAction* pAction, EquipmentBuilder* pBuilder) : Renga::ActionEventHandler(pAction), m_pBuilder(pBuilder) {}

    void OnTriggered() override { 
        if (m_pBuilder) {
            UI::GetInstance().SetBuilder(m_pBuilder);
            UI::GetInstance().OpenUI();
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
    this->PrimitivesPath = this->PluginPath + L"/Application/primitives/";
    this->IconsPath = this->PluginPath + L"/Application/icons/";

    this->pApplication = Renga::CreateApplication();
    if (!this->pApplication) { return false; }

    auto pUI = this->pApplication->GetUI();
    if (!pUI) { return false; }

    auto pImage = pUI->CreateImage();
    if (!pImage) { return false; }

    std::string FullPath = Renga::toNarrowString(this->IconsPath + L"icon.png");
    pImage->LoadFromFile(_bstr_t(FullPath.c_str()));

    auto pAction = pUI->CreateActionWithId(this->ActionId);
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
    UI::GetInstance().CloseUI();
    pActionHandler.reset();
    return;
};

void EquipmentBuilder::ImportPrimitives() {

    Renga::IProjectPtr pProject = this->pApplication->GetProject();
    if (!pProject) {  return; }

    std::string FullPath = Renga::toNarrowString(this->PrimitivesPath + L"boiler.rst");
    Renga::IEntityPtr pImportedCategory = pProject->ImportCategoryS("5d2f3734-5a49-4504-90b1-0676f0f25da7", _bstr_t(FullPath.c_str()));

    if (!pImportedCategory) {
        MessageBox(NULL, L"Не удалось импортировать категорию", L"Ошибка", MB_OK);
        return;
    }

    return;
};


EXPORT_PLUGIN(EquipmentBuilder);




/*
    int styleId = pImportedCategory->GetId();

    auto pModel = pProject->GetModel();
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
    
    auto pOperation = pProject->StartOperation();
    if (!pOperation) { return; }

    auto pNewObject = pModel->CreateObject(pArgs);
    if (!pNewObject) { return; }

    pOperation->Apply();
*/