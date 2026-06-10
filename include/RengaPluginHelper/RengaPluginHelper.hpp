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
#include <Windows.h>
#include <cassert>
#include <cstdint>
#include <string>
#include <OAIdl.h>
#include <OCIdl.h>

#pragma pack(push, 8)
#include <comdef.h>


namespace Renga {
	enum ImageFormat : int;
	enum ViewType : int;
	enum ContextMenuShowCase : int;
	enum MessageIcon : int;
	enum PropertyType : int;
	enum AngleUnit : int;
	enum AreaUnit : int;
	enum LengthUnit : int;
	enum Logical : int;
	enum MassUnit : int;
	enum VolumeUnit : int;
	enum ParameterValueType : int;
	enum ParameterType : int;
	enum QuantityType : int;
	enum Curve2DType : int;
	enum Curve3DType : int;
	enum FlowDirectionType : int;
	enum PortRole : int;
	enum LayeredMaterialGroup : int;
	enum ReinforcementUnitType : int;
	enum ProjectType : int;
	enum AutocadVersion : int;
	enum SystemCategory : int;
	enum PlumbingFixtureCategory : int;
	enum EquipmentCategory : int;
	enum IfcVersion : int;
	enum VisualStyle : int;
	enum EventType : int;
	enum PageOrientation : int;
	enum LineStyle : int;
	enum RoofEdgeShape : int;
	enum PipeConnectionType : int;
	enum DuctConnectionType : int;
	enum DuctProfile : int;
	enum PipeThreadSize : int;

	struct Application; // coclass
	struct PropertyDescription;
	struct Point3D;
	struct Vector3D;
	struct Placement3D;
	struct Point2D;
	struct Vector2D;
	struct Cube;
	struct __MIDL___MIDL_itf_RengaCOMAPI_0002_0237_0001;
	struct RichTextToken;
	struct Color;
	struct FontStyle;
	struct Rect;
	struct Placement2D;
	struct Triangle;
	struct FloatPoint3D;
	struct FloatVector3D;
	struct FloatPoint2D;
	struct RouteJointParams;
	struct ProductVersion;
	typedef struct __MIDL___MIDL_itf_RengaCOMAPI_0002_0237_0001 LayeredMaterialIdGroupPair;

	struct __declspec(uuid("0ec5d324-8b9f-4d30-84ed-ab711618d1c1")) __Renga;
	struct __declspec(uuid("ab11d0cf-6622-4962-bd64-d8dc197e8de7")) IUI;
	struct __declspec(uuid("5fb2d8a8-ee98-41bf-94a9-97d9bdbf246f")) IAction;
	struct __declspec(uuid("38bd3999-a5f5-4b19-a59b-99e5c41bed1d")) IImage;
	struct __declspec(uuid("cf2faa60-465c-4aac-a202-09f19799452f")) IUIPanelExtension;
	struct __declspec(uuid("57477194-72a3-4f0d-a722-462d5df46f62")) ISplitButton;
	struct __declspec(uuid("2e341e2e-923b-47ac-9777-919af8b6fdf5")) IDropDownButton;
	struct __declspec(uuid("91404937-1786-43b9-8b97-4b1e3d7a72fd")) IToolButton;
	struct __declspec(uuid("4538c4d5-5fe0-4288-8e58-30f099b8b703")) IContextMenu;
	struct __declspec(uuid("f7a588de-f313-4312-931d-9c65159717b3")) IContextMenuItem;
	struct __declspec(uuid("4b5ed39f-69af-4ed6-a76a-1c83c85871a5")) IContextMenuNodeItem;
	struct __declspec(uuid("d4553852-96ba-4f90-a33a-5bc6c4379045")) IOperation;
	struct __declspec(uuid("8bcca074-d8d4-4ebb-85ff-e558db1660ed")) IProperty;
	struct __declspec(uuid("f8c7f785-4da3-4f3f-bb0d-a6e41a5b86a2")) IPropertyContainer;
	struct __declspec(uuid("ee27e9f3-f775-4ad4-841a-55aa500006fa")) IGuidCollection;
	struct __declspec(uuid("58500a91-b7bb-4dff-ba50-a46f28407954")) IPropertyManager;
	struct __declspec(uuid("1d239235-d8be-4e3c-8291-81aef7cf1f4c")) IPropertyDescription;
	struct __declspec(uuid("094116c5-005e-4bde-a147-e16bd5807364")) IParameter;
	struct __declspec(uuid("bfb03135-9584-4896-8097-05080e9ddc0d")) IParameterDefinition;
	struct __declspec(uuid("29cccdc9-6440-4a72-8198-047d9006d3b8")) IParameterContainer;
	struct __declspec(uuid("41d65038-b943-4bbf-bc82-0ea6cfbb8745")) IModelObject;
	struct __declspec(uuid("c25f8e02-57b2-41af-8e2a-93c555c7bead")) IQuantityContainer;
	struct __declspec(uuid("060af337-d388-43dd-a1ad-5fb5c56a3564")) IQuantity;
	struct __declspec(uuid("755196ef-fde0-4504-b867-662e235009c0")) ILevel;
	struct __declspec(uuid("7686e4a0-7b9e-46f9-8e8a-c1ef314a2c79")) IPlacement3D;
	struct __declspec(uuid("f86896f2-82bf-4b35-a1de-c0fd8924a30b")) ITransform3D;
	struct __declspec(uuid("b102200d-6789-4a57-a97e-16dc283cad38")) IRoom;
	struct __declspec(uuid("db74facf-ac6e-44dc-8023-7b1799280a02")) IRoomRegionDescription;
	struct __declspec(uuid("93537c3a-ef32-46c1-bfa5-8bcc5865b7aa")) IRegion2D;
	struct __declspec(uuid("0af85250-03b4-4de4-bd7d-42da4221dc8e")) ICurve2D;
	struct __declspec(uuid("0b6b049f-f697-4c39-8620-39444d79b078")) ITransform2D;
	struct __declspec(uuid("7302ebae-6e39-4831-8b56-7b79ba6c5c8e")) ICurve3D;
	struct __declspec(uuid("b2cce71a-fb49-406c-92cc-3b6782988bab")) IEntityWithPorts;
	struct __declspec(uuid("35d49f52-2be4-4f7b-960f-79fd1b64a28b")) IPort;
	struct __declspec(uuid("e14d80b2-00c9-41f3-92d7-879bff6cf0d0")) IObjectWithMaterial;
	struct __declspec(uuid("c1f50bf7-da6e-430a-a1da-6f7eac914bca")) IObjectWithLayeredMaterial;
	struct __declspec(uuid("c1c6924e-6b1b-4626-a392-2151e1dce223")) ILayerCollection;
	struct __declspec(uuid("b8cfc5c9-1de8-4a98-9084-107793849c9f")) ILayer;
	struct __declspec(uuid("952b2e3a-0aee-4744-9587-ff2c6bb1b388")) ILevelObject;
	struct __declspec(uuid("394ceca1-63b0-4438-a3fd-da8cc5d23043")) IObjectWithLink;
	struct __declspec(uuid("8205a058-1bbd-4452-910b-a1d88c0ceb97")) IObjectWithMark;
	struct __declspec(uuid("2e79e830-0706-4086-8392-3a93c5aea873")) IObjectWithInsulation;
	struct __declspec(uuid("014033f6-309e-4b26-8f33-aefa157058dd")) IEntity;
	struct __declspec(uuid("740ac9a9-5712-486e-b2b5-e3e3b88a6590")) IObjectReinforcementModel;
	struct __declspec(uuid("edc0687a-fed9-4f83-a123-9e1a7af0b44e")) IRebarUsageCollection;
	struct __declspec(uuid("2f9b4d51-d10e-4d30-87b6-7ac577dc2ab9")) IRebarUsage;
	struct __declspec(uuid("85eeb5ac-352b-46f4-b5ed-9f21b6a5a4c9")) IPlacement3DCollection;
	struct __declspec(uuid("8404f3b7-477d-4deb-a411-3019821d1680")) IReinforcementUnitUsageCollection;
	struct __declspec(uuid("973e3683-41f1-41a6-b690-e67ba4315b68")) IReinforcementUnitUsage;
	struct __declspec(uuid("d1a3c557-a785-4863-92bb-4c3db1cc5e14")) IRichTextDocument;
	struct __declspec(uuid("f10116fc-7a17-42ff-ad50-447e120b95de")) IRichTextParagraph;
	struct __declspec(uuid("08318a1b-6eee-47b1-98af-e7611cc2873e")) ITextObject;
	struct __declspec(uuid("c5d27be1-9a4c-4a9d-b114-c1f2eccc1986")) IBaseline2DObject;
	struct __declspec(uuid("9843b29a-142b-4481-b938-6439437a0de1")) IPlacement2DObject;
	struct __declspec(uuid("80183df8-fbc0-4403-a822-8b04447cdebe")) IPlacement2D;
	struct __declspec(uuid("7fe2a5dc-c313-4734-89af-6cc781f7b403")) IBaseline3DObject;
	struct __declspec(uuid("00373307-761c-41df-853b-de18750905f8")) IGrid;
	struct __declspec(uuid("ece43445-ac1c-441e-980c-187e6a033deb")) IMesh;
	struct __declspec(uuid("081f31cb-f579-4586-9c4f-5b110fe129d2")) IExportedObject3D;
	struct __declspec(uuid("4ac64470-f1e9-407d-8504-0d464dc6d9eb")) IExportedObject3DCollection;
	struct __declspec(uuid("3c921661-5fd2-4c1c-9a10-818e926d53a0")) IGridWithMaterialCollection;
	struct __declspec(uuid("a91bd6bc-8202-4f1c-9ecc-49bb37a65f09")) IGridWithMaterial;
	struct __declspec(uuid("1a1c2173-0499-4af9-9aff-a88a8cdbe74e")) IGridMaterial;
	struct __declspec(uuid("02b96194-9d80-4afc-9b63-755f93c0aa52")) IDataExporter;
	struct __declspec(uuid("8f863f53-7d7b-47ff-b075-f048380c291e")) IMaterial;
	struct __declspec(uuid("0fa22f3e-2ab4-43a7-b122-3b59db4fed92")) ILayeredMaterial;
	struct __declspec(uuid("0a71fa66-bf5c-46d3-93d0-19ef14e0e324")) IMaterialLayerCollection;
	struct __declspec(uuid("80ab5211-ed65-4eb7-a52b-773882dc4f55")) IMaterialLayer;
	struct __declspec(uuid("8e56b3d1-52e6-4f48-89cd-a470ae11b6cc")) IMaterialManager;
	struct __declspec(uuid("5ca53bea-81dd-460c-9b37-bb352dd6a786")) ILayeredMaterialManager;
	struct __declspec(uuid("142b12f1-a634-4438-af46-2f4bac125641")) ICamera3D;
	struct __declspec(uuid("c6f88e0e-91e3-45df-82d8-01fb601b9c1e")) IProject;
	struct __declspec(uuid("6321612c-d9b0-409e-b1ac-210d1b3ed3fc")) IModel;
	struct __declspec(uuid("0937437d-07dc-47ac-baae-8dc0cf3f19d7")) IModelObjectCollection;
	struct __declspec(uuid("45526125-e2cb-4097-be1a-67d31a3a9646")) INewEntityArgs;
	struct __declspec(uuid("e8a39aa8-eb26-4c6f-8777-d1fcf59c05c3")) IReinforcementUnitStyleManager;
	struct __declspec(uuid("dcbd4ccb-e29b-4d86-87ea-4f8c4a667f24")) IRebarStyle;
	struct __declspec(uuid("256f3705-30f3-4043-bd2d-d3bda77f70a7")) IReinforcementUnitStyle;
	struct __declspec(uuid("2edda574-0bd3-4f87-960c-edffb091a0e4")) IDrawingCollection;
	struct __declspec(uuid("1535e672-26e0-4315-8c65-a7dd9d447921")) IDrawing;
	struct __declspec(uuid("7b27f1d3-150b-46c2-a7e5-5225f09a863e")) ITitleBlockInstance;
	struct __declspec(uuid("8d95843d-4602-4b68-810a-d15f545971b8")) IProfileDescriptionManager;
	struct __declspec(uuid("2c0e54a1-59af-4aef-8229-5e3e286fae91")) IProfileDescription;
	struct __declspec(uuid("76fa5f0c-cfb5-4ec3-bece-4ebac9732bc5")) IBeamStyleManager;
	struct __declspec(uuid("eac28f3a-f1a0-4d3d-a0e4-062ed0ea99b9")) IBeamStyle;
	struct __declspec(uuid("1629b1f7-77a7-40ac-8f6a-ba7356f0fb4b")) IProfile;
	struct __declspec(uuid("b136e285-d326-4da6-98f2-a8fe7ddbae25")) IRegion2DCollection;
	struct __declspec(uuid("a9aca105-83bd-49df-9661-2eee7be9b8c1")) IColumnStyleManager;
	struct __declspec(uuid("45b5b05e-fc6f-4c9d-ad9b-9be6f77a20dc")) IColumnStyle;
	struct __declspec(uuid("c2785f49-3d37-441c-97df-df4d2376cc2d")) ISystemStyleManager;
	struct __declspec(uuid("7f7b8800-ab8c-4b93-9c05-1d658a749f80")) ISystemStyle;
	struct __declspec(uuid("90f39dbf-f0f1-41f7-815a-882f55bf7fd5")) IPlumbingFixtureStyleManager;
	struct __declspec(uuid("adce0582-6871-439e-b119-a2985ed49a02")) IPlumbingFixtureStyle;
	struct __declspec(uuid("0c823269-545e-40d1-abfe-03cfe082ef31")) IEquipmentStyleManager;
	struct __declspec(uuid("66f65eb4-09b1-402b-b9e3-d11812926240")) IEquipmentStyle;
	struct __declspec(uuid("b62f2b91-302b-4844-8ed3-f781de76e678")) IIfcExportSettings;
	struct __declspec(uuid("0e1f3d79-34b1-47d4-83b5-2de09bf8b719")) IProjectInfo;
	struct __declspec(uuid("872aa77a-aecb-47ca-b4e4-1eb6b791c7e2")) IBuildingInfo;
	struct __declspec(uuid("022b1a15-13ad-4cc0-bda9-5c514b1a8cbd")) IPostalAddress;
	struct __declspec(uuid("9e81e4e5-2843-46ab-9f26-9ef191adb22d")) ISiteInfo;
	struct __declspec(uuid("6d193059-9942-488e-8667-e39e4fdb448e")) IEntityCollection;
	struct __declspec(uuid("05997cb0-a64b-4a39-9298-810afc79c464")) IUndoStack;
	struct __declspec(uuid("404fc5fc-e6cc-4e15-90fa-d7e2e7c57fa3")) IEngineeringObjectConnector;
	struct __declspec(uuid("69c88e87-b0bf-4593-af21-183e043fc23b")) IPipeSystemConnectionParameters;
	struct __declspec(uuid("d83b9f0b-aa36-4387-98ab-337c1329b512")) IDuctSystemConnectionParameters;
	struct __declspec(uuid("d98d9646-3580-4957-bf33-be490930f7f6")) IElectricalSystemConnectionParameters;
	struct __declspec(uuid("86ae7780-872d-421b-aeb4-a984a5a9afc8")) IView;
	struct __declspec(uuid("26e2531e-bebb-4691-817d-d47c932d05e5")) IModelView;
	struct __declspec(uuid("30312349-6caa-4263-a6c9-720bf1e88f0c")) IView3DParams;
	struct __declspec(uuid("63004d82-81b0-4127-bd0b-d1d977081953")) ILevelViewParams;
	struct __declspec(uuid("4a745d03-5417-4a01-8ea0-3700ae967411")) IEvent;
	struct __declspec(uuid("8b4f0728-578d-43a1-b6b5-f02f75e72e92")) IApplicationCloseEvent;
	struct __declspec(uuid("208b6d44-70cc-483e-a82c-35e6fec4b326")) IProjectCloseEvent;
	struct __declspec(uuid("4792885f-579e-4eda-948d-8923485715bc")) IArc2D;
	struct __declspec(uuid("e62a932a-63af-4d16-bfcb-6dc44b729374")) IPolyCurve2D;
	struct __declspec(uuid("8fd0c47d-e71c-4e29-9665-94c33e63dc79")) ICurve2DCollection;
	struct __declspec(uuid("1764ec4a-3ace-43df-ae25-04cabd72288d")) IArc3D;
	struct __declspec(uuid("6d082b10-9bf0-450c-8004-148899856224")) IPolyCurve3D;
	struct __declspec(uuid("4096183c-2ba3-4885-a00b-0f795eabfe9b")) IBeamParams;
	struct __declspec(uuid("30dc338c-c769-4302-9160-61fda5ba7a02")) IColumnParams;
	struct __declspec(uuid("453c023d-219f-4d9f-b5eb-a35312fc370b")) IFloorParams;
	struct __declspec(uuid("25147c94-4ef4-4af6-8427-e4b972529d35")) IWallParams;
	struct __declspec(uuid("befe6679-e31f-481d-b765-d066b431a804")) IWallContour;
	struct __declspec(uuid("5677902a-2b9c-4ddb-a4de-ed3711c251fc")) IWindowParams;
	struct __declspec(uuid("9b61b244-db0d-448e-8912-6be23b8c1aa3")) IDoorParams;
	struct __declspec(uuid("17a34aee-c4db-46c8-9275-3f04ac2ec0d7")) ILine3DParams;
	struct __declspec(uuid("777a1a04-55b4-4c5c-ba0a-87495592a31a")) IOpeningParams;
	struct __declspec(uuid("944227ae-299e-4b60-8557-f14b7492e6e4")) IRouteParams;
	struct __declspec(uuid("693650f8-47fd-46a8-8380-d43f07d9ae12")) IObjectOnRoutePlacement;
	struct __declspec(uuid("f8c12054-c1ff-4605-8c01-f1926123aa92")) IFlowSegmentPlacement;
	struct __declspec(uuid("f21fc0e1-f0c0-46df-9ae1-54a7c03fdaa9")) IScreenshotSettings;
	struct __declspec(uuid("d3af0c63-0929-4e7f-a4a6-04849dbfa2e6")) IScreenshotService;
	struct __declspec(uuid("05cc27df-c496-4fbc-be1a-a0b116c4d07b")) IRoofSlopes;
	struct __declspec(uuid("ef141d65-6fe0-4360-9b93-9ad624b16c25")) IPortPipeParams;
	struct __declspec(uuid("6278350a-7888-4e51-9a29-acbd6b651d55")) IPortDuctParams;
	struct __declspec(uuid("90752235-e251-4746-b5da-bf10025429b4")) IMath;
	struct __declspec(uuid("175a3cec-1e06-47fa-aaf6-ce8148d06f54")) _ISelectionEvents;
	struct __declspec(uuid("23317d10-a9d1-49e1-b2f2-00d4e5507140")) _IApplicationEvents;
	struct __declspec(uuid("c9e692d6-2163-4fd3-be06-11b723316b6e")) _IActionEvents;
	struct __declspec(uuid("ee71e77c-64bb-45a1-9311-9945c13a82dc")) IApplication;
	struct __declspec(uuid("7ef3b7d7-8854-49dd-bc2c-81cca3fb4b47")) ISelection;

	// Smart pointer typedef declarations
	_COM_SMARTPTR_TYPEDEF(IImage, __uuidof(IImage));
	_COM_SMARTPTR_TYPEDEF(IAction, __uuidof(IAction));
	_COM_SMARTPTR_TYPEDEF(ISplitButton, __uuidof(ISplitButton));
	_COM_SMARTPTR_TYPEDEF(IDropDownButton, __uuidof(IDropDownButton));
	_COM_SMARTPTR_TYPEDEF(IToolButton, __uuidof(IToolButton));
	_COM_SMARTPTR_TYPEDEF(IUIPanelExtension, __uuidof(IUIPanelExtension));
	_COM_SMARTPTR_TYPEDEF(IContextMenuItem, __uuidof(IContextMenuItem));
	_COM_SMARTPTR_TYPEDEF(IContextMenuNodeItem, __uuidof(IContextMenuNodeItem));
	_COM_SMARTPTR_TYPEDEF(IContextMenu, __uuidof(IContextMenu));
	_COM_SMARTPTR_TYPEDEF(IUI, __uuidof(IUI));
	_COM_SMARTPTR_TYPEDEF(IOperation, __uuidof(IOperation));
	_COM_SMARTPTR_TYPEDEF(IProperty, __uuidof(IProperty));
	_COM_SMARTPTR_TYPEDEF(IGuidCollection, __uuidof(IGuidCollection));
	_COM_SMARTPTR_TYPEDEF(IPropertyContainer, __uuidof(IPropertyContainer));
	_COM_SMARTPTR_TYPEDEF(IPropertyDescription, __uuidof(IPropertyDescription));
	_COM_SMARTPTR_TYPEDEF(IPropertyManager, __uuidof(IPropertyManager));
	_COM_SMARTPTR_TYPEDEF(IParameterDefinition, __uuidof(IParameterDefinition));
	_COM_SMARTPTR_TYPEDEF(IParameter, __uuidof(IParameter));
	_COM_SMARTPTR_TYPEDEF(IParameterContainer, __uuidof(IParameterContainer));
	_COM_SMARTPTR_TYPEDEF(IQuantity, __uuidof(IQuantity));
	_COM_SMARTPTR_TYPEDEF(IQuantityContainer, __uuidof(IQuantityContainer));
	_COM_SMARTPTR_TYPEDEF(IModelObject, __uuidof(IModelObject));
	_COM_SMARTPTR_TYPEDEF(ITransform3D, __uuidof(ITransform3D));
	_COM_SMARTPTR_TYPEDEF(IPlacement3D, __uuidof(IPlacement3D));
	_COM_SMARTPTR_TYPEDEF(ILevel, __uuidof(ILevel));
	_COM_SMARTPTR_TYPEDEF(ITransform2D, __uuidof(ITransform2D));
	_COM_SMARTPTR_TYPEDEF(ICurve3D, __uuidof(ICurve3D));
	_COM_SMARTPTR_TYPEDEF(ICurve2D, __uuidof(ICurve2D));
	_COM_SMARTPTR_TYPEDEF(IRegion2D, __uuidof(IRegion2D));
	_COM_SMARTPTR_TYPEDEF(IRoomRegionDescription, __uuidof(IRoomRegionDescription));
	_COM_SMARTPTR_TYPEDEF(IRoom, __uuidof(IRoom));
	_COM_SMARTPTR_TYPEDEF(IPort, __uuidof(IPort));
	_COM_SMARTPTR_TYPEDEF(IEntityWithPorts, __uuidof(IEntityWithPorts));
	_COM_SMARTPTR_TYPEDEF(IObjectWithMaterial, __uuidof(IObjectWithMaterial));
	_COM_SMARTPTR_TYPEDEF(ILayer, __uuidof(ILayer));
	_COM_SMARTPTR_TYPEDEF(ILayerCollection, __uuidof(ILayerCollection));
	_COM_SMARTPTR_TYPEDEF(IObjectWithLayeredMaterial, __uuidof(IObjectWithLayeredMaterial));
	_COM_SMARTPTR_TYPEDEF(ILevelObject, __uuidof(ILevelObject));
	_COM_SMARTPTR_TYPEDEF(IObjectWithLink, __uuidof(IObjectWithLink));
	_COM_SMARTPTR_TYPEDEF(IObjectWithMark, __uuidof(IObjectWithMark));
	_COM_SMARTPTR_TYPEDEF(IEntity, __uuidof(IEntity));
	_COM_SMARTPTR_TYPEDEF(IObjectWithInsulation, __uuidof(IObjectWithInsulation));
	_COM_SMARTPTR_TYPEDEF(IPlacement3DCollection, __uuidof(IPlacement3DCollection));
	_COM_SMARTPTR_TYPEDEF(IRebarUsage, __uuidof(IRebarUsage));
	_COM_SMARTPTR_TYPEDEF(IRebarUsageCollection, __uuidof(IRebarUsageCollection));
	_COM_SMARTPTR_TYPEDEF(IReinforcementUnitUsage, __uuidof(IReinforcementUnitUsage));
	_COM_SMARTPTR_TYPEDEF(IReinforcementUnitUsageCollection, __uuidof(IReinforcementUnitUsageCollection));
	_COM_SMARTPTR_TYPEDEF(IObjectReinforcementModel, __uuidof(IObjectReinforcementModel));
	_COM_SMARTPTR_TYPEDEF(IRichTextParagraph, __uuidof(IRichTextParagraph));
	_COM_SMARTPTR_TYPEDEF(IRichTextDocument, __uuidof(IRichTextDocument));
	_COM_SMARTPTR_TYPEDEF(ITextObject, __uuidof(ITextObject));
	_COM_SMARTPTR_TYPEDEF(IBaseline2DObject, __uuidof(IBaseline2DObject));
	_COM_SMARTPTR_TYPEDEF(IPlacement2D, __uuidof(IPlacement2D));
	_COM_SMARTPTR_TYPEDEF(IPlacement2DObject, __uuidof(IPlacement2DObject));
	_COM_SMARTPTR_TYPEDEF(IBaseline3DObject, __uuidof(IBaseline3DObject));
	_COM_SMARTPTR_TYPEDEF(IGrid, __uuidof(IGrid));
	_COM_SMARTPTR_TYPEDEF(IMesh, __uuidof(IMesh));
	_COM_SMARTPTR_TYPEDEF(IExportedObject3D, __uuidof(IExportedObject3D));
	_COM_SMARTPTR_TYPEDEF(IExportedObject3DCollection, __uuidof(IExportedObject3DCollection));
	_COM_SMARTPTR_TYPEDEF(IGridMaterial, __uuidof(IGridMaterial));
	_COM_SMARTPTR_TYPEDEF(IGridWithMaterial, __uuidof(IGridWithMaterial));
	_COM_SMARTPTR_TYPEDEF(IGridWithMaterialCollection, __uuidof(IGridWithMaterialCollection));
	_COM_SMARTPTR_TYPEDEF(IDataExporter, __uuidof(IDataExporter));
	_COM_SMARTPTR_TYPEDEF(IMaterial, __uuidof(IMaterial));
	_COM_SMARTPTR_TYPEDEF(IMaterialLayer, __uuidof(IMaterialLayer));
	_COM_SMARTPTR_TYPEDEF(IMaterialLayerCollection, __uuidof(IMaterialLayerCollection));
	_COM_SMARTPTR_TYPEDEF(ILayeredMaterial, __uuidof(ILayeredMaterial));
	_COM_SMARTPTR_TYPEDEF(IMaterialManager, __uuidof(IMaterialManager));
	_COM_SMARTPTR_TYPEDEF(ILayeredMaterialManager, __uuidof(ILayeredMaterialManager));
	_COM_SMARTPTR_TYPEDEF(ICamera3D, __uuidof(ICamera3D));
	_COM_SMARTPTR_TYPEDEF(IModelObjectCollection, __uuidof(IModelObjectCollection));
	_COM_SMARTPTR_TYPEDEF(INewEntityArgs, __uuidof(INewEntityArgs));
	_COM_SMARTPTR_TYPEDEF(IModel, __uuidof(IModel));
	_COM_SMARTPTR_TYPEDEF(IRebarStyle, __uuidof(IRebarStyle));
	_COM_SMARTPTR_TYPEDEF(IReinforcementUnitStyle, __uuidof(IReinforcementUnitStyle));
	_COM_SMARTPTR_TYPEDEF(IReinforcementUnitStyleManager, __uuidof(IReinforcementUnitStyleManager));
	_COM_SMARTPTR_TYPEDEF(ITitleBlockInstance, __uuidof(ITitleBlockInstance));
	_COM_SMARTPTR_TYPEDEF(IDrawing, __uuidof(IDrawing));
	_COM_SMARTPTR_TYPEDEF(IDrawingCollection, __uuidof(IDrawingCollection));
	_COM_SMARTPTR_TYPEDEF(IProfileDescription, __uuidof(IProfileDescription));
	_COM_SMARTPTR_TYPEDEF(IProfileDescriptionManager, __uuidof(IProfileDescriptionManager));
	_COM_SMARTPTR_TYPEDEF(IRegion2DCollection, __uuidof(IRegion2DCollection));
	_COM_SMARTPTR_TYPEDEF(IProfile, __uuidof(IProfile));
	_COM_SMARTPTR_TYPEDEF(IBeamStyle, __uuidof(IBeamStyle));
	_COM_SMARTPTR_TYPEDEF(IBeamStyleManager, __uuidof(IBeamStyleManager));
	_COM_SMARTPTR_TYPEDEF(IColumnStyle, __uuidof(IColumnStyle));
	_COM_SMARTPTR_TYPEDEF(IColumnStyleManager, __uuidof(IColumnStyleManager));
	_COM_SMARTPTR_TYPEDEF(ISystemStyle, __uuidof(ISystemStyle));
	_COM_SMARTPTR_TYPEDEF(ISystemStyleManager, __uuidof(ISystemStyleManager));
	_COM_SMARTPTR_TYPEDEF(IPlumbingFixtureStyle, __uuidof(IPlumbingFixtureStyle));
	_COM_SMARTPTR_TYPEDEF(IPlumbingFixtureStyleManager, __uuidof(IPlumbingFixtureStyleManager));
	_COM_SMARTPTR_TYPEDEF(IEquipmentStyle, __uuidof(IEquipmentStyle));
	_COM_SMARTPTR_TYPEDEF(IEquipmentStyleManager, __uuidof(IEquipmentStyleManager));
	_COM_SMARTPTR_TYPEDEF(IIfcExportSettings, __uuidof(IIfcExportSettings));
	_COM_SMARTPTR_TYPEDEF(IProjectInfo, __uuidof(IProjectInfo));
	_COM_SMARTPTR_TYPEDEF(IPostalAddress, __uuidof(IPostalAddress));
	_COM_SMARTPTR_TYPEDEF(IBuildingInfo, __uuidof(IBuildingInfo));
	_COM_SMARTPTR_TYPEDEF(ISiteInfo, __uuidof(ISiteInfo));
	_COM_SMARTPTR_TYPEDEF(IEntityCollection, __uuidof(IEntityCollection));
	_COM_SMARTPTR_TYPEDEF(IUndoStack, __uuidof(IUndoStack));
	_COM_SMARTPTR_TYPEDEF(IPipeSystemConnectionParameters, __uuidof(IPipeSystemConnectionParameters));
	_COM_SMARTPTR_TYPEDEF(IDuctSystemConnectionParameters, __uuidof(IDuctSystemConnectionParameters));
	_COM_SMARTPTR_TYPEDEF(IElectricalSystemConnectionParameters, __uuidof(IElectricalSystemConnectionParameters));
	_COM_SMARTPTR_TYPEDEF(IEngineeringObjectConnector, __uuidof(IEngineeringObjectConnector));
	_COM_SMARTPTR_TYPEDEF(IProject, __uuidof(IProject));
	_COM_SMARTPTR_TYPEDEF(IView, __uuidof(IView));
	_COM_SMARTPTR_TYPEDEF(IModelView, __uuidof(IModelView));
	_COM_SMARTPTR_TYPEDEF(IView3DParams, __uuidof(IView3DParams));
	_COM_SMARTPTR_TYPEDEF(ILevelViewParams, __uuidof(ILevelViewParams));
	_COM_SMARTPTR_TYPEDEF(IEvent, __uuidof(IEvent));
	_COM_SMARTPTR_TYPEDEF(IApplicationCloseEvent, __uuidof(IApplicationCloseEvent));
	_COM_SMARTPTR_TYPEDEF(IProjectCloseEvent, __uuidof(IProjectCloseEvent));
	_COM_SMARTPTR_TYPEDEF(IArc2D, __uuidof(IArc2D));
	_COM_SMARTPTR_TYPEDEF(IPolyCurve2D, __uuidof(IPolyCurve2D));
	_COM_SMARTPTR_TYPEDEF(ICurve2DCollection, __uuidof(ICurve2DCollection));
	_COM_SMARTPTR_TYPEDEF(IArc3D, __uuidof(IArc3D));
	_COM_SMARTPTR_TYPEDEF(IPolyCurve3D, __uuidof(IPolyCurve3D));
	_COM_SMARTPTR_TYPEDEF(IBeamParams, __uuidof(IBeamParams));
	_COM_SMARTPTR_TYPEDEF(IColumnParams, __uuidof(IColumnParams));
	_COM_SMARTPTR_TYPEDEF(IFloorParams, __uuidof(IFloorParams));
	_COM_SMARTPTR_TYPEDEF(IWallContour, __uuidof(IWallContour));
	_COM_SMARTPTR_TYPEDEF(IWallParams, __uuidof(IWallParams));
	_COM_SMARTPTR_TYPEDEF(IWindowParams, __uuidof(IWindowParams));
	_COM_SMARTPTR_TYPEDEF(IDoorParams, __uuidof(IDoorParams));
	_COM_SMARTPTR_TYPEDEF(ILine3DParams, __uuidof(ILine3DParams));
	_COM_SMARTPTR_TYPEDEF(IOpeningParams, __uuidof(IOpeningParams));
	_COM_SMARTPTR_TYPEDEF(IObjectOnRoutePlacement, __uuidof(IObjectOnRoutePlacement));
	_COM_SMARTPTR_TYPEDEF(IFlowSegmentPlacement, __uuidof(IFlowSegmentPlacement));
	_COM_SMARTPTR_TYPEDEF(IRouteParams, __uuidof(IRouteParams));
	_COM_SMARTPTR_TYPEDEF(IScreenshotSettings, __uuidof(IScreenshotSettings));
	_COM_SMARTPTR_TYPEDEF(IScreenshotService, __uuidof(IScreenshotService));
	_COM_SMARTPTR_TYPEDEF(IRoofSlopes, __uuidof(IRoofSlopes));
	_COM_SMARTPTR_TYPEDEF(IPortPipeParams, __uuidof(IPortPipeParams));
	_COM_SMARTPTR_TYPEDEF(IPortDuctParams, __uuidof(IPortDuctParams));
	_COM_SMARTPTR_TYPEDEF(IMath, __uuidof(IMath));
	_COM_SMARTPTR_TYPEDEF(_ISelectionEvents, __uuidof(_ISelectionEvents));
	_COM_SMARTPTR_TYPEDEF(_IApplicationEvents, __uuidof(_IApplicationEvents));
	_COM_SMARTPTR_TYPEDEF(_IActionEvents, __uuidof(_IActionEvents));
	_COM_SMARTPTR_TYPEDEF(ISelection, __uuidof(ISelection));
	_COM_SMARTPTR_TYPEDEF(IApplication, __uuidof(IApplication));

	enum ImageFormat : int {
		ImageFormat_Undefined = 0,
		ImageFormat_BMP = 1,
		ImageFormat_PNG = 2
	};

	struct __declspec(uuid("38bd3999-a5f5-4b19-a59b-99e5c41bed1d")) IImage : IDispatch {
		HRESULT LoadFromData (SAFEARRAY * data, enum ImageFormat format);
		HRESULT LoadFromFile (_bstr_t path_);
		HRESULT SaveToFile (_bstr_t path_, enum ImageFormat format);
		SAFEARRAY * SaveToData (enum ImageFormat format);

		virtual HRESULT __stdcall raw_LoadFromData (SAFEARRAY * data, enum ImageFormat format) = 0;
		virtual HRESULT __stdcall raw_LoadFromFile (BSTR path_) = 0;
		virtual HRESULT __stdcall raw_SaveToFile (BSTR path_, enum ImageFormat format) = 0;
		virtual HRESULT __stdcall raw_SaveToData (enum ImageFormat format, SAFEARRAY * * pData) = 0;
	};

	struct __declspec(uuid("5fb2d8a8-ee98-41bf-94a9-97d9bdbf246f")) IAction : IDispatch {
		__declspec(property(get=GetId)) GUID Id;
		__declspec(property(get=GetDisplayName,put=PutDisplayName)) _bstr_t DisplayName;
		__declspec(property(get=GetToolTip,put=PutToolTip)) _bstr_t ToolTip;
		__declspec(property(get=GetEnabled,put=PutEnabled)) VARIANT_BOOL Enabled;
		__declspec(property(get=GetCheckable,put=PutCheckable)) VARIANT_BOOL Checkable;
		__declspec(property(get=GetChecked,put=PutChecked)) VARIANT_BOOL Checked;
		__declspec(property(put=PutIcon)) IImagePtr Icon;
		__declspec(property(get=GetVisible,put=PutVisible)) VARIANT_BOOL Visible;

		GUID GetId();
		_bstr_t GetDisplayName();
		void PutDisplayName (_bstr_t pName);
		_bstr_t GetToolTip();
		void PutToolTip (_bstr_t pToolTip);
		VARIANT_BOOL GetEnabled();
		void PutEnabled (VARIANT_BOOL Enabled);
		VARIANT_BOOL GetCheckable();
		void PutCheckable (VARIANT_BOOL pCheckable);
		VARIANT_BOOL GetChecked();
		void PutChecked (VARIANT_BOOL pChecked);
		void PutIcon (struct IImage * _arg1);
		VARIANT_BOOL GetVisible();
		void PutVisible (VARIANT_BOOL pVisible);
		HRESULT Trigger();

		virtual HRESULT __stdcall get_Id (GUID * pId) = 0;
		virtual HRESULT __stdcall get_DisplayName (BSTR * pName) = 0;
		virtual HRESULT __stdcall put_DisplayName (BSTR pName) = 0;
		virtual HRESULT __stdcall get_ToolTip (BSTR * pToolTip) = 0;
		virtual HRESULT __stdcall put_ToolTip (BSTR pToolTip) = 0;
		virtual HRESULT __stdcall get_Enabled (VARIANT_BOOL * Enabled) = 0;
		virtual HRESULT __stdcall put_Enabled (VARIANT_BOOL Enabled) = 0;
		virtual HRESULT __stdcall get_Checkable (VARIANT_BOOL * pCheckable) = 0;
		virtual HRESULT __stdcall put_Checkable (VARIANT_BOOL pCheckable) = 0;
		virtual HRESULT __stdcall get_Checked (VARIANT_BOOL * pChecked) = 0;
		virtual HRESULT __stdcall put_Checked (VARIANT_BOOL pChecked) = 0;
		virtual HRESULT __stdcall put_Icon (struct IImage * _arg1) = 0;
		virtual HRESULT __stdcall get_Visible (VARIANT_BOOL * pVisible) = 0;
		virtual HRESULT __stdcall put_Visible (VARIANT_BOOL pVisible) = 0;
		virtual HRESULT __stdcall raw_Trigger() = 0;
	};

	struct __declspec(uuid("57477194-72a3-4f0d-a722-462d5df46f62")) ISplitButton : IDispatch {
		__declspec(property(get=GetId)) GUID Id;
		__declspec(property(get=GetIdS)) _bstr_t IdS;
		__declspec(property(get=GetTextVisible,put=PutTextVisible)) VARIANT_BOOL TextVisible;

		HRESULT AddAction (struct IAction * pAction);
		HRESULT AddSeparator();
		GUID GetId();
		_bstr_t GetIdS();
		VARIANT_BOOL GetTextVisible();
		void PutTextVisible (VARIANT_BOOL pTextVisible);

		virtual HRESULT __stdcall raw_AddAction (struct IAction * pAction) = 0;
		virtual HRESULT __stdcall raw_AddSeparator() = 0;
		virtual HRESULT __stdcall get_Id (GUID * pId) = 0;
		virtual HRESULT __stdcall get_IdS (BSTR * pId) = 0;
		virtual HRESULT __stdcall get_TextVisible (VARIANT_BOOL * pTextVisible) = 0;
		virtual HRESULT __stdcall put_TextVisible (VARIANT_BOOL pTextVisible) = 0;
	};

	struct __declspec(uuid("2e341e2e-923b-47ac-9777-919af8b6fdf5")) IDropDownButton : IDispatch {
		__declspec(property(put=PutIcon)) IImagePtr Icon;
		__declspec(property(get=GetToolTip,put=PutToolTip)) _bstr_t ToolTip;
		__declspec(property(get=GetId)) GUID Id;
		__declspec(property(get=GetIdS)) _bstr_t IdS;
		__declspec(property(get=GetTextVisible,put=PutTextVisible)) VARIANT_BOOL TextVisible;

		HRESULT AddAction (struct IAction * pAction);
		HRESULT AddSeparator();
		void PutIcon (struct IImage * _arg1);
		void PutToolTip (_bstr_t pToolTip);
		_bstr_t GetToolTip();
		GUID GetId();
		_bstr_t GetIdS();
		VARIANT_BOOL GetTextVisible();
		void PutTextVisible (VARIANT_BOOL pTextVisible);

		virtual HRESULT __stdcall raw_AddAction (struct IAction * pAction) = 0;
		virtual HRESULT __stdcall raw_AddSeparator() = 0;
		virtual HRESULT __stdcall put_Icon (struct IImage * _arg1) = 0;
		virtual HRESULT __stdcall put_ToolTip (BSTR pToolTip) = 0;
		virtual HRESULT __stdcall get_ToolTip (BSTR * pToolTip) = 0;
		virtual HRESULT __stdcall get_Id (GUID * pId) = 0;
		virtual HRESULT __stdcall get_IdS (BSTR * pId) = 0;
		virtual HRESULT __stdcall get_TextVisible (VARIANT_BOOL * pTextVisible) = 0;
		virtual HRESULT __stdcall put_TextVisible (VARIANT_BOOL pTextVisible) = 0;
	};

	struct __declspec(uuid("91404937-1786-43b9-8b97-4b1e3d7a72fd")) IToolButton : IDispatch {
		__declspec(property(get=GetAction,put=PutAction)) IActionPtr Action;
		__declspec(property(get=GetId)) GUID Id;
		__declspec(property(get=GetIdS)) _bstr_t IdS;
		__declspec(property(get=GetTextVisible,put=PutTextVisible)) VARIANT_BOOL TextVisible;

		IActionPtr GetAction();
		void PutAction (struct IAction * ppAction);
		GUID GetId();
		_bstr_t GetIdS();
		VARIANT_BOOL GetTextVisible();
		void PutTextVisible (VARIANT_BOOL pTextVisible);

		virtual HRESULT __stdcall get_Action (struct IAction * * ppAction) = 0;
		virtual HRESULT __stdcall put_Action (struct IAction * ppAction) = 0;
		virtual HRESULT __stdcall get_Id (GUID * pId) = 0;
		virtual HRESULT __stdcall get_IdS (BSTR * pId) = 0;
		virtual HRESULT __stdcall get_TextVisible (VARIANT_BOOL * pTextVisible) = 0;
		virtual HRESULT __stdcall put_TextVisible (VARIANT_BOOL pTextVisible) = 0;
	};

	struct __declspec(uuid("cf2faa60-465c-4aac-a202-09f19799452f")) IUIPanelExtension : IDispatch {
		HRESULT AddToolButton (struct IAction * pAction);
		HRESULT AddSplitButton (struct ISplitButton * pSplitButton);
		HRESULT AddDropDownButton (struct IDropDownButton * pDropDownButton);
		HRESULT AddToolButton2 (struct IToolButton * pToolButton);

		virtual HRESULT __stdcall raw_AddToolButton (struct IAction * pAction) = 0;
		virtual HRESULT __stdcall raw_AddSplitButton (struct ISplitButton * pSplitButton) = 0;
		virtual HRESULT __stdcall raw_AddDropDownButton (struct IDropDownButton * pDropDownButton) = 0;
		virtual HRESULT __stdcall raw_AddToolButton2 (struct IToolButton * pToolButton) = 0;
	};

	enum ViewType : int {
		ViewType_Undefined = 0,
		ViewType_ProjectExplorer = 1,
		ViewType_View3D = 2,
		ViewType_Level = 3,
		ViewType_Section = 4,
		ViewType_Facade = 5,
		ViewType_Drawing = 6,
		ViewType_Table = 7,
		ViewType_Specification = 8,
		ViewType_SectionProfile = 9,
		ViewType_Assembly = 10,
		ViewType_PipeSystem = 11
	};

	struct __declspec(uuid("f7a588de-f313-4312-931d-9c65159717b3")) IContextMenuItem : IDispatch {};

	struct __declspec(uuid("4b5ed39f-69af-4ed6-a76a-1c83c85871a5")) IContextMenuNodeItem : IContextMenuItem {
		__declspec(property(get=GetDisplayName,put=PutDisplayName)) _bstr_t DisplayName;

		void PutDisplayName (_bstr_t displayName_);
		IContextMenuItemPtr AddActionItem (struct IAction * pAction);
		IContextMenuNodeItemPtr AddNodeItem();
		HRESULT AddSeparator();
		_bstr_t GetDisplayName();

		virtual HRESULT __stdcall put_DisplayName (BSTR displayName_) = 0;
		virtual HRESULT __stdcall raw_AddActionItem (struct IAction * pAction, struct IContextMenuItem * * ppItem) = 0;
		virtual HRESULT __stdcall raw_AddNodeItem (struct IContextMenuNodeItem * * ppItem) = 0;
		virtual HRESULT __stdcall raw_AddSeparator() = 0;
		virtual HRESULT __stdcall get_DisplayName (BSTR * displayName_) = 0;
	};

	struct __declspec(uuid("4538c4d5-5fe0-4288-8e58-30f099b8b703")) IContextMenu : IDispatch {
		IContextMenuItemPtr AddActionItem (struct IAction * pAction);
		IContextMenuNodeItemPtr AddNodeItem();
		HRESULT AddSeparator();

		virtual HRESULT __stdcall raw_AddActionItem (struct IAction * pAction, struct IContextMenuItem * * ppItem) = 0;
		virtual HRESULT __stdcall raw_AddNodeItem (struct IContextMenuNodeItem * * ppItem) = 0;
		virtual HRESULT __stdcall raw_AddSeparator() = 0;
	};

	enum ContextMenuShowCase : int {
		ContextMenuShowCase_Scene = 0,
		ContextMenuShowCase_Selection = 1
	};

	enum MessageIcon : int {
		MessageIcon_NoIcon = 0,
		MessageIcon_Info = 1,
		MessageIcon_Warning = 2,
		MessageIcon_Error = 3,
		MessageIcon_Question = 4
	};

	struct __declspec(uuid("ab11d0cf-6622-4962-bd64-d8dc197e8de7")) IUI : IDispatch {
		IActionPtr CreateAction();
		IActionPtr CreateActionWithId (GUID Id);
		IActionPtr GetAction (GUID Id);
		HRESULT AddExtensionToPrimaryPanel (struct IUIPanelExtension * pUIPanelExtension);
		HRESULT AddExtensionToActionsPanel (struct IUIPanelExtension * pUIPanelExtension, enum ViewType viewType_);
		HRESULT AddToolButtonToActionsPanel (struct IAction * pAction, enum ViewType viewType_);
		IUIPanelExtensionPtr CreateUIPanelExtension();
		ISplitButtonPtr CreateSplitButton (struct IAction * pDefaultAction);
		IDropDownButtonPtr CreateDropDownButton();
		HRESULT AddContextMenu (GUID * pId, struct IContextMenu * pMmenu, enum ViewType viewType_, enum ContextMenuShowCase showCase_);
		HRESULT ShowMessageBox (enum MessageIcon icon_, _bstr_t title_, _bstr_t text_);
		_bstr_t ShowSaveFileDialog (_bstr_t title, _bstr_t defaultPath, _bstr_t filter);
		_bstr_t ShowOpenFileDialog (_bstr_t title_, _bstr_t defaultPath, _bstr_t filter);
		IImagePtr CreateImage();
		IContextMenuPtr CreateContextMenu();
		HRESULT AddExportAction (struct IAction * pAction);
		HRESULT AddContextMenuS (_bstr_t uniqueId_, struct IContextMenu * pMmenu, enum ViewType viewType_, enum ContextMenuShowCase showCase_);
		VARIANT_BOOL GetControlVisibility (GUID Id);
		HRESULT SetControlVisibility (GUID Id, VARIANT_BOOL isVisible);
		VARIANT_BOOL GetControlVisibilityS (_bstr_t Id);
		HRESULT SetControlVisibilityS (_bstr_t Id, VARIANT_BOOL isVisible);
		IToolButtonPtr CreateToolButton();
		IToolButtonPtr CreateToolButtonWithId (GUID Id);
		ISplitButtonPtr CreateSplitButtonWithId (GUID Id, struct IAction * pDefaultAction);
		IDropDownButtonPtr CreateDropDownButtonWithId (GUID Id);
		IToolButtonPtr CreateToolButtonWithIdS (_bstr_t Id);
		ISplitButtonPtr CreateSplitButtonWithIdS (_bstr_t Id, struct IAction * pDefaultAction);
		IDropDownButtonPtr CreateDropDownButtonWithIdS (_bstr_t Id);

		virtual HRESULT __stdcall raw_CreateAction (struct IAction * * ppAction) = 0;
		virtual HRESULT __stdcall raw_CreateActionWithId (GUID Id, struct IAction * * ppAction) = 0;
		virtual HRESULT __stdcall raw_GetAction (GUID Id, struct IAction * * ppAction) = 0;
		virtual HRESULT __stdcall raw_AddExtensionToPrimaryPanel (struct IUIPanelExtension * pUIPanelExtension) = 0;
		virtual HRESULT __stdcall raw_AddExtensionToActionsPanel (struct IUIPanelExtension * pUIPanelExtension, enum ViewType viewType_) = 0;
		virtual HRESULT __stdcall raw_AddToolButtonToActionsPanel (struct IAction * pAction, enum ViewType viewType_) = 0;
		virtual HRESULT __stdcall raw_CreateUIPanelExtension (struct IUIPanelExtension * * ppUIPanelExtension) = 0;
		virtual HRESULT __stdcall raw_CreateSplitButton (struct IAction * pDefaultAction, struct ISplitButton * * ppSplitButton) = 0;
		virtual HRESULT __stdcall raw_CreateDropDownButton (struct IDropDownButton * * ppDropDownButton) = 0;
		virtual HRESULT __stdcall raw_AddContextMenu (GUID * pId, struct IContextMenu * pMmenu, enum ViewType viewType_, enum ContextMenuShowCase showCase_) = 0;
		virtual HRESULT __stdcall raw_ShowMessageBox (enum MessageIcon icon_, BSTR title_, BSTR text_) = 0;
		virtual HRESULT __stdcall raw_ShowSaveFileDialog (BSTR title, BSTR defaultPath, BSTR filter, BSTR * pFileName) = 0;
		virtual HRESULT __stdcall raw_ShowOpenFileDialog (BSTR title_, BSTR defaultPath, BSTR filter, BSTR * pFileName) = 0;
		virtual HRESULT __stdcall raw_CreateImage (struct IImage * * ppImage) = 0;
		virtual HRESULT __stdcall raw_CreateContextMenu (struct IContextMenu * * ppContextMenu) = 0;
		virtual HRESULT __stdcall raw_AddExportAction (struct IAction * pAction) = 0;
		virtual HRESULT __stdcall raw_AddContextMenuS (BSTR uniqueId_, struct IContextMenu * pMmenu, enum ViewType viewType_, enum ContextMenuShowCase showCase_) = 0;
		virtual HRESULT __stdcall raw_GetControlVisibility (GUID Id, VARIANT_BOOL * pIsVisible) = 0;
		virtual HRESULT __stdcall raw_SetControlVisibility (GUID Id, VARIANT_BOOL isVisible) = 0;
		virtual HRESULT __stdcall raw_GetControlVisibilityS (BSTR Id, VARIANT_BOOL * pIsVisible) = 0;
		virtual HRESULT __stdcall raw_SetControlVisibilityS (BSTR Id, VARIANT_BOOL isVisible) = 0;
		virtual HRESULT __stdcall raw_CreateToolButton (struct IToolButton * * ppToolButton) = 0;
		virtual HRESULT __stdcall raw_CreateToolButtonWithId (GUID Id, struct IToolButton * * ppToolButton) = 0;
		virtual HRESULT __stdcall raw_CreateSplitButtonWithId (GUID Id, struct IAction * pDefaultAction, struct ISplitButton * * ppSplitButton) = 0;
		virtual HRESULT __stdcall raw_CreateDropDownButtonWithId (GUID Id, struct IDropDownButton * * ppDropDownButton) = 0;
		virtual HRESULT __stdcall raw_CreateToolButtonWithIdS (BSTR Id, struct IToolButton * * ppToolButton) = 0;
		virtual HRESULT __stdcall raw_CreateSplitButtonWithIdS (BSTR Id, struct IAction * pDefaultAction, struct ISplitButton * * ppSplitButton) = 0;
		virtual HRESULT __stdcall raw_CreateDropDownButtonWithIdS (BSTR Id, struct IDropDownButton * * ppDropDownButton) = 0;
	};

	struct __declspec(uuid("d4553852-96ba-4f90-a33a-5bc6c4379045")) IOperation : IDispatch {
		HRESULT Start();
		HRESULT Apply();
		HRESULT Rollback();

		virtual HRESULT __stdcall raw_Start() = 0;
		virtual HRESULT __stdcall raw_Apply() = 0;
		virtual HRESULT __stdcall raw_Rollback() = 0;
	};

	enum PropertyType : int {
		PropertyType_Undefined = 0,
		PropertyType_Double = 1,
		PropertyType_String = 2,
		PropertyType_Angle = 3,
		PropertyType_Area = 4,
		PropertyType_Boolean = 5,
		PropertyType_Enumeration = 6,
		PropertyType_Integer = 7,
		PropertyType_Length = 8,
		PropertyType_Logical = 9,
		PropertyType_Mass = 10,
		PropertyType_Volume = 11
	};

	enum AngleUnit : int {
		AngleUnit_Unknown = 0,
		AngleUnit_Degrees = 1,
		AngleUnit_Radians = 2
	};

	enum AreaUnit : int {
		AreaUnit_Unknown = 0,
		AreaUnit_Millimeters2 = 1,
		AreaUnit_Centimeters2 = 2,
		AreaUnit_Meters2 = 3
	};

	enum LengthUnit : int {
		LengthUnit_Unknown = 0,
		LengthUnit_Millimeters = 1,
		LengthUnit_Centimeters = 2,
		LengthUnit_Inches = 3,
		LengthUnit_Meters = 4
	};

	enum Logical : int {
		Logical_False = 0,
		Logical_True = 1,
		Logical_Indeterminate = 2
	};

	enum MassUnit : int {
		MassUnit_Unknown = 0,
		MassUnit_Grams = 1,
		MassUnit_Kilograms = 2,
		MassUnit_Tons = 3
	};

	enum VolumeUnit : int {
		VolumeUnit_Unknown = 0,
		VolumeUnit_Millimeters3 = 1,
		VolumeUnit_Centimeters3 = 2,
		VolumeUnit_Meters3 = 3
	};

	struct __declspec(uuid("8bcca074-d8d4-4ebb-85ff-e558db1660ed")) IProperty : IDispatch {
		__declspec(property(get=GetType)) enum PropertyType Type;
		__declspec(property(get=GetId)) GUID Id;
		__declspec(property(get=GetIdS)) _bstr_t IdS;
		__declspec(property(get=GetName)) _bstr_t Name;

		HRESULT SetDoubleValue (double value_);
		HRESULT SetStringValue (_bstr_t value_);
		double GetDoubleValue();
		_bstr_t GetStringValue();
		enum PropertyType GetType();
		HRESULT ResetValue();
		VARIANT_BOOL HasValue();
		GUID GetId();
		_bstr_t GetIdS();
		_bstr_t GetName();
		HRESULT SetAngleValue (double value_, enum AngleUnit unit);
		HRESULT SetAreaValue (double value_, enum AreaUnit unit);
		HRESULT SetBooleanValue (VARIANT_BOOL value_);
		HRESULT SetEnumerationValue (_bstr_t value_);
		HRESULT SetIntegerValue (int value_);
		HRESULT SetLengthValue (double value_, enum LengthUnit unit);
		HRESULT SetLogicalValue (enum Logical value_);
		HRESULT SetMassValue (double value_, enum MassUnit unit);
		HRESULT SetVolumeValue (double value_, enum VolumeUnit unit);
		double GetAngleValue (enum AngleUnit unit);
		double GetAreaValue (enum AreaUnit unit);
		VARIANT_BOOL GetBooleanValue();
		_bstr_t GetEnumerationValue();
		int GetIntegerValue();
		double GetLengthValue (enum LengthUnit unit);
		enum Logical GetLogicalValue();
		double GetMassValue (enum MassUnit unit);
		double GetVolumeValue (enum VolumeUnit unit);

		virtual HRESULT __stdcall raw_SetDoubleValue (double value_) = 0;
		virtual HRESULT __stdcall raw_SetStringValue (BSTR value_) = 0;
		virtual HRESULT __stdcall raw_GetDoubleValue (double * pValue) = 0;
		virtual HRESULT __stdcall raw_GetStringValue (BSTR * pValue) = 0;
		virtual HRESULT __stdcall get_Type (enum PropertyType * pType) = 0;
		virtual HRESULT __stdcall raw_ResetValue() = 0;
		virtual HRESULT __stdcall raw_HasValue (VARIANT_BOOL * pResult) = 0;
		virtual HRESULT __stdcall get_Id (GUID * pPropertyId) = 0;
		virtual HRESULT __stdcall get_IdS (BSTR * pPropertyId) = 0;
		virtual HRESULT __stdcall get_Name (BSTR * pName) = 0;
		virtual HRESULT __stdcall raw_SetAngleValue (double value_, enum AngleUnit unit) = 0;
		virtual HRESULT __stdcall raw_SetAreaValue (double value_, enum AreaUnit unit) = 0;
		virtual HRESULT __stdcall raw_SetBooleanValue (VARIANT_BOOL value_) = 0;
		virtual HRESULT __stdcall raw_SetEnumerationValue (BSTR value_) = 0;
		virtual HRESULT __stdcall raw_SetIntegerValue (int value_) = 0;
		virtual HRESULT __stdcall raw_SetLengthValue (double value_, enum LengthUnit unit) = 0;
		virtual HRESULT __stdcall raw_SetLogicalValue (enum Logical value_) = 0;
		virtual HRESULT __stdcall raw_SetMassValue (double value_, enum MassUnit unit) = 0;
		virtual HRESULT __stdcall raw_SetVolumeValue (double value_, enum VolumeUnit unit) = 0;
		virtual HRESULT __stdcall raw_GetAngleValue (enum AngleUnit unit, double * pValue) = 0;
		virtual HRESULT __stdcall raw_GetAreaValue (enum AreaUnit unit, double * pValue) = 0;
		virtual HRESULT __stdcall raw_GetBooleanValue (VARIANT_BOOL * pValue) = 0;
		virtual HRESULT __stdcall raw_GetEnumerationValue (BSTR * pValue) = 0;
		virtual HRESULT __stdcall raw_GetIntegerValue (int * pValue) = 0;
		virtual HRESULT __stdcall raw_GetLengthValue (enum LengthUnit unit, double * pValue) = 0;
		virtual HRESULT __stdcall raw_GetLogicalValue (enum Logical * pValue) = 0;
		virtual HRESULT __stdcall raw_GetMassValue (enum MassUnit unit, double * pValue) = 0;
		virtual HRESULT __stdcall raw_GetVolumeValue (enum VolumeUnit unit, double * pValue) = 0;
	};

	struct __declspec(uuid("ee27e9f3-f775-4ad4-841a-55aa500006fa")) IGuidCollection : IDispatch {
		__declspec(property(get=GetCount)) int Count;

		int GetCount();
		GUID Get (int index);
		_bstr_t GetS (int index);

		virtual HRESULT __stdcall get_Count (int * pCount) = 0;
		virtual HRESULT __stdcall raw_Get (int index, GUID * pGUID) = 0;
		virtual HRESULT __stdcall raw_GetS (int index, BSTR * pGUID) = 0;
	};

	struct __declspec(uuid("f8c7f785-4da3-4f3f-bb0d-a6e41a5b86a2")) IPropertyContainer : IDispatch {
		IPropertyPtr Get (GUID propertyId);
		VARIANT_BOOL Contains (GUID propertyId);
		IPropertyPtr GetS (_bstr_t propertyId);
		VARIANT_BOOL ContainsS (_bstr_t propertyId);
		IGuidCollectionPtr GetIds();

		virtual HRESULT __stdcall raw_Get (GUID propertyId, struct IProperty * * ppProperty) = 0;
		virtual HRESULT __stdcall raw_Contains (GUID propertyId, VARIANT_BOOL * pContains) = 0;
		virtual HRESULT __stdcall raw_GetS (BSTR propertyId, struct IProperty * * ppProperty) = 0;
		virtual HRESULT __stdcall raw_ContainsS (BSTR propertyId, VARIANT_BOOL * pContains) = 0;
		virtual HRESULT __stdcall raw_GetIds (struct IGuidCollection * * ppIds) = 0;
	};

	#pragma pack(push, 8)

	struct __declspec(uuid("b1a42371-3b0e-4510-90b7-be50495bff33")) PropertyDescription {
		BSTR Name;
		enum PropertyType Type;
	};

	#pragma pack(pop)

	struct __declspec(uuid("1d239235-d8be-4e3c-8291-81aef7cf1f4c")) IPropertyDescription : IDispatch {
		__declspec(property(get=GetName)) _bstr_t Name;
		__declspec(property(get=GetType)) enum PropertyType Type;

		_bstr_t GetName();
		enum PropertyType GetType();
		HRESULT SetEnumerationItems (SAFEARRAY * enumItems);
		SAFEARRAY * GetEnumerationItems();

		virtual HRESULT __stdcall get_Name (BSTR * pName) = 0;
		virtual HRESULT __stdcall get_Type (enum PropertyType * pType) = 0;
		virtual HRESULT __stdcall raw_SetEnumerationItems (SAFEARRAY * enumItems) = 0;
		virtual HRESULT __stdcall raw_GetEnumerationItems (SAFEARRAY * * pEnumItems) = 0;
	};

	struct __declspec(uuid("58500a91-b7bb-4dff-ba50-a46f28407954")) IPropertyManager : IDispatch {
		__declspec(property(get=GetPropertyCount)) int PropertyCount;

		HRESULT RegisterProperty (GUID propertyId, struct PropertyDescription description_);
		HRESULT UnregisterProperty (GUID propertyId);
		int GetPropertyCount();
		GUID GetPropertyId (int index);
		struct PropertyDescription GetPropertyDescription (GUID propertyId);
		VARIANT_BOOL IsPropertyRegistered (GUID propertyId);
		HRESULT AssignPropertyToType (GUID propertyId, GUID objectType_);
		HRESULT UnassignPropertyFromType (GUID propertyId, GUID objectType_);
		VARIANT_BOOL IsPropertyAssignedToType (GUID propertyId, GUID objectType_);
		HRESULT RegisterPropertyS (_bstr_t propertyId, _bstr_t name_, enum PropertyType type_);
		HRESULT UnregisterPropertyS (_bstr_t propertyId);
		_bstr_t GetPropertyIdS (int index);
		_bstr_t GetPropertyNameS (_bstr_t propertyId);
		enum PropertyType GetPropertyTypeS (_bstr_t propertyId);
		VARIANT_BOOL IsPropertyRegisteredS (_bstr_t propertyId);
		HRESULT AssignPropertyToTypeS (_bstr_t propertyId, _bstr_t objectType_);
		HRESULT UnassignPropertyFromTypeS (_bstr_t propertyId, _bstr_t objectType_);
		VARIANT_BOOL IsPropertyAssignedToTypeS (_bstr_t propertyId, _bstr_t objectType_);
		_bstr_t GetPropertyName (GUID propertyId);
		enum PropertyType GetPropertyType (GUID propertyId);
		IPropertyDescriptionPtr CreatePropertyDescription (_bstr_t name_, enum PropertyType type_);
		HRESULT RegisterProperty2 (GUID propertyId, struct IPropertyDescription * pDescription);
		HRESULT RegisterPropertyS2 (_bstr_t propertyId, struct IPropertyDescription * pDescription);
		IPropertyDescriptionPtr GetPropertyDescription2 (GUID propertyId);
		IPropertyDescriptionPtr GetPropertyDescription2S (_bstr_t propertyId);
		HRESULT UpdateEnumValues (GUID propertyId, SAFEARRAY * pEnumItems, SAFEARRAY * pSubstitutionTable);
		HRESULT SetPropertyName (GUID propertyId, _bstr_t Name);
		_bstr_t GetExpression (GUID propertyId, GUID objectType_);
		HRESULT SetExpression (GUID propertyId, GUID objectType_, _bstr_t expression);
		VARIANT_BOOL GetCSVExportFlag (GUID propertyId, GUID objectType_);
		HRESULT SetCSVExportFlag (GUID propertyId, GUID objectType_, VARIANT_BOOL value);
		_bstr_t GetExpressionS (_bstr_t propertyId, _bstr_t objectType_);
		HRESULT SetExpressionS (_bstr_t propertyId, _bstr_t objectType_, _bstr_t expression);
		VARIANT_BOOL GetCSVExportFlagS (_bstr_t propertyId, _bstr_t objectType_);
		HRESULT SetCSVExportFlagS (_bstr_t propertyId, _bstr_t objectType_, VARIANT_BOOL value);

		virtual HRESULT __stdcall raw_RegisterProperty (GUID propertyId, struct PropertyDescription description_) = 0;
		virtual HRESULT __stdcall raw_UnregisterProperty (GUID propertyId) = 0;
		virtual HRESULT __stdcall get_PropertyCount (int * pCount) = 0;
		virtual HRESULT __stdcall raw_GetPropertyId (int index, GUID * pPropertyId) = 0;
		virtual HRESULT __stdcall raw_GetPropertyDescription (GUID propertyId, struct PropertyDescription * pDescription) = 0;
		virtual HRESULT __stdcall raw_IsPropertyRegistered (GUID propertyId, VARIANT_BOOL * pResult) = 0;
		virtual HRESULT __stdcall raw_AssignPropertyToType (GUID propertyId, GUID objectType_) = 0;
		virtual HRESULT __stdcall raw_UnassignPropertyFromType (GUID propertyId, GUID objectType_) = 0;
		virtual HRESULT __stdcall raw_IsPropertyAssignedToType (GUID propertyId, GUID objectType_, VARIANT_BOOL * pResult) = 0;
		virtual HRESULT __stdcall raw_RegisterPropertyS (BSTR propertyId, BSTR name_, enum PropertyType type_) = 0;
		virtual HRESULT __stdcall raw_UnregisterPropertyS (BSTR propertyId) = 0;
		virtual HRESULT __stdcall raw_GetPropertyIdS (int index, BSTR * pPropertyId) = 0;
		virtual HRESULT __stdcall raw_GetPropertyNameS (BSTR propertyId, BSTR * pName) = 0;
		virtual HRESULT __stdcall raw_GetPropertyTypeS (BSTR propertyId, enum PropertyType * pType) = 0;
		virtual HRESULT __stdcall raw_IsPropertyRegisteredS (BSTR propertyId, VARIANT_BOOL * pResult) = 0;
		virtual HRESULT __stdcall raw_AssignPropertyToTypeS (BSTR propertyId, BSTR objectType_) = 0;
		virtual HRESULT __stdcall raw_UnassignPropertyFromTypeS (BSTR propertyId, BSTR objectType_) = 0;
		virtual HRESULT __stdcall raw_IsPropertyAssignedToTypeS (BSTR propertyId, BSTR objectType_, VARIANT_BOOL * pResult) = 0;
		virtual HRESULT __stdcall raw_GetPropertyName (GUID propertyId, BSTR * pName) = 0;
		virtual HRESULT __stdcall raw_GetPropertyType (GUID propertyId, enum PropertyType * pType) = 0;
		virtual HRESULT __stdcall raw_CreatePropertyDescription (BSTR name_, enum PropertyType type_, struct IPropertyDescription * * ppDescription) = 0;
		virtual HRESULT __stdcall raw_RegisterProperty2 (GUID propertyId, struct IPropertyDescription * pDescription) = 0;
		virtual HRESULT __stdcall raw_RegisterPropertyS2 (BSTR propertyId, struct IPropertyDescription * pDescription) = 0;
		virtual HRESULT __stdcall raw_GetPropertyDescription2 (GUID propertyId, struct IPropertyDescription * * ppDescription) = 0;
		virtual HRESULT __stdcall raw_GetPropertyDescription2S (BSTR propertyId, struct IPropertyDescription * * ppDescription) = 0;
		virtual HRESULT __stdcall raw_UpdateEnumValues (GUID propertyId, SAFEARRAY * pEnumItems, SAFEARRAY * pSubstitutionTable) = 0;
		virtual HRESULT __stdcall raw_SetPropertyName (GUID propertyId, BSTR Name) = 0;
		virtual HRESULT __stdcall raw_GetExpression (GUID propertyId, GUID objectType_, BSTR * pExpression) = 0;
		virtual HRESULT __stdcall raw_SetExpression (GUID propertyId, GUID objectType_, BSTR expression) = 0;
		virtual HRESULT __stdcall raw_GetCSVExportFlag (GUID propertyId, GUID objectType_, VARIANT_BOOL * pValue) = 0;
		virtual HRESULT __stdcall raw_SetCSVExportFlag (GUID propertyId, GUID objectType_, VARIANT_BOOL value) = 0;
		virtual HRESULT __stdcall raw_GetExpressionS (BSTR propertyId, BSTR objectType_, BSTR * pExpression) = 0;
		virtual HRESULT __stdcall raw_SetExpressionS (BSTR propertyId, BSTR objectType_, BSTR expression) = 0;
		virtual HRESULT __stdcall raw_GetCSVExportFlagS (BSTR propertyId, BSTR objectType_, VARIANT_BOOL * pValue) = 0;
		virtual HRESULT __stdcall raw_SetCSVExportFlagS (BSTR propertyId, BSTR objectType_, VARIANT_BOOL value) = 0;
	};

	enum ParameterValueType : int {
		ParameterValueType_Undefined = 0,
		ParameterValueType_Bool = 1,
		ParameterValueType_Int = 2,
		ParameterValueType_Double = 3,
		ParameterValueType_String = 4
	};

	enum ParameterType : int {
		ParameterType_Undefined = 0,
		ParameterType_Bool = 1,
		ParameterType_Int = 2,
		ParameterType_Double = 3,
		ParameterType_String = 4,
		ParameterType_Length = 5,
		ParameterType_Angle = 6,
		ParameterType_AppDefinedEnum = 7,
		ParameterType_IntID = 8,
		ParameterType_Area = 9,
		ParameterType_Volume = 10,
		ParameterType_Mass = 11,
		ParameterType_Temperature = 12,
		ParameterType_Density = 13,
		ParameterType_ThermalConductivity = 14,
		ParameterType_Voltage = 15,
		ParameterType_List = 16,
		ParameterType_UserDefinedEnum = 17,
		ParameterType_Elevation = 18,
		ParameterType_Pressure = 19
	};

	struct __declspec(uuid("bfb03135-9584-4896-8097-05080e9ddc0d")) IParameterDefinition : IDispatch {
		__declspec(property(get=GetParameterType)) enum ParameterType _ParameterType;
		__declspec(property(get=GetText)) _bstr_t Text;
		__declspec(property(get=GetEnumerationItemTexts)) SAFEARRAY * EnumerationItemTexts;
		__declspec(property(get=GetName)) _bstr_t Name;
		__declspec(property(get=GetGroupText)) _bstr_t GroupText;
		__declspec(property(get=GetReferencedEntityType)) GUID ReferencedEntityType;
		__declspec(property(get=GetReferencedEntityTypeS)) _bstr_t ReferencedEntityTypeS;

		enum ParameterType GetParameterType();
		_bstr_t GetText();
		SAFEARRAY * GetEnumerationItemTexts();
		_bstr_t GetName();
		_bstr_t GetGroupText();
		GUID GetReferencedEntityType();
		_bstr_t GetReferencedEntityTypeS();

		virtual HRESULT __stdcall get_ParameterType (enum ParameterType * pType) = 0;
		virtual HRESULT __stdcall get_Text (BSTR * pText) = 0;
		virtual HRESULT __stdcall get_EnumerationItemTexts (SAFEARRAY * * pEnumItems) = 0;
		virtual HRESULT __stdcall get_Name (BSTR * pName) = 0;
		virtual HRESULT __stdcall get_GroupText (BSTR * pText) = 0;
		virtual HRESULT __stdcall get_ReferencedEntityType (GUID * pId) = 0;
		virtual HRESULT __stdcall get_ReferencedEntityTypeS (BSTR * pId) = 0;
	};

	struct __declspec(uuid("094116c5-005e-4bde-a147-e16bd5807364")) IParameter : IDispatch {
		__declspec(property(get=GetValueType)) enum ParameterValueType ValueType;
		__declspec(property(get=GetDefinition)) IParameterDefinitionPtr Definition;
		__declspec(property(get=GetId)) GUID Id;
		__declspec(property(get=GetIdS)) _bstr_t IdS;
		__declspec(property(get=GetHasValue)) VARIANT_BOOL HasValue;
		__declspec(property(get=GetIsReadOnly)) VARIANT_BOOL IsReadOnly;

		enum ParameterValueType GetValueType();
		IParameterDefinitionPtr GetDefinition();
		VARIANT_BOOL GetBoolValue();
		HRESULT SetBoolValue (VARIANT_BOOL value);
		int GetIntValue();
		HRESULT SetIntValue (int value);
		double GetDoubleValue();
		HRESULT SetDoubleValue (double value);
		_bstr_t GetStringValue();
		HRESULT SetStringValue (_bstr_t value);
		GUID GetId();
		_bstr_t GetIdS();
		VARIANT_BOOL GetHasValue();
		VARIANT_BOOL GetIsReadOnly();

		virtual HRESULT __stdcall get_ValueType (enum ParameterValueType * pType) = 0;
		virtual HRESULT __stdcall get_Definition (struct IParameterDefinition * * pParameterDefinition) = 0;
		virtual HRESULT __stdcall raw_GetBoolValue (VARIANT_BOOL * pValue) = 0;
		virtual HRESULT __stdcall raw_SetBoolValue (VARIANT_BOOL value) = 0;
		virtual HRESULT __stdcall raw_GetIntValue (int * pValue) = 0;
		virtual HRESULT __stdcall raw_SetIntValue (int value) = 0;
		virtual HRESULT __stdcall raw_GetDoubleValue (double * pValue) = 0;
		virtual HRESULT __stdcall raw_SetDoubleValue (double value) = 0;
		virtual HRESULT __stdcall raw_GetStringValue (BSTR * pValue) = 0;
		virtual HRESULT __stdcall raw_SetStringValue (BSTR value) = 0;
		virtual HRESULT __stdcall get_Id (GUID * pId) = 0;
		virtual HRESULT __stdcall get_IdS (BSTR * pId) = 0;
		virtual HRESULT __stdcall get_HasValue (VARIANT_BOOL * pValue) = 0;
		virtual HRESULT __stdcall get_IsReadOnly (VARIANT_BOOL * pValue) = 0;
	};

	struct __declspec(uuid("29cccdc9-6440-4a72-8198-047d9006d3b8")) IParameterContainer : IDispatch {
		IGuidCollectionPtr GetIds();
		VARIANT_BOOL Contains (GUID Id);
		IParameterPtr Get (GUID Id);
		VARIANT_BOOL ContainsS (_bstr_t Id);
		IParameterPtr GetS (_bstr_t Id);

		virtual HRESULT __stdcall raw_GetIds (struct IGuidCollection * * ppIds) = 0;
		virtual HRESULT __stdcall raw_Contains (GUID Id, VARIANT_BOOL * pResult) = 0;
		virtual HRESULT __stdcall raw_Get (GUID Id, struct IParameter * * ppParameter) = 0;
		virtual HRESULT __stdcall raw_ContainsS (BSTR Id, VARIANT_BOOL * pContains) = 0;
		virtual HRESULT __stdcall raw_GetS (BSTR Id, struct IParameter * * ppParameter) = 0;
	};

	enum QuantityType : int {
		QuantityType_Unknown = 0,
		QuantityType_Count = 1,
		QuantityType_Length = 2,
		QuantityType_Area = 3,
		QuantityType_Volume = 4,
		QuantityType_Mass = 5,
		QuantityType_Angle = 6,
		QuantityType_Elevation = 7
	};

	struct __declspec(uuid("060af337-d388-43dd-a1ad-5fb5c56a3564")) IQuantity : IDispatch {
		__declspec(property(get=GetType)) enum QuantityType Type;
		__declspec(property(get=GetText)) _bstr_t Text;
		__declspec(property(get=GetName)) _bstr_t Name;

		VARIANT_BOOL HasValue();
		enum QuantityType GetType();
		int AsCount();
		double AsLength (enum LengthUnit unit);
		double AsArea (enum AreaUnit unit);
		double AsVolume (enum VolumeUnit unit);
		double AsMass (enum MassUnit unit);
		double AsAngle (enum AngleUnit unit);
		double AsElevation (enum LengthUnit unit);
		_bstr_t GetText();
		_bstr_t GetName();

		virtual HRESULT __stdcall raw_HasValue (VARIANT_BOOL * pResult) = 0;
		virtual HRESULT __stdcall get_Type (enum QuantityType * pType) = 0;
		virtual HRESULT __stdcall raw_AsCount (int * pValue) = 0;
		virtual HRESULT __stdcall raw_AsLength (enum LengthUnit unit, double * pValue) = 0;
		virtual HRESULT __stdcall raw_AsArea (enum AreaUnit unit, double * pValue) = 0;
		virtual HRESULT __stdcall raw_AsVolume (enum VolumeUnit unit, double * pValue) = 0;
		virtual HRESULT __stdcall raw_AsMass (enum MassUnit unit, double * pValue) = 0;
		virtual HRESULT __stdcall raw_AsAngle (enum AngleUnit unit, double * pValue) = 0;
		virtual HRESULT __stdcall raw_AsElevation (enum LengthUnit unit, double * pValue) = 0;
		virtual HRESULT __stdcall get_Text (BSTR * pText) = 0;
		virtual HRESULT __stdcall get_Name (BSTR * pName) = 0;
	};

	struct __declspec(uuid("c25f8e02-57b2-41af-8e2a-93c555c7bead")) IQuantityContainer : IDispatch {
		VARIANT_BOOL Contains (GUID Id);
		IQuantityPtr Get (GUID Id);
		VARIANT_BOOL ContainsS (_bstr_t Id);
		IQuantityPtr GetS (_bstr_t Id);

		virtual HRESULT __stdcall raw_Contains (GUID Id, VARIANT_BOOL * pContains) = 0;
		virtual HRESULT __stdcall raw_Get (GUID Id, struct IQuantity * * ppQuantity) = 0;
		virtual HRESULT __stdcall raw_ContainsS (BSTR Id, VARIANT_BOOL * pContains) = 0;
		virtual HRESULT __stdcall raw_GetS (BSTR Id, struct IQuantity * * ppQuantity) = 0;
	};

	struct __declspec(uuid("41d65038-b943-4bbf-bc82-0ea6cfbb8745")) IModelObject : IDispatch {
		__declspec(property(get=GetObjectType)) GUID ObjectType;
		__declspec(property(get=GetId)) int Id;
		__declspec(property(get=GetName)) _bstr_t Name;
		__declspec(property(get=GetObjectTypeS)) _bstr_t ObjectTypeS;
		__declspec(property(get=GetUniqueId)) GUID UniqueId;
		__declspec(property(get=GetUniqueIdS)) _bstr_t UniqueIdS;
		__declspec(property(get=GetPinned,put=PutPinned)) VARIANT_BOOL Pinned;

		GUID GetObjectType();
		int GetId();
		_bstr_t GetName();
		IPropertyContainerPtr GetProperties();
		IQuantityContainerPtr GetQuantities();
		_bstr_t GetObjectTypeS();
		IDispatchPtr GetInterfaceByName (_bstr_t interfaceName);
		IParameterContainerPtr GetParameters();
		GUID GetUniqueId();
		_bstr_t GetUniqueIdS();
		VARIANT_BOOL GetPinned();
		void PutPinned (VARIANT_BOOL pPinned);

		virtual HRESULT __stdcall get_ObjectType (GUID * pObjectType) = 0;
		virtual HRESULT __stdcall get_Id (int * pId) = 0;
		virtual HRESULT __stdcall get_Name (BSTR * pName) = 0;
		virtual HRESULT __stdcall raw_GetProperties (struct IPropertyContainer * * ppPropertyContainer) = 0;
		virtual HRESULT __stdcall raw_GetQuantities (struct IQuantityContainer * * ppQuantityContainer) = 0;
		virtual HRESULT __stdcall get_ObjectTypeS (BSTR * pObjectType) = 0;
		virtual HRESULT __stdcall raw_GetInterfaceByName (BSTR interfaceName, IDispatch * * ppInterface) = 0;
		virtual HRESULT __stdcall raw_GetParameters (struct IParameterContainer * * ppParameterContainer) = 0;
		virtual HRESULT __stdcall get_UniqueId (GUID * pUniqueId) = 0;
		virtual HRESULT __stdcall get_UniqueIdS (BSTR * pUniqueId) = 0;
		virtual HRESULT __stdcall get_Pinned (VARIANT_BOOL * pPinned) = 0;
		virtual HRESULT __stdcall put_Pinned (VARIANT_BOOL pPinned) = 0;
	};

	#pragma pack(push, 8)

	struct __declspec(uuid("07bf0c1c-827e-4d93-ba92-76ccddc0eb76")) Point3D {
		double X;
		double Y;
		double Z;
	};

	#pragma pack(pop)
	#pragma pack(push, 8)

	struct __declspec(uuid("51e6b05a-f970-42f6-98cf-a1ef577cf166")) Vector3D {
		double X;
		double Y;
		double Z;
	};

	#pragma pack(pop)

	struct __declspec(uuid("f86896f2-82bf-4b35-a1de-c0fd8924a30b")) ITransform3D : IDispatch {
		double GetElement (int rowIndex, int columnIndex);
		HRESULT SetElement (int rowIndex, int columnIndex, double value);
		HRESULT AddTranslation (struct Vector3D * translation);
		HRESULT AddRotation (struct Vector3D * axis, double angle);
		ITransform3DPtr GetCopy();
		ITransform3DPtr GetMultiplied (struct ITransform3D * pTransform);
		struct Point3D TransformPoint (struct Point3D * pPoint);
		struct Vector3D TransformVector (struct Vector3D * pVector);

		virtual HRESULT __stdcall raw_GetElement (int rowIndex, int columnIndex, double * pValue) = 0;
		virtual HRESULT __stdcall raw_SetElement (int rowIndex, int columnIndex, double value) = 0;
		virtual HRESULT __stdcall raw_AddTranslation (struct Vector3D * translation) = 0;
		virtual HRESULT __stdcall raw_AddRotation (struct Vector3D * axis, double angle) = 0;
		virtual HRESULT __stdcall raw_GetCopy (struct ITransform3D * * ppCopy) = 0;
		virtual HRESULT __stdcall raw_GetMultiplied (struct ITransform3D * pTransform, struct ITransform3D * * ppResult) = 0;
		virtual HRESULT __stdcall raw_TransformPoint (struct Point3D * pPoint, struct Point3D * pResult) = 0;
		virtual HRESULT __stdcall raw_TransformVector (struct Vector3D * pVector, struct Vector3D * pResult) = 0;
	};

	#pragma pack(push, 8)

	struct __declspec(uuid("9071c1dd-caaf-4339-b568-4ed5f913eb91")) Placement3D {
		struct Point3D Origin;
		struct Vector3D xAxis;
		struct Vector3D zAxis;
	};

	#pragma pack(pop)

	struct __declspec(uuid("7686e4a0-7b9e-46f9-8e8a-c1ef314a2c79")) IPlacement3D : IDispatch {
		__declspec(property(get=GetOrigin)) struct Point3D Origin;
		__declspec(property(get=GetAxisX)) struct Vector3D AxisX;
		__declspec(property(get=GetAxisY)) struct Vector3D AxisY;
		__declspec(property(get=GetAxisZ)) struct Vector3D AxisZ;
		__declspec(property(get=GetPlacement)) struct Placement3D Placement;

		struct Point3D GetOrigin();
		struct Vector3D GetAxisX();
		struct Vector3D GetAxisY();
		struct Vector3D GetAxisZ();
		VARIANT_BOOL IsOrthogonal();
		VARIANT_BOOL IsNormal();
		VARIANT_BOOL IsLeft();
		ITransform3DPtr GetTransformFrom();
		ITransform3DPtr GetTransformInto();
		HRESULT Move (struct Vector3D vector_);
		HRESULT Rotate (struct Vector3D axis_, double angle_);
		HRESULT Transform (struct ITransform3D * pTransform);
		IPlacement3DPtr GetCopy();
		HRESULT Rotate2 (struct Point3D axisOrigin_, struct Vector3D axis_, double angle_);
		struct Placement3D GetPlacement();

		virtual HRESULT __stdcall get_Origin (struct Point3D * pOrigin) = 0;
		virtual HRESULT __stdcall get_AxisX (struct Vector3D * pAxisX) = 0;
		virtual HRESULT __stdcall get_AxisY (struct Vector3D * pAxisY) = 0;
		virtual HRESULT __stdcall get_AxisZ (struct Vector3D * pAxisZ) = 0;
		virtual HRESULT __stdcall raw_IsOrthogonal (VARIANT_BOOL * pResult) = 0;
		virtual HRESULT __stdcall raw_IsNormal (VARIANT_BOOL * pResult) = 0;
		virtual HRESULT __stdcall raw_IsLeft (VARIANT_BOOL * pResult) = 0;
		virtual HRESULT __stdcall raw_GetTransformFrom (struct ITransform3D * * ppTransform) = 0;
		virtual HRESULT __stdcall raw_GetTransformInto (struct ITransform3D * * ppTransform) = 0;
		virtual HRESULT __stdcall raw_Move (struct Vector3D vector_) = 0;
		virtual HRESULT __stdcall raw_Rotate (struct Vector3D axis_, double angle_) = 0;
		virtual HRESULT __stdcall raw_Transform (struct ITransform3D * pTransform) = 0;
		virtual HRESULT __stdcall raw_GetCopy (struct IPlacement3D * * ppCopy) = 0;
		virtual HRESULT __stdcall raw_Rotate2 (struct Point3D axisOrigin_, struct Vector3D axis_, double angle_) = 0;
		virtual HRESULT __stdcall get_Placement (struct Placement3D * pPlacement3D) = 0;
	};

	struct __declspec(uuid("755196ef-fde0-4504-b867-662e235009c0")) ILevel : IDispatch {
		__declspec(property(get=GetElevation)) double Elevation;
		__declspec(property(get=GetLevelName)) _bstr_t LevelName;
		__declspec(property(get=GetPlacement)) IPlacement3DPtr Placement;

		double GetElevation();
		_bstr_t GetLevelName();
		IPlacement3DPtr GetPlacement();

		virtual HRESULT __stdcall get_Elevation (double * pElevation) = 0;
		virtual HRESULT __stdcall get_LevelName (BSTR * pLevelName) = 0;
		virtual HRESULT __stdcall get_Placement (struct IPlacement3D * * ppLevelPlacement) = 0;
	};

	#pragma pack(push, 8)

	struct __declspec(uuid("e5967a03-fb1b-4524-bc7f-c0ede4ba366c")) Point2D {
		double X;
		double Y;
	};

	#pragma pack(pop)

	enum Curve2DType : int {
		Curve2DType_Undefined = 0,
		Curve2DType_LineSegment = 1,
		Curve2DType_Arc = 2,
		Curve2DType_PolyCurve = 3
	};

	#pragma pack(push, 8)

	struct __declspec(uuid("2ac6a2af-5b07-4e44-bba1-8218901c178f")) Vector2D {
		double X;
		double Y;
	};

	#pragma pack(pop)

	struct __declspec(uuid("0b6b049f-f697-4c39-8620-39444d79b078")) ITransform2D : IDispatch {
		double GetElement (int rowIndex, int columnIndex);
		HRESULT SetElement (int rowIndex, int columnIndex, double value);
		HRESULT AddTranslation (struct Vector2D translation);
		HRESULT AddRotation (struct Point2D pivot, double angle);
		ITransform2DPtr GetCopy();
		struct Point2D TransformPoint (struct Point2D * pPoint);
		struct Vector2D TransformVector (struct Vector2D * pVector);
		ITransform3DPtr CreateTransform3D();

		virtual HRESULT __stdcall raw_GetElement (int rowIndex, int columnIndex, double * pValue) = 0;
		virtual HRESULT __stdcall raw_SetElement (int rowIndex, int columnIndex, double value) = 0;
		virtual HRESULT __stdcall raw_AddTranslation (struct Vector2D translation) = 0;
		virtual HRESULT __stdcall raw_AddRotation (struct Point2D pivot, double angle) = 0;
		virtual HRESULT __stdcall raw_GetCopy (struct ITransform2D * * ppCopy) = 0;
		virtual HRESULT __stdcall raw_TransformPoint (struct Point2D * pPoint, struct Point2D * pResult) = 0;
		virtual HRESULT __stdcall raw_TransformVector (struct Vector2D * pVector, struct Vector2D * pResult) = 0;
		virtual HRESULT __stdcall raw_CreateTransform3D (struct ITransform3D * * ppTransform3D) = 0;
	};

	enum Curve3DType : int {
		Curve3DType_Undefined = 0,
		Curve3DType_LineSegment = 1,
		Curve3DType_Arc = 2,
		Curve3DType_PolyCurve = 3
	};

	#pragma pack(push, 8)

	struct __declspec(uuid("765bfee8-b4b5-4509-805a-3da099c20115")) Cube {
		struct Point3D MIN;
		struct Point3D MAX;
	};

	#pragma pack(pop)

	struct __declspec(uuid("7302ebae-6e39-4831-8b56-7b79ba6c5c8e")) ICurve3D : IDispatch {
		__declspec(property(get=GetCurve3DType)) enum Curve3DType _Curve3DType;
		__declspec(property(get=GetMinParameter)) double MinParameter;
		__declspec(property(get=GetMaxParameter)) double MaxParameter;
		__declspec(property(get=GetTrackingId)) int TrackingId;

		enum Curve3DType GetCurve3DType();
		ICurve3DPtr GetCopy();
		struct Point3D GetBeginPoint();
		struct Point3D GetEndPoint();
		struct Point3D GetPointOn (double param);
		double GetMinParameter();
		double GetMaxParameter();
		double GetLength();
		struct Cube GetGabarit();
		VARIANT_BOOL IsClosed();
		double GetParameterAtDistance (double startT, double distance, int direction);
		ICurve3DPtr GetTrimmed (double t1, double t2, int sense);
		double PointProjection (struct Point3D * point);
		IDispatchPtr GetInterfaceByName (_bstr_t interfaceName);
		ICurve3DPtr GetTransformed (struct ITransform3D * pTransfrom);
		ICurve3DPtr GetOffseted (struct Vector3D * pOffset);
		int GetTrackingId();
		
		virtual HRESULT __stdcall get_Curve3DType (enum Curve3DType * pType) = 0;
		virtual HRESULT __stdcall raw_GetCopy (struct ICurve3D * * ppCurve3D) = 0;
		virtual HRESULT __stdcall raw_GetBeginPoint (struct Point3D * pPoint3D) = 0;
		virtual HRESULT __stdcall raw_GetEndPoint (struct Point3D * pPoint3D) = 0;
		virtual HRESULT __stdcall raw_GetPointOn (double param, struct Point3D * pPoint3D) = 0;
		virtual HRESULT __stdcall get_MinParameter (double * pParam) = 0;
		virtual HRESULT __stdcall get_MaxParameter (double * pParam) = 0;
		virtual HRESULT __stdcall raw_GetLength (double * pLength) = 0;
		virtual HRESULT __stdcall raw_GetGabarit (struct Cube * pCube) = 0;
		virtual HRESULT __stdcall raw_IsClosed (VARIANT_BOOL * pResult) = 0;
		virtual HRESULT __stdcall raw_GetParameterAtDistance (double startT, double distance, int direction, double * pResultT) = 0;
		virtual HRESULT __stdcall raw_GetTrimmed (double t1, double t2, int sense, struct ICurve3D * * ppTrimmedCurve) = 0;
		virtual HRESULT __stdcall raw_PointProjection (struct Point3D * point, double * pResultT) = 0;
		virtual HRESULT __stdcall raw_GetInterfaceByName (BSTR interfaceName, IDispatch * * ppInterface) = 0;
		virtual HRESULT __stdcall raw_GetTransformed (struct ITransform3D * pTransfrom, struct ICurve3D * * ppTransformedCurve) = 0;
		virtual HRESULT __stdcall raw_GetOffseted (struct Vector3D * pOffset, struct ICurve3D * * ppOffsetCurve) = 0;
		virtual HRESULT __stdcall get_TrackingId (int * pId) = 0;
	};

	struct __declspec(uuid("0af85250-03b4-4de4-bd7d-42da4221dc8e")) ICurve2D : IDispatch {
		__declspec(property(get=GetCurve2DType)) enum Curve2DType _Curve2DType;
		__declspec(property(get=GetMinParameter)) double MinParameter;
		__declspec(property(get=GetMaxParameter)) double MaxParameter;
		__declspec(property(get=GetTrackingId)) int TrackingId;

		enum Curve2DType GetCurve2DType();
		ICurve2DPtr GetCopy();
		struct Point2D GetBeginPoint();
		struct Point2D GetEndPoint();
		struct Point2D GetPointOn (double param);
		double GetMinParameter();
		double GetMaxParameter();
		double GetLength();
		HRESULT GetGabarit (struct Point2D * p1, struct Point2D * p2);
		VARIANT_BOOL IsClosed();
		double GetParameterAtDistance (double startT, double distance, int direction);
		ICurve2DPtr GetTrimmed (double t1, double t2, int sense);
		double PointProjection (struct Point2D point);
		IDispatchPtr GetInterfaceByName (_bstr_t interfaceName);
		ICurve2DPtr GetTransformed (struct ITransform2D * pTransfrom);
		ICurve3DPtr CreateCurve3D (struct IPlacement3D * pPlacement);
		ICurve2DPtr GetOffseted (double offset);
		int GetTrackingId();

		virtual HRESULT __stdcall get_Curve2DType (enum Curve2DType * pType) = 0;
		virtual HRESULT __stdcall raw_GetCopy (struct ICurve2D * * ppCurve2D) = 0;
		virtual HRESULT __stdcall raw_GetBeginPoint (struct Point2D * pPoint2D) = 0;
		virtual HRESULT __stdcall raw_GetEndPoint (struct Point2D * pPoint2D) = 0;
		virtual HRESULT __stdcall raw_GetPointOn (double param, struct Point2D * pPoint2D) = 0;
		virtual HRESULT __stdcall get_MinParameter (double * pParam) = 0;
		virtual HRESULT __stdcall get_MaxParameter (double * pParam) = 0;
		virtual HRESULT __stdcall raw_GetLength (double * pLength) = 0;
		virtual HRESULT __stdcall raw_GetGabarit (/*[out]*/ struct Point2D * p1, struct Point2D * p2) = 0;
		virtual HRESULT __stdcall raw_IsClosed (VARIANT_BOOL * pResult) = 0;
		virtual HRESULT __stdcall raw_GetParameterAtDistance (double startT, double distance, int direction, double * pResultT) = 0;
		virtual HRESULT __stdcall raw_GetTrimmed (double t1, double t2, int sense, struct ICurve2D * * ppTrimmedCurve) = 0;
		virtual HRESULT __stdcall raw_PointProjection (struct Point2D point, double * pResultT) = 0;
		virtual HRESULT __stdcall raw_GetInterfaceByName (BSTR interfaceName, IDispatch * * ppInterface) = 0;
		virtual HRESULT __stdcall raw_GetTransformed (struct ITransform2D * pTransfrom, struct ICurve2D * * ppTransformedCurve) = 0;
		virtual HRESULT __stdcall raw_CreateCurve3D (struct IPlacement3D * pPlacement, struct ICurve3D * * ppCurve) = 0;
		virtual HRESULT __stdcall raw_GetOffseted (double offset, struct ICurve2D * * ppOffsetedCurve) = 0;
		virtual HRESULT __stdcall get_TrackingId (int * pId) = 0;
	};

	struct __declspec(uuid("93537c3a-ef32-46c1-bfa5-8bcc5865b7aa")) IRegion2D : IDispatch {
		int GetContourCount();
		ICurve2DPtr GetContour (int index);
		ICurve2DPtr GetOuterContour();

		virtual HRESULT __stdcall raw_GetContourCount (int * pCount) = 0;
		virtual HRESULT __stdcall raw_GetContour (int index, struct ICurve2D * * ppContour2D) = 0;
		virtual HRESULT __stdcall raw_GetOuterContour (struct ICurve2D * * ppContour2D) = 0;
	};

	struct __declspec(uuid("db74facf-ac6e-44dc-8023-7b1799280a02")) IRoomRegionDescription : IDispatch {
		__declspec(property(get=GetRegion)) IRegion2DPtr Region;

		int GetObjectId (int regionCurveTrackingId);
		IRegion2DPtr GetRegion();

		virtual HRESULT __stdcall raw_GetObjectId (int regionCurveTrackingId, int * pObjectId) = 0;
		virtual HRESULT __stdcall get_Region (struct IRegion2D * * ppRegion) = 0;
	};

	struct __declspec(uuid("b102200d-6789-4a57-a97e-16dc283cad38")) IRoom : IDispatch {
		__declspec(property(get=GetRoomName)) _bstr_t RoomName;
		__declspec(property(get=GetRoomNumber)) _bstr_t RoomNumber;
		__declspec(property(get=GetMarkerPosition,put=PutMarkerPosition)) struct Point2D MarkerPosition;
		__declspec(property(get=GetAutomatic)) VARIANT_BOOL Automatic;
		__declspec(property(get=GetControlPoint,put=PutControlPoint)) struct Point2D ControlPoint;

		_bstr_t GetRoomName();
		_bstr_t GetRoomNumber();
		struct Point2D GetMarkerPosition();
		VARIANT_BOOL GetAutomatic();
		struct Point2D GetControlPoint();
		IRoomRegionDescriptionPtr CalculateRegion (struct Point2D roomPoint);
		void PutMarkerPosition (struct Point2D pMarkerPosition);
		void PutControlPoint (struct Point2D pControlPoint);

		virtual HRESULT __stdcall get_RoomName (BSTR * pRoomName) = 0;
		virtual HRESULT __stdcall get_RoomNumber (BSTR * pRoomNumber) = 0;
		virtual HRESULT __stdcall get_MarkerPosition (struct Point2D * pMarkerPosition) = 0;
		virtual HRESULT __stdcall get_Automatic (VARIANT_BOOL * pAutomatic) = 0;
		virtual HRESULT __stdcall get_ControlPoint (struct Point2D * pControlPoint) = 0;
		virtual HRESULT __stdcall raw_CalculateRegion (struct Point2D roomPoint, struct IRoomRegionDescription * * ppRoomRegionDescription) = 0;
		virtual HRESULT __stdcall put_MarkerPosition (struct Point2D pMarkerPosition) = 0;
		virtual HRESULT __stdcall put_ControlPoint (struct Point2D pControlPoint) = 0;
	};

	enum FlowDirectionType : int {
		FlowDirectionType_Inlet = 0,
		FlowDirectionType_Outlet = 1,
		FlowDirectionType_InletAndOutlet = 2,
		FlowDirectionType_Undefined = 3
	};

	enum PortRole : int {
		PortRole_EndPort = 0,
		PortRole_TransitPort = 1
	};

	struct __declspec(uuid("35d49f52-2be4-4f7b-960f-79fd1b64a28b")) IPort : IDispatch {
		__declspec(property(get=GetName)) _bstr_t Name;
		__declspec(property(get=GetFlowDirection)) enum FlowDirectionType FlowDirection;
		__declspec(property(get=GetAvailableSystemCategories)) SAFEARRAY * AvailableSystemCategories;
		__declspec(property(get=GetPortConnectionParams)) IDispatchPtr PortConnectionParams;
		__declspec(property(get=GetPlacement)) struct Placement3D Placement;
		__declspec(property(get=GetPortRole)) enum PortRole _PortRole;

		_bstr_t GetName();
		enum FlowDirectionType GetFlowDirection();
		SAFEARRAY * GetAvailableSystemCategories();
		IDispatchPtr GetPortConnectionParams();
		VARIANT_BOOL HasConnectionWithRoute();
		int ConnectedRouteId();
		struct Placement3D GetPlacement();
		enum PortRole GetPortRole();

		virtual HRESULT __stdcall get_Name (BSTR * pName) = 0;
		virtual HRESULT __stdcall get_FlowDirection (enum FlowDirectionType * pType) = 0;
		virtual HRESULT __stdcall get_AvailableSystemCategories (SAFEARRAY * * ppCategories) = 0;
		virtual HRESULT __stdcall get_PortConnectionParams (IDispatch * * ppParams) = 0;
		virtual HRESULT __stdcall raw_HasConnectionWithRoute (VARIANT_BOOL * pConnected) = 0;
		virtual HRESULT __stdcall raw_ConnectedRouteId (int * pId) = 0;
		virtual HRESULT __stdcall get_Placement (struct Placement3D * pPlacement3D) = 0;
		virtual HRESULT __stdcall get_PortRole (enum PortRole * pRole) = 0;
	};

	struct __declspec(uuid("b2cce71a-fb49-406c-92cc-3b6782988bab")) IEntityWithPorts : IDispatch {
		__declspec(property(get=GetCount)) int Count;

		int GetCount();
		IPortPtr GetByIndex (int index);

		virtual HRESULT __stdcall get_Count (int * pCount) = 0;
		virtual HRESULT __stdcall raw_GetByIndex (int index, struct IPort * * ppPort) = 0;
	};

	struct __declspec(uuid("e14d80b2-00c9-41f3-92d7-879bff6cf0d0")) IObjectWithMaterial : IDispatch {
		__declspec(property(get=GetMaterialId)) int MaterialId;

		int GetMaterialId();
		VARIANT_BOOL HasMaterial();

		virtual HRESULT __stdcall get_MaterialId (int * pMaterialId) = 0;
		virtual HRESULT __stdcall raw_HasMaterial (VARIANT_BOOL * pResult) = 0;
	};

	enum LayeredMaterialGroup : int {
		LayeredMaterialGroup_Undefined = 0,
		LayeredMaterialGroup_Wall = 1,
		LayeredMaterialGroup_Floor = 2,
		LayeredMaterialGroup_Roof = 3,
		LayeredMaterialGroup_Insulation = 4
	};

	#pragma pack(push, 4)

	struct __MIDL___MIDL_itf_RengaCOMAPI_0002_0237_0001 {
		int Id;
		enum LayeredMaterialGroup Group;
	};

	#pragma pack(pop)

	struct __declspec(uuid("b8cfc5c9-1de8-4a98-9084-107793849c9f")) ILayer : IDispatch {
		__declspec(property(get=GetMaterialId)) int MaterialId;

		int GetMaterialId();
		IQuantityContainerPtr GetQuantities();

		virtual HRESULT __stdcall get_MaterialId (int * pMaterialId) = 0;
		virtual HRESULT __stdcall raw_GetQuantities (struct IQuantityContainer * * ppQuantityContainer) = 0;
	};

	struct __declspec(uuid("c1c6924e-6b1b-4626-a392-2151e1dce223")) ILayerCollection : IDispatch {
		__declspec(property(get=GetCount)) int Count;

		int GetCount();
		ILayerPtr Get (int index);

		virtual HRESULT __stdcall get_Count (int * pCount) = 0;
		virtual HRESULT __stdcall raw_Get (int index, struct ILayer * * ppLayer) = 0;
	};

	struct __declspec(uuid("c1f50bf7-da6e-430a-a1da-6f7eac914bca")) IObjectWithLayeredMaterial : IDispatch {
		__declspec(property(get=GetLayeredMaterialId)) int LayeredMaterialId;

		LayeredMaterialIdGroupPair GetLayeredMaterialIdGroupPair();
		VARIANT_BOOL HasLayeredMaterial();
		ILayerCollectionPtr GetLayers();
		int GetLayeredMaterialId();

		virtual HRESULT __stdcall raw_GetLayeredMaterialIdGroupPair (LayeredMaterialIdGroupPair * pLayeredMaterialGroupIdPair) = 0;
		virtual HRESULT __stdcall raw_HasLayeredMaterial (VARIANT_BOOL * pResult) = 0;
		virtual HRESULT __stdcall raw_GetLayers (struct ILayerCollection * * ppLayerCollection) = 0;
		virtual HRESULT __stdcall get_LayeredMaterialId (int * pLayeredMaterialId) = 0;
	};

	struct __declspec(uuid("952b2e3a-0aee-4744-9587-ff2c6bb1b388")) ILevelObject : IDispatch {
		__declspec(property(get=GetLevelId)) int LevelId;
		__declspec(property(get=GetVerticalOffset)) double VerticalOffset;
		__declspec(property(get=GetPlacementElevation)) double PlacementElevation;
		__declspec(property(get=GetElevationAboveLevel)) double ElevationAboveLevel;

		int GetLevelId();
		double GetVerticalOffset();
		double GetPlacementElevation();
		double GetElevationAboveLevel();
		IPlacement3DPtr GetPlacement();
		HRESULT SetPlacement (struct IPlacement3D * pPlacement);

		virtual HRESULT __stdcall get_LevelId (int * pLevelId) = 0;
		virtual HRESULT __stdcall get_VerticalOffset (double * pOffset) = 0;
		virtual HRESULT __stdcall get_PlacementElevation (double * pElevation) = 0;
		virtual HRESULT __stdcall get_ElevationAboveLevel (double * pElevation) = 0;
		virtual HRESULT __stdcall raw_GetPlacement (struct IPlacement3D * * pPlacement) = 0;
		virtual HRESULT __stdcall raw_SetPlacement (struct IPlacement3D * pPlacement) = 0;
	};

	struct __declspec(uuid("394ceca1-63b0-4438-a3fd-da8cc5d23043")) IObjectWithLink : IDispatch {
		__declspec(property(get=GetLinkId)) int LinkId;
		__declspec(property(get=GetLinkType)) GUID LinkType;

		int GetLinkId();
		GUID GetLinkType();

		virtual HRESULT __stdcall get_LinkId (int * pResourceId) = 0;
		virtual HRESULT __stdcall get_LinkType (GUID * pTypeId) = 0;
	};

	struct __declspec(uuid("8205a058-1bbd-4452-910b-a1d88c0ceb97")) IObjectWithMark : IDispatch {
		__declspec(property(get=GetMark)) _bstr_t Mark;

		_bstr_t GetMark();

		virtual HRESULT __stdcall get_Mark (BSTR * pMark) = 0;
	};

	struct __declspec(uuid("014033f6-309e-4b26-8f33-aefa157058dd")) IEntity : IDispatch {
		__declspec(property(get=GetId)) int Id;
		__declspec(property(get=GetName)) _bstr_t Name;
		__declspec(property(get=GetUniqueId)) GUID UniqueId;
		__declspec(property(get=GetUniqueIdS)) _bstr_t UniqueIdS;
		__declspec(property(get=GetTypeId)) GUID TypeId;
		__declspec(property(get=GetTypeIdS)) _bstr_t TypeIdS;

		int GetId();
		_bstr_t GetName();
		GUID GetUniqueId();
		_bstr_t GetUniqueIdS();
		GUID GetTypeId();
		_bstr_t GetTypeIdS();
		IDispatchPtr GetInterfaceByName (_bstr_t interfaceName);

		virtual HRESULT __stdcall get_Id (int * pId) = 0;
		virtual HRESULT __stdcall get_Name (BSTR * pName) = 0;
		virtual HRESULT __stdcall get_UniqueId (GUID * pUniqueId) = 0;
		virtual HRESULT __stdcall get_UniqueIdS (BSTR * pUniqueId) = 0;
		virtual HRESULT __stdcall get_TypeId (GUID * pTypeId) = 0;
		virtual HRESULT __stdcall get_TypeIdS (BSTR * pTypeId) = 0;
		virtual HRESULT __stdcall raw_GetInterfaceByName (BSTR interfaceName, IDispatch * * ppInterface) = 0;
	};

	struct __declspec(uuid("2e79e830-0706-4086-8392-3a93c5aea873")) IObjectWithInsulation : IDispatch {
		__declspec(property(get=GetInsulation)) IEntityPtr Insulation;

		IEntityPtr GetInsulation();

		virtual HRESULT __stdcall get_Insulation (struct IEntity * * pInsulation) = 0;
	};

	struct __declspec(uuid("85eeb5ac-352b-46f4-b5ed-9f21b6a5a4c9")) IPlacement3DCollection : IDispatch {
		__declspec(property(get=GetCount)) int Count;

		int GetCount();
		IPlacement3DPtr Get (int index);

		virtual HRESULT __stdcall get_Count (int * pCount) = 0;
		virtual HRESULT __stdcall raw_Get (int index, struct IPlacement3D * * ppPlacement) = 0;
	};

	struct __declspec(uuid("2f9b4d51-d10e-4d30-87b6-7ac577dc2ab9")) IRebarUsage : IDispatch {
		__declspec(property(get=GetStyleId)) int StyleId;

		int GetStyleId();
		IQuantityContainerPtr GetQuantities();
		ICurve3DPtr GetRebarGeometry();
		IPlacement3DCollectionPtr GetPlacements();

		virtual HRESULT __stdcall get_StyleId (int * pId) = 0;
		virtual HRESULT __stdcall raw_GetQuantities (struct IQuantityContainer * * ppQuantityContainer) = 0;
		virtual HRESULT __stdcall raw_GetRebarGeometry (struct ICurve3D * * ppGeometry) = 0;
		virtual HRESULT __stdcall raw_GetPlacements (struct IPlacement3DCollection * * ppPlacements) = 0;
	};

	struct __declspec(uuid("edc0687a-fed9-4f83-a123-9e1a7af0b44e")) IRebarUsageCollection : IDispatch {
		__declspec(property(get=GetCount)) int Count;

		int GetCount();
		IRebarUsagePtr Get (int index);

		virtual HRESULT __stdcall get_Count (int * pCount) = 0;
		virtual HRESULT __stdcall raw_Get (int index, struct IRebarUsage * * ppRebarUsage) = 0;
	};

	struct __declspec(uuid("973e3683-41f1-41a6-b690-e67ba4315b68")) IReinforcementUnitUsage : IDispatch {
		__declspec(property(get=GetStyleId)) int StyleId;

		int GetStyleId();
		IQuantityContainerPtr GetQuantities();
		IPlacement3DCollectionPtr GetPlacements();

		virtual HRESULT __stdcall get_StyleId (int * pReinforcementUnitStyleId) = 0;
		virtual HRESULT __stdcall raw_GetQuantities (struct IQuantityContainer * * ppQuantityContainer) = 0;
		virtual HRESULT __stdcall raw_GetPlacements (struct IPlacement3DCollection * * ppPlacements) = 0;
	};

	struct __declspec(uuid("8404f3b7-477d-4deb-a411-3019821d1680")) IReinforcementUnitUsageCollection : IDispatch {
		__declspec(property(get=GetCount)) int Count;

		int GetCount();
		IReinforcementUnitUsagePtr Get (int index);

		virtual HRESULT __stdcall get_Count (int * pCount) = 0;
		virtual HRESULT __stdcall raw_Get (int index, struct IReinforcementUnitUsage * * ppReinforcementUnitUsage) = 0;
	};

	struct __declspec(uuid("740ac9a9-5712-486e-b2b5-e3e3b88a6590")) IObjectReinforcementModel : IDispatch {

		IRebarUsageCollectionPtr GetRebarUsages();
		IReinforcementUnitUsageCollectionPtr GetReinforcementUnitUsages();

		virtual HRESULT __stdcall raw_GetRebarUsages (struct IRebarUsageCollection * * ppRebarUsageCollection) = 0;
		virtual HRESULT __stdcall raw_GetReinforcementUnitUsages (struct IReinforcementUnitUsageCollection * * ppReinforcementUnitUsageCollection) = 0;
	};

	#pragma pack(push, 2)

	struct __declspec(uuid("27dd5096-d0cb-47ca-affc-c564478bbf53")) Color {
		unsigned short Red;
		unsigned short Green;
		unsigned short Blue;
		unsigned short Alpha;
	};

	#pragma pack(pop)
	#pragma pack(push, 1)

	struct __declspec(uuid("46745f8f-2d3e-4bbc-987c-807315555085")) FontStyle {
		char Bold;
		char Italic;
		char Underline;
	};

	#pragma pack(pop)
	#pragma pack(push, 8)

	struct __declspec(uuid("21516436-cea5-4760-b2df-7d91070ff55c")) RichTextToken {
		BSTR Text;
		BSTR FontFamily;
		float FontCapSize;
		struct Color FontColor;
		struct FontStyle FontStyle;
	};

	#pragma pack(pop)

	struct __declspec(uuid("f10116fc-7a17-42ff-ad50-447e120b95de")) IRichTextParagraph : IDispatch {
		__declspec(property(get=GetTokenCount)) int TokenCount;

		int GetTokenCount();
		struct RichTextToken GetToken (int index);
		HRESULT InsertToken (int index, struct RichTextToken token);
		HRESULT AppendToken (struct RichTextToken token);
		HRESULT PrependToken (struct RichTextToken token);
		HRESULT RemoveToken (int index);

		virtual HRESULT __stdcall get_TokenCount (int * pCount) = 0;
		virtual HRESULT __stdcall raw_GetToken (int index, struct RichTextToken * pToken) = 0;
		virtual HRESULT __stdcall raw_InsertToken (int index, struct RichTextToken token) = 0;
		virtual HRESULT __stdcall raw_AppendToken (struct RichTextToken token) = 0;
		virtual HRESULT __stdcall raw_PrependToken (struct RichTextToken token) = 0;
		virtual HRESULT __stdcall raw_RemoveToken (int index) = 0;
	};

	struct __declspec(uuid("d1a3c557-a785-4863-92bb-4c3db1cc5e14")) IRichTextDocument : IDispatch {
		__declspec(property(get=GetParagraphCount)) int ParagraphCount;

		int GetParagraphCount();
		IRichTextParagraphPtr GetParagraph (int index);
		IRichTextParagraphPtr InsertParagraph (int index, SAFEARRAY * data);
		IRichTextParagraphPtr AppendParagraph (SAFEARRAY * data);
		IRichTextParagraphPtr PrependParagraph (SAFEARRAY * data);
		HRESULT RemoveParagraph (int index);

		virtual HRESULT __stdcall get_ParagraphCount (int * pCount) = 0;
		virtual HRESULT __stdcall raw_GetParagraph (int index, struct IRichTextParagraph * * ppParagraph) = 0;
		virtual HRESULT __stdcall raw_InsertParagraph (int index, SAFEARRAY * data, struct IRichTextParagraph * * ppParagraph) = 0;
		virtual HRESULT __stdcall raw_AppendParagraph (SAFEARRAY * data, struct IRichTextParagraph * * ppParagraph) = 0;
		virtual HRESULT __stdcall raw_PrependParagraph (SAFEARRAY * data, struct IRichTextParagraph * * ppParagraph) = 0;
		virtual HRESULT __stdcall raw_RemoveParagraph (int index) = 0;
	};

	#pragma pack(push, 8)

	struct __declspec(uuid("ee43dc1d-c416-42d8-b4ae-8d2c18d09bd2")) Rect {
		double Top;
		double Bottom;
		double Left;
		double Right;
	};

	#pragma pack(pop)

	struct __declspec(uuid("08318a1b-6eee-47b1-98af-e7611cc2873e")) ITextObject : IDispatch {
		__declspec(property(get=GetBoundRect,put=PutBoundRect)) struct Rect BoundRect;

		IRichTextDocumentPtr GetRichTextDocument();
		struct Rect GetBoundRect();
		void PutBoundRect (struct Rect pRect);

		virtual HRESULT __stdcall raw_GetRichTextDocument (struct IRichTextDocument * * ppDocument) = 0;
		virtual HRESULT __stdcall get_BoundRect (struct Rect * pRect) = 0;
		virtual HRESULT __stdcall put_BoundRect (struct Rect pRect) = 0;
	};

	#pragma pack(push, 8)

	struct __declspec(uuid("25a8d6c4-5460-49ce-bba6-1d013d5a38dc")) Placement2D {
		struct Point2D Origin;
		struct Vector2D xAxis;
	};

	#pragma pack(pop)

	struct __declspec(uuid("c5d27be1-9a4c-4a9d-b114-c1f2eccc1986")) IBaseline2DObject : IDispatch {
		ICurve2DPtr GetBaseline();
		HRESULT SetBaseline (struct ICurve2D * pBaseline);
		ICurve2DPtr GetBaselineInCS (struct Placement2D Placement2D);
		HRESULT SetBaselineInCS (struct Placement2D Placement2D, struct ICurve2D * pBaselineInCS);

		virtual HRESULT __stdcall raw_GetBaseline (struct ICurve2D * * ppBaseline) = 0;
		virtual HRESULT __stdcall raw_SetBaseline (struct ICurve2D * pBaseline) = 0;
		virtual HRESULT __stdcall raw_GetBaselineInCS (struct Placement2D Placement2D, struct ICurve2D * * ppBaselineInCS) = 0;
		virtual HRESULT __stdcall raw_SetBaselineInCS (struct Placement2D Placement2D, struct ICurve2D * pBaselineInCS) = 0;
	};

	struct __declspec(uuid("80183df8-fbc0-4403-a822-8b04447cdebe")) IPlacement2D : IDispatch {
		__declspec(property(get=GetOrigin)) struct Point2D Origin;
		__declspec(property(get=GetAxisX)) struct Vector2D AxisX;
		__declspec(property(get=GetAxisY)) struct Vector2D AxisY;
		__declspec(property(get=GetPlacement)) struct Placement2D Placement;

		struct Point2D GetOrigin();
		struct Vector2D GetAxisX();
		struct Vector2D GetAxisY();
		VARIANT_BOOL IsOrthogonal();
		VARIANT_BOOL IsNormal();
		VARIANT_BOOL IsLeft();
		ITransform2DPtr GetTransformFrom();
		ITransform2DPtr GetTransformInto();
		IPlacement2DPtr GetCopy();
		struct Placement2D GetPlacement();
		HRESULT Move (struct Vector2D vector_);
		HRESULT Rotate (struct Point2D point_, double angle_);
		HRESULT Transform (struct ITransform2D * pTransform);

		virtual HRESULT __stdcall get_Origin (struct Point2D * pOrigin) = 0;
		virtual HRESULT __stdcall get_AxisX (struct Vector2D * pAxisX) = 0;
		virtual HRESULT __stdcall get_AxisY (struct Vector2D * pAxisY) = 0;
		virtual HRESULT __stdcall raw_IsOrthogonal (VARIANT_BOOL * pResult) = 0;
		virtual HRESULT __stdcall raw_IsNormal (VARIANT_BOOL * pResult) = 0;
		virtual HRESULT __stdcall raw_IsLeft (VARIANT_BOOL * pResult) = 0;
		virtual HRESULT __stdcall raw_GetTransformFrom (struct ITransform2D * * ppTransform) = 0;
		virtual HRESULT __stdcall raw_GetTransformInto (struct ITransform2D * * ppTransform) = 0;
		virtual HRESULT __stdcall raw_GetCopy (struct IPlacement2D * * ppCopy) = 0;
		virtual HRESULT __stdcall get_Placement (struct Placement2D * pPlacement2D) = 0;
		virtual HRESULT __stdcall raw_Move (struct Vector2D vector_) = 0;
		virtual HRESULT __stdcall raw_Rotate (struct Point2D point_, double angle_) = 0;
		virtual HRESULT __stdcall raw_Transform (struct ITransform2D * pTransform) = 0;
	};

	struct __declspec(uuid("9843b29a-142b-4481-b938-6439437a0de1")) IPlacement2DObject : IDispatch {
		IPlacement2DPtr GetPlacement();
		HRESULT SetPlacement (struct IPlacement2D * pPlacement);

		virtual HRESULT __stdcall raw_GetPlacement (struct IPlacement2D * * ppPlacement) = 0;
		virtual HRESULT __stdcall raw_SetPlacement (struct IPlacement2D * pPlacement) = 0;
	};

	struct __declspec(uuid("7fe2a5dc-c313-4734-89af-6cc781f7b403")) IBaseline3DObject : IDispatch {
		ICurve3DPtr GetBaseline();
		HRESULT SetBaseline (struct ICurve3D * pBaseline);
		ICurve3DPtr GetBaselineInCS (struct Placement3D Placement3D);
		HRESULT SetBaselineInCS (struct Placement3D Placement3D, struct ICurve3D * pBaselineInCS);

		virtual HRESULT __stdcall raw_GetBaseline (struct ICurve3D * * ppBaseline) = 0;
		virtual HRESULT __stdcall raw_SetBaseline (struct ICurve3D * pBaseline) = 0;
		virtual HRESULT __stdcall raw_GetBaselineInCS (struct Placement3D Placement3D, struct ICurve3D * * ppBaselineInCS) = 0;
		virtual HRESULT __stdcall raw_SetBaselineInCS (struct Placement3D Placement3D, struct ICurve3D * pBaselineInCS) = 0;
	};

	#pragma pack(push, 4)

	struct __declspec(uuid("0186330b-2650-4bb3-8590-7b62e1676c60")) Triangle {
		unsigned int V0;
		unsigned int V1;
		unsigned int V2;
	};

	#pragma pack(pop)
	#pragma pack(push, 4)

	struct __declspec(uuid("4aac2bb0-ed4a-4018-a267-13ffc06914d7")) FloatPoint3D {
		float X;
		float Y;
		float Z;
	};

	#pragma pack(pop)
	#pragma pack(push, 4)

	struct __declspec(uuid("d1ae4940-aee2-44a2-b266-d57d895df4ad")) FloatVector3D {
		float X;
		float Y;
		float Z;
	};

	#pragma pack(pop)
	#pragma pack(push, 4)

	struct __declspec(uuid("8aa7f525-44a9-4586-89f5-b3e71346122f")) FloatPoint2D {
		float X;
		float Y;
	};

	#pragma pack(pop)

	struct __declspec(uuid("00373307-761c-41df-853b-de18750905f8")) IGrid : IDispatch {
		__declspec(property(get=GetTriangleCount)) int TriangleCount;
		__declspec(property(get=GetVertexCount)) int VertexCount;
		__declspec(property(get=GetNormalCount)) int NormalCount;
		__declspec(property(get=GetTextureCoordinateCount)) int TextureCoordinateCount;
		__declspec(property(get=GetGridType)) int GridType;
		__declspec(property(get=GetDoubleSided)) VARIANT_BOOL DoubleSided;

		int GetTriangleCount();
		struct Triangle GetTriangle (int index);
		int GetVertexCount();
		struct FloatPoint3D GetVertex (int index);
		int GetNormalCount();
		struct FloatVector3D GetNormal (int index);
		int GetTextureCoordinateCount();
		struct FloatPoint2D GetTextureCoordinate (int index);
		int GetGridType();
		VARIANT_BOOL GetDoubleSided();
		HRESULT GetTriangleComponents (int index, unsigned int * pTriangleV0, unsigned int * pTriangleV1, unsigned int * pTriangleV2);
		HRESULT GetVertexComponents (int index, float * pX, float * pY, float * pZ);
		HRESULT GetNormalComponents (int index, float * pX, float * pY, float * pZ);
		HRESULT GetTextureCoordinateComponents (int index, float * pX, float * pY);

		virtual HRESULT __stdcall get_TriangleCount (int * pCount) = 0;
		virtual HRESULT __stdcall raw_GetTriangle (int index, struct Triangle * pTriangle) = 0;
		virtual HRESULT __stdcall get_VertexCount (int * pCount) = 0;
		virtual HRESULT __stdcall raw_GetVertex (int index, struct FloatPoint3D * pPoint) = 0;
		virtual HRESULT __stdcall get_NormalCount (int * pCount) = 0;
		virtual HRESULT __stdcall raw_GetNormal (int index, struct FloatVector3D * pVector) = 0;
		virtual HRESULT __stdcall get_TextureCoordinateCount (int * pCount) = 0;
		virtual HRESULT __stdcall raw_GetTextureCoordinate (int index, struct FloatPoint2D * pPoint) = 0;
		virtual HRESULT __stdcall get_GridType (int * pGridType) = 0;
		virtual HRESULT __stdcall get_DoubleSided (VARIANT_BOOL * pResult) = 0;
		virtual HRESULT __stdcall raw_GetTriangleComponents (int index, unsigned int * pTriangleV0, unsigned int * pTriangleV1, unsigned int * pTriangleV2) = 0;
		virtual HRESULT __stdcall raw_GetVertexComponents (int index, float * pX, float * pY, float * pZ) = 0;
		virtual HRESULT __stdcall raw_GetNormalComponents (int index, float * pX, float * pY, float * pZ) = 0;
		virtual HRESULT __stdcall raw_GetTextureCoordinateComponents (int index, float * pX, float * pY) = 0;
	};

	struct __declspec(uuid("ece43445-ac1c-441e-980c-187e6a033deb")) IMesh : IDispatch {
		__declspec(property(get=GetGridCount)) int GridCount;
		__declspec(property(get=GetMeshType)) GUID MeshType;
		__declspec(property(get=GetMeshTypeS)) _bstr_t MeshTypeS;

		int GetGridCount();
		IGridPtr GetGrid (int index);
		GUID GetMeshType();
		_bstr_t GetMeshTypeS();

		virtual HRESULT __stdcall get_GridCount (int * pCount) = 0;
		virtual HRESULT __stdcall raw_GetGrid (int index, struct IGrid * * ppGrid) = 0;
		virtual HRESULT __stdcall get_MeshType (GUID * pMeshType) = 0;
		virtual HRESULT __stdcall get_MeshTypeS (BSTR * pMeshType) = 0;
	};

	struct __declspec(uuid("081f31cb-f579-4586-9c4f-5b110fe129d2")) IExportedObject3D : IDispatch {
		__declspec(property(get=GetModelObjectId)) int ModelObjectId;
		__declspec(property(get=GetMeshCount)) int MeshCount;
		__declspec(property(get=GetModelObjectType)) GUID ModelObjectType;
		__declspec(property(get=GetModelObjectTypeS)) _bstr_t ModelObjectTypeS;

		int GetModelObjectId();
		int GetMeshCount();
		IMeshPtr GetMesh (int index);
		GUID GetModelObjectType();
		_bstr_t GetModelObjectTypeS();

		virtual HRESULT __stdcall get_ModelObjectId (int * pId) = 0;
		virtual HRESULT __stdcall get_MeshCount (int * pCount) = 0;
		virtual HRESULT __stdcall raw_GetMesh (int index, struct IMesh * * ppMesh) = 0;
		virtual HRESULT __stdcall get_ModelObjectType (GUID * pType) = 0;
		virtual HRESULT __stdcall get_ModelObjectTypeS (BSTR * pType) = 0;
	};

	struct __declspec(uuid("4ac64470-f1e9-407d-8504-0d464dc6d9eb")) IExportedObject3DCollection : IDispatch {
		__declspec(property(get=GetCount)) int Count;

		IExportedObject3DPtr Get (int index);
		int GetCount();

		virtual HRESULT __stdcall raw_Get (int index, struct IExportedObject3D * * ppExportedObject3D) = 0;
		virtual HRESULT __stdcall get_Count (int * pCount) = 0;
	};

	struct __declspec(uuid("1a1c2173-0499-4af9-9aff-a88a8cdbe74e")) IGridMaterial : IDispatch {
		__declspec(property(get=GetId)) int Id;
		__declspec(property(get=GetColor)) struct Color _Color;

		int GetId();
		struct Color GetColor();
		HRESULT GetColorComponents (unsigned short * pRed, unsigned short * pGreen, unsigned short * pBlue, unsigned short * pAlpha);

		virtual HRESULT __stdcall get_Id (int * pId) = 0;
		virtual HRESULT __stdcall get_Color (struct Color * pColor) = 0;
		virtual HRESULT __stdcall raw_GetColorComponents (/*[out]*/ unsigned short * pRed, unsigned short * pGreen, unsigned short * pBlue, unsigned short * pAlpha) = 0;
	};

	struct __declspec(uuid("a91bd6bc-8202-4f1c-9ecc-49bb37a65f09")) IGridWithMaterial : IDispatch {
		__declspec(property(get=GetGrid)) IGridPtr Grid;
		__declspec(property(get=GetMaterial)) IGridMaterialPtr Material;

		IGridPtr GetGrid();
		IGridMaterialPtr GetMaterial();

		virtual HRESULT __stdcall get_Grid (struct IGrid * * pGrid) = 0;
		virtual HRESULT __stdcall get_Material (struct IGridMaterial * * pMaterial) = 0;
	};

	struct __declspec(uuid("3c921661-5fd2-4c1c-9a10-818e926d53a0")) IGridWithMaterialCollection : IDispatch {
		__declspec(property(get=GetCount)) int Count;

		IGridWithMaterialPtr Get (int index);
		int GetCount();

		virtual HRESULT __stdcall raw_Get (int index, struct IGridWithMaterial * * ppGridWithMaterial) = 0;
		virtual HRESULT __stdcall get_Count (int * pCount) = 0;
	};

	struct __declspec(uuid("02b96194-9d80-4afc-9b63-755f93c0aa52")) IDataExporter : IDispatch {
		IExportedObject3DCollectionPtr GetObjects3D();
		IGridWithMaterialCollectionPtr GetGrids();

		virtual HRESULT __stdcall raw_GetObjects3D (struct IExportedObject3DCollection * * ppExportedObject3DCollection) = 0;
		virtual HRESULT __stdcall raw_GetGrids (struct IGridWithMaterialCollection * * ppGridWithMaterialCollection) = 0;
	};

	struct __declspec(uuid("8f863f53-7d7b-47ff-b075-f048380c291e")) IMaterial : IDispatch {
		__declspec(property(get=GetId)) int Id;
		__declspec(property(get=GetName)) _bstr_t Name;
		__declspec(property(get=GetDensity)) double Density;
		__declspec(property(get=GetColor)) struct Color _Color;

		int GetId();
		_bstr_t GetName();
		double GetDensity();
		struct Color GetColor();

		virtual HRESULT __stdcall get_Id (int * pId) = 0;
		virtual HRESULT __stdcall get_Name (BSTR * pName) = 0;
		virtual HRESULT __stdcall get_Density (double * pDensity) = 0;
		virtual HRESULT __stdcall get_Color (struct Color * pColor) = 0;
	};

	struct __declspec(uuid("80ab5211-ed65-4eb7-a52b-773882dc4f55")) IMaterialLayer : IDispatch {
		__declspec(property(get=GetId)) int Id;
		__declspec(property(get=GetThickness)) double Thickness;
		__declspec(property(get=GetMaterial)) IMaterialPtr Material;

		int GetId();
		double GetThickness();
		IMaterialPtr GetMaterial();

		virtual HRESULT __stdcall get_Id (int * pId) = 0;
		virtual HRESULT __stdcall get_Thickness (double * pThickness) = 0;
		virtual HRESULT __stdcall get_Material (struct IMaterial * * ppMaterial) = 0;
	};

	struct __declspec(uuid("0a71fa66-bf5c-46d3-93d0-19ef14e0e324")) IMaterialLayerCollection : IDispatch {
		__declspec(property(get=GetCount)) int Count;

		IMaterialLayerPtr Get (int index);
		int GetCount();

		virtual HRESULT __stdcall raw_Get (int index, struct IMaterialLayer * * ppMaterialLayer) = 0;
		virtual HRESULT __stdcall get_Count (int * pCount) = 0;
	};

	struct __declspec(uuid("0fa22f3e-2ab4-43a7-b122-3b59db4fed92")) ILayeredMaterial : IDispatch {
		__declspec(property(get=GetName)) _bstr_t Name;
		__declspec(property(get=GetLayers)) IMaterialLayerCollectionPtr Layers;
		__declspec(property(get=GetBaseLayerIndex)) int BaseLayerIndex;
		__declspec(property(get=GetId)) int Id;

		LayeredMaterialIdGroupPair GetIdGroupPair();
		_bstr_t GetName();
		IMaterialLayerCollectionPtr GetLayers();
		IMaterialLayerPtr GetBaseLayer();
		int GetBaseLayerIndex();
		int GetId();

		virtual HRESULT __stdcall raw_GetIdGroupPair (LayeredMaterialIdGroupPair * pIdGroupPair) = 0;
		virtual HRESULT __stdcall get_Name (BSTR * pName) = 0;
		virtual HRESULT __stdcall get_Layers (struct IMaterialLayerCollection * * ppMaterialLayerCollection) = 0;
		virtual HRESULT __stdcall raw_GetBaseLayer (struct IMaterialLayer * * pMaterialLayer) = 0;
		virtual HRESULT __stdcall get_BaseLayerIndex (int * pIndex) = 0;
		virtual HRESULT __stdcall get_Id (int * pId) = 0;
	};

	struct __declspec(uuid("8e56b3d1-52e6-4f48-89cd-a470ae11b6cc")) IMaterialManager : IDispatch {
		IMaterialPtr GetMaterial (int MaterialId);

		virtual HRESULT __stdcall raw_GetMaterial (int MaterialId, struct IMaterial * * ppMaterial) = 0;
	};

	struct __declspec(uuid("5ca53bea-81dd-460c-9b37-bb352dd6a786")) ILayeredMaterialManager : IDispatch {
		ILayeredMaterialPtr GetLayeredMaterialByIdGroupPair (LayeredMaterialIdGroupPair LayeredMaterialIdGroupPair);
		ILayeredMaterialPtr GetLayeredMaterial (int Id);

		virtual HRESULT __stdcall raw_GetLayeredMaterialByIdGroupPair (LayeredMaterialIdGroupPair LayeredMaterialIdGroupPair, struct ILayeredMaterial * * ppLayeredMaterial) = 0;
		virtual HRESULT __stdcall raw_GetLayeredMaterial (int Id, struct ILayeredMaterial * * pLayeredMaterial) = 0;
	};

	struct __declspec(uuid("142b12f1-a634-4438-af46-2f4bac125641")) ICamera3D : IDispatch {
		__declspec(property(get=GetPosition)) struct FloatPoint3D Position;
		__declspec(property(get=GetFocusPoint)) struct FloatPoint3D FocusPoint;
		__declspec(property(get=GetFovHorizontal)) double FovHorizontal;
		__declspec(property(get=GetFovVertical)) double FovVertical;
		__declspec(property(get=GetUpVector)) struct FloatVector3D UpVector;

		struct FloatPoint3D GetPosition();
		struct FloatPoint3D GetFocusPoint();
		double GetFovHorizontal();
		double GetFovVertical();
		HRESULT LookAt (struct FloatPoint3D focusPoint_, struct FloatPoint3D position_, struct FloatVector3D upVector_);
		struct FloatVector3D GetUpVector();

		virtual HRESULT __stdcall get_Position (struct FloatPoint3D * pPoint) = 0;
		virtual HRESULT __stdcall get_FocusPoint (struct FloatPoint3D * pPoint) = 0;
		virtual HRESULT __stdcall get_FovHorizontal (double * pValue) = 0;
		virtual HRESULT __stdcall get_FovVertical (double * pValue) = 0;
		virtual HRESULT __stdcall raw_LookAt (struct FloatPoint3D focusPoint_, struct FloatPoint3D position_, struct FloatVector3D upVector_) = 0;
		virtual HRESULT __stdcall get_UpVector (struct FloatVector3D * pVector) = 0;
	};

	struct __declspec(uuid("0937437d-07dc-47ac-baae-8dc0cf3f19d7")) IModelObjectCollection : IDispatch {
		__declspec(property(get=GetCount)) int Count;

		int GetCount();
		IModelObjectPtr GetByIndex (int index);
		IModelObjectPtr GetById (int Id);
		SAFEARRAY * GetIds();
		IModelObjectPtr GetByUniqueId (GUID Id);

		virtual HRESULT __stdcall get_Count (int * pCount) = 0;
		virtual HRESULT __stdcall raw_GetByIndex (int index, struct IModelObject * * ppModelObject) = 0;
		virtual HRESULT __stdcall raw_GetById (int Id, struct IModelObject * * ppModelObject) = 0;
		virtual HRESULT __stdcall raw_GetIds (SAFEARRAY * * pIds) = 0;
		virtual HRESULT __stdcall raw_GetByUniqueId (GUID Id, struct IModelObject * * ppEntity) = 0;
	};

	struct __declspec(uuid("45526125-e2cb-4097-be1a-67d31a3a9646")) INewEntityArgs : IDispatch {
		__declspec(property(get=GetTypeId,put=PutTypeId)) GUID TypeId;
		__declspec(property(get=GetCategoryId,put=PutCategoryId)) int CategoryId;
		__declspec(property(get=GetHostObjectId,put=PutHostObjectId)) int HostObjectId;
		__declspec(property(get=GetPlacement3D,put=PutPlacement3D)) struct Placement3D _Placement3D;
		__declspec(property(get=GetTypeIdS,put=PutTypeIdS)) _bstr_t TypeIdS;
		__declspec(property(get=GetPlacement2D,put=PutPlacement2D)) struct Placement2D _Placement2D;
		__declspec(property(get=GetStyleId,put=PutStyleId)) int StyleId;
		__declspec(property(get=GetFilePath,put=PutFilePath)) _bstr_t FilePath;

		GUID GetTypeId();
		void PutTypeId (GUID pTypeId);
		int GetCategoryId();
		void PutCategoryId (int pCategoryId);
		int GetHostObjectId();
		void PutHostObjectId (int pHostObjectId);
		struct Placement3D GetPlacement3D();
		void PutPlacement3D (struct Placement3D pPlacement3D);
		_bstr_t GetTypeIdS();
		void PutTypeIdS (_bstr_t pTypeId);
		struct Placement2D GetPlacement2D();
		void PutPlacement2D (struct Placement2D pPlacement2D);
		int GetStyleId();
		void PutStyleId (int StyleId);
		_bstr_t GetFilePath();
		void PutFilePath (_bstr_t pPath);

		virtual HRESULT __stdcall get_TypeId (GUID * pTypeId) = 0;
		virtual HRESULT __stdcall put_TypeId (GUID pTypeId) = 0;
		virtual HRESULT __stdcall get_CategoryId (int * pCategoryId) = 0;
		virtual HRESULT __stdcall put_CategoryId (int pCategoryId) = 0;
		virtual HRESULT __stdcall get_HostObjectId (int * pHostObjectId) = 0;
		virtual HRESULT __stdcall put_HostObjectId (int pHostObjectId) = 0;
		virtual HRESULT __stdcall get_Placement3D (struct Placement3D * pPlacement3D) = 0;
		virtual HRESULT __stdcall put_Placement3D (struct Placement3D pPlacement3D) = 0;
		virtual HRESULT __stdcall get_TypeIdS (BSTR * pTypeId) = 0;
		virtual HRESULT __stdcall put_TypeIdS (BSTR pTypeId) = 0;
		virtual HRESULT __stdcall get_Placement2D (struct Placement2D * pPlacement2D) = 0;
		virtual HRESULT __stdcall put_Placement2D (struct Placement2D pPlacement2D) = 0;
		virtual HRESULT __stdcall get_StyleId (int * StyleId) = 0;
		virtual HRESULT __stdcall put_StyleId (int StyleId) = 0;
		virtual HRESULT __stdcall get_FilePath (BSTR * pPath) = 0;
		virtual HRESULT __stdcall put_FilePath (BSTR pPath) = 0;
	};

	struct __declspec(uuid("6321612c-d9b0-409e-b1ac-210d1b3ed3fc")) IModel : IDispatch {
		__declspec(property(get=GetId)) GUID Id;

		IModelObjectCollectionPtr GetObjects();
		IOperationPtr CreateOperation();
		int GetIdFromUniqueId (GUID uniqueId_);
		int GetIdFromUniqueIdS (_bstr_t uniqueId_);
		GUID GetUniqueIdFromId (int id_);
		_bstr_t GetUniqueIdFromIdS (int id_);
		GUID GetId();
		INewEntityArgsPtr CreateNewEntityArgs();
		IModelObjectPtr CreateObject (struct INewEntityArgs * pArgs);
		HRESULT DeleteObjectById (int id_);
		HRESULT DeleteObjectByUniqueId (GUID uniqueId_);
		HRESULT DeleteObjectByUniqueIdS (_bstr_t uniqueId_);
		struct Cube GetBoundingBox();

		virtual HRESULT __stdcall raw_GetObjects (struct IModelObjectCollection * * ppModelObjectCollection) = 0;
		virtual HRESULT __stdcall raw_CreateOperation (struct IOperation * * ppOperation) = 0;
		virtual HRESULT __stdcall raw_GetIdFromUniqueId (GUID uniqueId_, int * id_) = 0;
		virtual HRESULT __stdcall raw_GetIdFromUniqueIdS (BSTR uniqueId_, int * id_) = 0;
		virtual HRESULT __stdcall raw_GetUniqueIdFromId (int id_, GUID * uniqueId_) = 0;
		virtual HRESULT __stdcall raw_GetUniqueIdFromIdS (int id_, BSTR * uniqueId_) = 0;
		virtual HRESULT __stdcall get_Id (GUID * pId) = 0;
		virtual HRESULT __stdcall raw_CreateNewEntityArgs (struct INewEntityArgs * * ppArgs) = 0;
		virtual HRESULT __stdcall raw_CreateObject (struct INewEntityArgs * pArgs, struct IModelObject * * ppModelObject) = 0;
		virtual HRESULT __stdcall raw_DeleteObjectById (int id_) = 0;
		virtual HRESULT __stdcall raw_DeleteObjectByUniqueId (GUID uniqueId_) = 0;
		virtual HRESULT __stdcall raw_DeleteObjectByUniqueIdS (BSTR uniqueId_) = 0;
		virtual HRESULT __stdcall raw_GetBoundingBox (struct Cube * pCube) = 0;
	};

	struct __declspec(uuid("dcbd4ccb-e29b-4d86-87ea-4f8c4a667f24")) IRebarStyle : IDispatch {
		__declspec(property(get=GetId)) int Id;
		__declspec(property(get=GetName)) _bstr_t Name;
		__declspec(property(get=GetGradeName)) _bstr_t GradeName;
		__declspec(property(get=GetDiameter)) double Diameter;
		__declspec(property(get=GetMaterialId)) int MaterialId;
		__declspec(property(get=GetGradeTensileStrength)) double GradeTensileStrength;

		int GetId();
		_bstr_t GetName();
		_bstr_t GetGradeName();
		double GetDiameter();
		int GetMaterialId();
		double GetGradeTensileStrength();

		virtual HRESULT __stdcall get_Id (int * pId) = 0;
		virtual HRESULT __stdcall get_Name (BSTR * pName) = 0;
		virtual HRESULT __stdcall get_GradeName (BSTR * pGradeName) = 0;
		virtual HRESULT __stdcall get_Diameter (double * pDiameter) = 0;
		virtual HRESULT __stdcall get_MaterialId (int * pMaterialId) = 0;
		virtual HRESULT __stdcall get_GradeTensileStrength (double * pGradeTensileStrength) = 0;
	};

	enum ReinforcementUnitType : int {
		ReinforcementUnitType_Undefined = 0,
		ReinforcementUnitType_Mesh = 1,
		ReinforcementUnitType_Cage = 2
	};

	struct __declspec(uuid("256f3705-30f3-4043-bd2d-d3bda77f70a7")) IReinforcementUnitStyle : IDispatch {
		__declspec(property(get=GetId)) int Id;
		__declspec(property(get=GetName)) _bstr_t Name;
		__declspec(property(get=GetUnitType)) enum ReinforcementUnitType UnitType;

		int GetId();
		_bstr_t GetName();
		IRebarUsageCollectionPtr GetRebarUsages();
		enum ReinforcementUnitType GetUnitType();

		virtual HRESULT __stdcall get_Id (int * pId) = 0;
		virtual HRESULT __stdcall get_Name (BSTR * pName) = 0;
		virtual HRESULT __stdcall raw_GetRebarUsages (struct IRebarUsageCollection * * ppRebarUsageCollection) = 0;
		virtual HRESULT __stdcall get_UnitType (enum ReinforcementUnitType * pReinforcementUnitType) = 0;
	};

	struct __declspec(uuid("e8a39aa8-eb26-4c6f-8777-d1fcf59c05c3")) IReinforcementUnitStyleManager : IDispatch {
		IRebarStylePtr GetRebarStyle (int rebarStyleId);
		SAFEARRAY * GetRebarStyleIds();
		VARIANT_BOOL RebarStyleExists (int rebarStyleId);
		IReinforcementUnitStylePtr GetUnitStyle (int reinforcementUnitStyleId);
		VARIANT_BOOL UnitStyleExists (int reinforcementUnitStyleId);
		SAFEARRAY * GetReinforcementUnitStyleIds();

		virtual HRESULT __stdcall raw_GetRebarStyle (int rebarStyleId, struct IRebarStyle * * ppRebarStyle) = 0;
		virtual HRESULT __stdcall raw_GetRebarStyleIds (SAFEARRAY * * pRebarStyleIds) = 0;
		virtual HRESULT __stdcall raw_RebarStyleExists (int rebarStyleId, VARIANT_BOOL * pExists) = 0;
		virtual HRESULT __stdcall raw_GetUnitStyle (int reinforcementUnitStyleId, struct IReinforcementUnitStyle * * ppReinforcementUnitStyle) = 0;
		virtual HRESULT __stdcall raw_UnitStyleExists (int reinforcementUnitStyleId, VARIANT_BOOL * pExists) = 0;
		virtual HRESULT __stdcall raw_GetReinforcementUnitStyleIds (SAFEARRAY * * pUnitStyleIds) = 0;
	};

	enum ProjectType : int {
		ProjectType_Project = 0,
		ProjectType_Template = 1
	};

	enum AutocadVersion : int {
		AutocadVersion_v2000 = 0,
		AutocadVersion_v2004 = 1,
		AutocadVersion_v2007 = 2,
		AutocadVersion_v2010 = 3,
		AutocadVersion_v2013 = 4,
		AutocadVersion_v2018 = 5
	};

	struct __declspec(uuid("7b27f1d3-150b-46c2-a7e5-5225f09a863e")) ITitleBlockInstance : IDispatch {
		__declspec(property(get=GetName)) _bstr_t Name;
		__declspec(property(get=GetRowCount)) int RowCount;
		__declspec(property(get=GetColumnCount)) int ColumnCount;

		_bstr_t GetName();
		int GetRowCount();
		int GetColumnCount();
		_bstr_t GetCellValue (int columnIndex, int rowIndex);

		virtual HRESULT __stdcall get_Name (BSTR * pName) = 0;
		virtual HRESULT __stdcall get_RowCount (int * pRowCount) = 0;
		virtual HRESULT __stdcall get_ColumnCount (int * pColumnCount) = 0;
		virtual HRESULT __stdcall raw_GetCellValue (int columnIndex, int rowIndex, BSTR * pValue) = 0;
	};

	struct __declspec(uuid("1535e672-26e0-4315-8c65-a7dd9d447921")) IDrawing : IDispatch {
		__declspec(property(get=GetName)) _bstr_t Name;
		__declspec(property(get=GetId)) GUID Id;
		__declspec(property(get=GetIdS)) _bstr_t IdS;
		__declspec(property(get=GetTitleBlockInstanceCount)) int TitleBlockInstanceCount;

		_bstr_t GetName();
		int ExportToDxf (_bstr_t FilePath, enum AutocadVersion AutocadVersion, VARIANT_BOOL overwrite);
		int ExportToDwg (_bstr_t FilePath, enum AutocadVersion AutocadVersion, VARIANT_BOOL overwrite);
		GUID GetId();
		_bstr_t GetIdS();
		int ExportToPdf (_bstr_t FilePath, VARIANT_BOOL overwrite);
		int ExportToOpenXps (_bstr_t FilePath, VARIANT_BOOL overwrite);
		int GetTitleBlockInstanceCount();
		ITitleBlockInstancePtr GetTitleBlockInstance (int index);

		virtual HRESULT __stdcall get_Name (BSTR * pName) = 0;
		virtual HRESULT __stdcall raw_ExportToDxf (BSTR FilePath, enum AutocadVersion AutocadVersion, VARIANT_BOOL overwrite, int * pResult) = 0;
		virtual HRESULT __stdcall raw_ExportToDwg (BSTR FilePath, enum AutocadVersion AutocadVersion, VARIANT_BOOL overwrite, int * pResult) = 0;
		virtual HRESULT __stdcall get_Id (GUID * pId) = 0;
		virtual HRESULT __stdcall get_IdS (BSTR * pId) = 0;
		virtual HRESULT __stdcall raw_ExportToPdf (BSTR FilePath, VARIANT_BOOL overwrite, int * pResult) = 0;
		virtual HRESULT __stdcall raw_ExportToOpenXps (BSTR FilePath, VARIANT_BOOL overwrite, int * pResult) = 0;
		virtual HRESULT __stdcall get_TitleBlockInstanceCount (int * pCount) = 0;
		virtual HRESULT __stdcall raw_GetTitleBlockInstance (int index, struct ITitleBlockInstance * * ppTitleBlockInstance) = 0;
	};

	struct __declspec(uuid("2edda574-0bd3-4f87-960c-edffb091a0e4")) IDrawingCollection : IDispatch {
		__declspec(property(get=GetCount)) int Count;

		int GetCount();
		IDrawingPtr Get (int index);

		virtual HRESULT __stdcall get_Count (int * pCount) = 0;
		virtual HRESULT __stdcall raw_Get (int index, struct IDrawing * * ppDrawing) = 0;
	};

	struct __declspec(uuid("2c0e54a1-59af-4aef-8229-5e3e286fae91")) IProfileDescription : IDispatch {
		__declspec(property(get=GetName)) _bstr_t Name;
		__declspec(property(get=GetId)) int Id;

		_bstr_t GetName();
		int GetId();

		virtual HRESULT __stdcall get_Name (BSTR * pName) = 0;
		virtual HRESULT __stdcall get_Id (int * pId) = 0;
	};

	struct __declspec(uuid("8d95843d-4602-4b68-810a-d15f545971b8")) IProfileDescriptionManager : IDispatch {
		SAFEARRAY * GetIds();
		VARIANT_BOOL Contains (int Id);
		IProfileDescriptionPtr GetProfileDescription (int Id);

		virtual HRESULT __stdcall raw_GetIds (SAFEARRAY * * pIds) = 0;
		virtual HRESULT __stdcall raw_Contains (int Id, VARIANT_BOOL * pContains) = 0;
		virtual HRESULT __stdcall raw_GetProfileDescription (int Id, struct IProfileDescription * * ppProfileDescription) = 0;
	};

	struct __declspec(uuid("b136e285-d326-4da6-98f2-a8fe7ddbae25")) IRegion2DCollection : IDispatch {
		__declspec(property(get=GetCount)) int Count;

		int GetCount();
		IRegion2DPtr Get (int index);

		virtual HRESULT __stdcall get_Count (int * pCount) = 0;
		virtual HRESULT __stdcall raw_Get (int index, struct IRegion2D * * ppRegion2D) = 0;
	};

	struct __declspec(uuid("1629b1f7-77a7-40ac-8f6a-ba7356f0fb4b")) IProfile : IDispatch {
		__declspec(property(get=GetDescriptionId)) int DescriptionId;
		__declspec(property(get=GetRegions)) IRegion2DCollectionPtr Regions;
		__declspec(property(get=GetParameters)) IParameterContainerPtr Parameters;

		int GetDescriptionId();
		IRegion2DCollectionPtr GetRegions();
		struct Point2D GetCenterOfMass();
		IParameterContainerPtr GetParameters();

		virtual HRESULT __stdcall get_DescriptionId (int * pId) = 0;
		virtual HRESULT __stdcall get_Regions (struct IRegion2DCollection * * ppRegion2DCollection) = 0;
		virtual HRESULT __stdcall raw_GetCenterOfMass (struct Point2D * pPoint) = 0;
		virtual HRESULT __stdcall get_Parameters (struct IParameterContainer * * ppParameterContainer) = 0;
	};

	struct __declspec(uuid("eac28f3a-f1a0-4d3d-a0e4-062ed0ea99b9")) IBeamStyle : IDispatch {
		__declspec(property(get=GetId)) int Id;
		__declspec(property(get=GetName)) _bstr_t Name;
		__declspec(property(get=GetProfile)) IProfilePtr Profile;

		int GetId();
		_bstr_t GetName();
		IProfilePtr GetProfile();

		virtual HRESULT __stdcall get_Id (int * pId) = 0;
		virtual HRESULT __stdcall get_Name (BSTR * pName) = 0;
		virtual HRESULT __stdcall get_Profile (struct IProfile * * ppProfile) = 0;
	};

	struct __declspec(uuid("76fa5f0c-cfb5-4ec3-bece-4ebac9732bc5")) IBeamStyleManager : IDispatch {
		SAFEARRAY * GetIds();
		VARIANT_BOOL Contains (int Id);
		IBeamStylePtr GetBeamStyle (int Id);

		virtual HRESULT __stdcall raw_GetIds (SAFEARRAY * * pIds) = 0;
		virtual HRESULT __stdcall raw_Contains (int Id, VARIANT_BOOL * pContains) = 0;
		virtual HRESULT __stdcall raw_GetBeamStyle (int Id, struct IBeamStyle * * ppBeamStyle) = 0;
	};

	struct __declspec(uuid("45b5b05e-fc6f-4c9d-ad9b-9be6f77a20dc")) IColumnStyle : IDispatch {
		__declspec(property(get=GetId)) int Id;
		__declspec(property(get=GetName)) _bstr_t Name;
		__declspec(property(get=GetProfile)) IProfilePtr Profile;

		int GetId();
		_bstr_t GetName();
		IProfilePtr GetProfile();

		virtual HRESULT __stdcall get_Id (int * pId) = 0;
		virtual HRESULT __stdcall get_Name (BSTR * pName) = 0;
		virtual HRESULT __stdcall get_Profile (struct IProfile * * ppProfile) = 0;
	};

	struct __declspec(uuid("a9aca105-83bd-49df-9661-2eee7be9b8c1")) IColumnStyleManager : IDispatch {
		SAFEARRAY * GetIds();
		VARIANT_BOOL Contains (int Id);
		IColumnStylePtr GetColumnStyle (int Id);

		virtual HRESULT __stdcall raw_GetIds (SAFEARRAY * * pIds) = 0;
		virtual HRESULT __stdcall raw_Contains (int Id, VARIANT_BOOL * pContains) = 0;
		virtual HRESULT __stdcall raw_GetColumnStyle (int Id, struct IColumnStyle * * ppColumnStyle) = 0;
	};

	enum SystemCategory : int {
		SystemCategory_Unknown = 0,
		SystemCategory_DomesticColdWater = 2,
		SystemCategory_DomesticHotWater = 3,
		SystemCategory_DomesticSewerage = 4,
		SystemCategory_DomesticGasSupply = 5,
		SystemCategory_WaterFireExtinguishing = 6,
		SystemCategory_WaterHeating = 7,
		SystemCategory_GasFireExtinguishing = 8,
		SystemCategory_StormDrain = 9,
		SystemCategory_IndustrialColdWater = 10,
		SystemCategory_IndustrialHotWater = 11,
		SystemCategory_IndustrialSewerage = 12,
		SystemCategory_OtherPipeSystem = 13,
		SystemCategory_Ventilation = 14,
		SystemCategory_Exhaust = 15,
		SystemCategory_Pressurization = 16,
		SystemCategory_SmokeExhaust = 17,
		SystemCategory_Vacuum = 18,
		SystemCategory_OtherDuctSystem = 19,
		SystemCategory_LightingCircuit = 20,
		SystemCategory_PowerCircuit = 21,
		SystemCategory_OtherElectricalSystem = 22
	};

	struct __declspec(uuid("7f7b8800-ab8c-4b93-9c05-1d658a749f80")) ISystemStyle : IDispatch {
		__declspec(property(get=GetSystemCategory)) enum SystemCategory _SystemCategory;
		__declspec(property(get=GetDesignation)) _bstr_t Designation;
		__declspec(property(get=GetId)) int Id;
		__declspec(property(get=GetName)) _bstr_t Name;
		__declspec(property(get=GetColor)) struct Color _Color;

		enum SystemCategory GetSystemCategory();
		_bstr_t GetDesignation();
		int GetId();
		_bstr_t GetName();
		struct Color GetColor();

		virtual HRESULT __stdcall get_SystemCategory (enum SystemCategory * pSystemCategory) = 0;
		virtual HRESULT __stdcall get_Designation (BSTR * pDesignation) = 0;
		virtual HRESULT __stdcall get_Id (int * pId) = 0;
		virtual HRESULT __stdcall get_Name (BSTR * pName) = 0;
		virtual HRESULT __stdcall get_Color (struct Color * pColor) = 0;
	};

	struct __declspec(uuid("c2785f49-3d37-441c-97df-df4d2376cc2d")) ISystemStyleManager : IDispatch {
		SAFEARRAY * GetIds();
		VARIANT_BOOL Contains (int Id);
		ISystemStylePtr GetSystemStyle (int Id);

		virtual HRESULT __stdcall raw_GetIds (SAFEARRAY * * pIds) = 0;
		virtual HRESULT __stdcall raw_Contains (int Id, VARIANT_BOOL * pContains) = 0;
		virtual HRESULT __stdcall raw_GetSystemStyle (int Id, struct ISystemStyle * * ppSystemStyle) = 0;
	};

	enum PlumbingFixtureCategory : int {
		PlumbingFixtureCategory_Other = 0,
		PlumbingFixtureCategory_ToiletPan = 1,
		PlumbingFixtureCategory_WashBasin = 2,
		PlumbingFixtureCategory_Bath = 3,
		PlumbingFixtureCategory_Sink = 4,
		PlumbingFixtureCategory_Shower = 5,
		PlumbingFixtureCategory_FloorDrain = 6,
		PlumbingFixtureCategory_RoofDrain = 7,
		PlumbingFixtureCategory_Bidet = 8,
		PlumbingFixtureCategory_Urinal = 9
	};

	struct __declspec(uuid("adce0582-6871-439e-b119-a2985ed49a02")) IPlumbingFixtureStyle : IDispatch {
		__declspec(property(get=GetName)) _bstr_t Name;
		__declspec(property(get=GetCategory)) enum PlumbingFixtureCategory Category;

		_bstr_t GetName();
		enum PlumbingFixtureCategory GetCategory();

		virtual HRESULT __stdcall get_Name (BSTR * pName) = 0;
		virtual HRESULT __stdcall get_Category (enum PlumbingFixtureCategory * pCategory) = 0;
	};

	struct __declspec(uuid("90f39dbf-f0f1-41f7-815a-882f55bf7fd5")) IPlumbingFixtureStyleManager : IDispatch {
		SAFEARRAY * GetIds();
		VARIANT_BOOL Contains (int Id);
		IPlumbingFixtureStylePtr GetPlumbingFixtureStyle (int Id);

		virtual HRESULT __stdcall raw_GetIds (SAFEARRAY * * pIds) = 0;
		virtual HRESULT __stdcall raw_Contains (int Id, VARIANT_BOOL * pContains) = 0;
		virtual HRESULT __stdcall raw_GetPlumbingFixtureStyle (int Id, struct IPlumbingFixtureStyle * * ppPlumbingFixtureStyle) = 0;
	};

	enum EquipmentCategory : int {
		EquipmentCategory_Other = 0,
		EquipmentCategory_Faucet = 1,
		EquipmentCategory_Manifold = 2,
		EquipmentCategory_Pump = 3,
		EquipmentCategory_WashingMachine = 4,
		EquipmentCategory_Radiator = 5,
		EquipmentCategory_TowelRadiator = 6,
		EquipmentCategory_ExpansionVessel = 7,
		EquipmentCategory_PlateHeatExchanger = 8,
		EquipmentCategory_Boiler = 9
	};

	struct __declspec(uuid("66f65eb4-09b1-402b-b9e3-d11812926240")) IEquipmentStyle : IDispatch {
		__declspec(property(get=GetName)) _bstr_t Name;
		__declspec(property(get=GetCategory)) enum EquipmentCategory Category;

		_bstr_t GetName();
		enum EquipmentCategory GetCategory();

		virtual HRESULT __stdcall get_Name (BSTR * pName) = 0;
		virtual HRESULT __stdcall get_Category (enum EquipmentCategory * pCategory) = 0;
	};

	struct __declspec(uuid("0c823269-545e-40d1-abfe-03cfe082ef31")) IEquipmentStyleManager : IDispatch {
		SAFEARRAY * GetIds();
		VARIANT_BOOL Contains (int Id);
		IEquipmentStylePtr GetEquipmentStyle (int Id);

		virtual HRESULT __stdcall raw_GetIds (SAFEARRAY * * pIds) = 0;
		virtual HRESULT __stdcall raw_Contains (int Id, VARIANT_BOOL * pContains) = 0;
		virtual HRESULT __stdcall raw_GetEquipmentStyle (int Id, struct IEquipmentStyle * * ppEquipmentStyle) = 0;
	};

	enum IfcVersion : int {
		IfcVersion_4 = 1
	};

	struct __declspec(uuid("b62f2b91-302b-4844-8ed3-f781de76e678")) IIfcExportSettings : IDispatch {
		__declspec(property(get=GetParameterMappingFilePath,put=PutParameterMappingFilePath)) _bstr_t ParameterMappingFilePath;
		__declspec(property(get=GetVersion,put=PutVersion)) enum IfcVersion Version;
		__declspec(property(get=GetTypeMappingFilePath,put=PutTypeMappingFilePath)) _bstr_t TypeMappingFilePath;
		__declspec(property(get=GetLayerMappingFilePath,put=PutLayerMappingFilePath)) _bstr_t LayerMappingFilePath;
		__declspec(property(get=GetApproximateCurves,put=PutApproximateCurves)) VARIANT_BOOL ApproximateCurves;
		__declspec(property(get=GetVoidsAsReference,put=PutVoidsAsReference)) VARIANT_BOOL VoidsAsReference;
		__declspec(property(get=GetSplitObjectsWithLayeredMaterialIntoParts,put=PutSplitObjectsWithLayeredMaterialIntoParts)) VARIANT_BOOL SplitObjectsWithLayeredMaterialIntoParts;
		__declspec(property(get=GetGeometricRepresentationWithoutCutting,put=PutGeometricRepresentationWithoutCutting)) VARIANT_BOOL GeometricRepresentationWithoutCutting;

		void PutParameterMappingFilePath (_bstr_t pFilePath);
		_bstr_t GetParameterMappingFilePath();
		void PutVersion (enum IfcVersion pIfcVersion);
		enum IfcVersion GetVersion();
		void PutTypeMappingFilePath (_bstr_t pFilePath);
		_bstr_t GetTypeMappingFilePath();
		void PutLayerMappingFilePath (_bstr_t pFilePath);
		_bstr_t GetLayerMappingFilePath();
		void PutApproximateCurves (VARIANT_BOOL ApproximateCurves);
		VARIANT_BOOL GetApproximateCurves();
		void PutVoidsAsReference (VARIANT_BOOL VoidsAsReference);
		VARIANT_BOOL GetVoidsAsReference();
		void PutSplitObjectsWithLayeredMaterialIntoParts (VARIANT_BOOL SplitObjectsWithLayeredMaterialIntoParts);
		VARIANT_BOOL GetSplitObjectsWithLayeredMaterialIntoParts();
		void PutGeometricRepresentationWithoutCutting (VARIANT_BOOL GeometricRepresentationWithoutCutting);
		VARIANT_BOOL GetGeometricRepresentationWithoutCutting();

		virtual HRESULT __stdcall put_ParameterMappingFilePath (BSTR pFilePath) = 0;
		virtual HRESULT __stdcall get_ParameterMappingFilePath (BSTR * pFilePath) = 0;
		virtual HRESULT __stdcall put_Version (enum IfcVersion pIfcVersion) = 0;
		virtual HRESULT __stdcall get_Version (enum IfcVersion * pIfcVersion) = 0;
		virtual HRESULT __stdcall put_TypeMappingFilePath (BSTR pFilePath) = 0;
		virtual HRESULT __stdcall get_TypeMappingFilePath (BSTR * pFilePath) = 0;
		virtual HRESULT __stdcall put_LayerMappingFilePath (BSTR pFilePath) = 0;
		virtual HRESULT __stdcall get_LayerMappingFilePath (BSTR * pFilePath) = 0;
		virtual HRESULT __stdcall put_ApproximateCurves (VARIANT_BOOL ApproximateCurves) = 0;
		virtual HRESULT __stdcall get_ApproximateCurves (VARIANT_BOOL * ApproximateCurves) = 0;
		virtual HRESULT __stdcall put_VoidsAsReference (VARIANT_BOOL VoidsAsReference) = 0;
		virtual HRESULT __stdcall get_VoidsAsReference (VARIANT_BOOL * VoidsAsReference) = 0;
		virtual HRESULT __stdcall put_SplitObjectsWithLayeredMaterialIntoParts (VARIANT_BOOL SplitObjectsWithLayeredMaterialIntoParts) = 0;
		virtual HRESULT __stdcall get_SplitObjectsWithLayeredMaterialIntoParts (VARIANT_BOOL * SplitObjectsWithLayeredMaterialIntoParts) = 0;
		virtual HRESULT __stdcall put_GeometricRepresentationWithoutCutting (VARIANT_BOOL GeometricRepresentationWithoutCutting) = 0;
		virtual HRESULT __stdcall get_GeometricRepresentationWithoutCutting (VARIANT_BOOL * GeometricRepresentationWithoutCutting) = 0;
	};

	struct __declspec(uuid("0e1f3d79-34b1-47d4-83b5-2de09bf8b719")) IProjectInfo : IDispatch {
		__declspec(property(get=GetCode,put=PutCode)) _bstr_t Code;
		__declspec(property(get=GetName,put=PutName)) _bstr_t Name;
		__declspec(property(get=GetStage,put=PutStage)) _bstr_t Stage;
		__declspec(property(get=GetDescription,put=PutDescription)) _bstr_t Description;
		__declspec(property(get=GetUniqueId)) GUID UniqueId;
		__declspec(property(get=GetUniqueIdS)) _bstr_t UniqueIdS;

		_bstr_t GetCode();
		void PutCode (_bstr_t pCode);
		_bstr_t GetName();
		void PutName (_bstr_t pName);
		_bstr_t GetStage();
		void PutStage (_bstr_t pStage);
		_bstr_t GetDescription();
		void PutDescription (_bstr_t pDescription);
		IPropertyContainerPtr GetProperties();
		GUID GetUniqueId();
		_bstr_t GetUniqueIdS();

		virtual HRESULT __stdcall get_Code (BSTR * pCode) = 0;
		virtual HRESULT __stdcall put_Code (BSTR pCode) = 0;
		virtual HRESULT __stdcall get_Name (BSTR * pName) = 0;
		virtual HRESULT __stdcall put_Name (BSTR pName) = 0;
		virtual HRESULT __stdcall get_Stage (BSTR * pStage) = 0;
		virtual HRESULT __stdcall put_Stage (BSTR pStage) = 0;
		virtual HRESULT __stdcall get_Description (BSTR * pDescription) = 0;
		virtual HRESULT __stdcall put_Description (BSTR pDescription) = 0;
		virtual HRESULT __stdcall raw_GetProperties (struct IPropertyContainer * * ppPropertyContainer) = 0;
		virtual HRESULT __stdcall get_UniqueId (GUID * pUniqueId) = 0;
		virtual HRESULT __stdcall get_UniqueIdS (BSTR * pUniqueId) = 0;
	};

	struct __declspec(uuid("022b1a15-13ad-4cc0-bda9-5c514b1a8cbd")) IPostalAddress : IDispatch {
		__declspec(property(get=GetAddressee,put=PutAddressee)) _bstr_t Addressee;
		__declspec(property(get=GetAddressLines,put=PutAddressLines)) SAFEARRAY * AddressLines;
		__declspec(property(get=GetPostalBox,put=PutPostalBox)) _bstr_t PostalBox;
		__declspec(property(get=GetTown,put=PutTown)) _bstr_t Town;
		__declspec(property(get=GetRegion,put=PutRegion)) _bstr_t Region;
		__declspec(property(get=GetPostcode,put=PutPostcode)) _bstr_t Postcode;
		__declspec(property(get=GetCountry,put=PutCountry)) _bstr_t Country;

		_bstr_t GetAddressee();
		void PutAddressee (_bstr_t pAddressee);
		SAFEARRAY * GetAddressLines();
		void PutAddressLines (SAFEARRAY * pAddressLines);
		_bstr_t GetPostalBox();
		void PutPostalBox (_bstr_t pPostalBox);
		_bstr_t GetTown();
		void PutTown (_bstr_t pTown);
		_bstr_t GetRegion();
		void PutRegion (_bstr_t pRegion);
		_bstr_t GetPostcode();
		void PutPostcode (_bstr_t pPostalCode);
		_bstr_t GetCountry();
		void PutCountry (_bstr_t pCountry);

		virtual HRESULT __stdcall get_Addressee (BSTR * pAddressee) = 0;
		virtual HRESULT __stdcall put_Addressee (BSTR pAddressee) = 0;
		virtual HRESULT __stdcall get_AddressLines (SAFEARRAY * * pAddressLines) = 0;
		virtual HRESULT __stdcall put_AddressLines (SAFEARRAY * pAddressLines) = 0;
		virtual HRESULT __stdcall get_PostalBox (BSTR * pPostalBox) = 0;
		virtual HRESULT __stdcall put_PostalBox (BSTR pPostalBox) = 0;
		virtual HRESULT __stdcall get_Town (BSTR * pTown) = 0;
		virtual HRESULT __stdcall put_Town (BSTR pTown) = 0;
		virtual HRESULT __stdcall get_Region (BSTR * pRegion) = 0;
		virtual HRESULT __stdcall put_Region (BSTR pRegion) = 0;
		virtual HRESULT __stdcall get_Postcode (BSTR * pPostalCode) = 0;
		virtual HRESULT __stdcall put_Postcode (BSTR pPostalCode) = 0;
		virtual HRESULT __stdcall get_Country (BSTR * pCountry) = 0;
		virtual HRESULT __stdcall put_Country (BSTR pCountry) = 0;
	};

	struct __declspec(uuid("872aa77a-aecb-47ca-b4e4-1eb6b791c7e2")) IBuildingInfo : IDispatch {
		__declspec(property(get=GetNumber,put=PutNumber)) _bstr_t Number;
		__declspec(property(get=GetName,put=PutName)) _bstr_t Name;
		__declspec(property(get=GetDescription,put=PutDescription)) _bstr_t Description;
		__declspec(property(get=GetUniqueId)) GUID UniqueId;
		__declspec(property(get=GetUniqueIdS)) _bstr_t UniqueIdS;
		__declspec(property(get=GetId)) int Id;

		_bstr_t GetNumber();
		void PutNumber (_bstr_t pNumber);
		_bstr_t GetName();
		void PutName (_bstr_t pName);
		_bstr_t GetDescription();
		void PutDescription (_bstr_t pDescription);
		IPostalAddressPtr GetAddress();
		IPropertyContainerPtr GetProperties();
		GUID GetUniqueId();
		_bstr_t GetUniqueIdS();
		int GetId();

		virtual HRESULT __stdcall get_Number (BSTR * pNumber) = 0;
		virtual HRESULT __stdcall put_Number (BSTR pNumber) = 0;
		virtual HRESULT __stdcall get_Name (BSTR * pName) = 0;
		virtual HRESULT __stdcall put_Name (BSTR pName) = 0;
		virtual HRESULT __stdcall get_Description (BSTR * pDescription) = 0;
		virtual HRESULT __stdcall put_Description (BSTR pDescription) = 0;
		virtual HRESULT __stdcall raw_GetAddress (struct IPostalAddress * * ppAddress) = 0;
		virtual HRESULT __stdcall raw_GetProperties (struct IPropertyContainer * * ppPropertyContainer) = 0;
		virtual HRESULT __stdcall get_UniqueId (GUID * pUniqueId) = 0;
		virtual HRESULT __stdcall get_UniqueIdS (BSTR * pUniqueId) = 0;
		virtual HRESULT __stdcall get_Id (int * pId) = 0;
	};

	struct __declspec(uuid("9e81e4e5-2843-46ab-9f26-9ef191adb22d")) ISiteInfo : IDispatch {
		__declspec(property(get=GetNumber,put=PutNumber)) _bstr_t Number;
		__declspec(property(get=GetName,put=PutName)) _bstr_t Name;
		__declspec(property(get=GetDescription,put=PutDescription)) _bstr_t Description;
		__declspec(property(get=GetUniqueId)) GUID UniqueId;
		__declspec(property(get=GetUniqueIdS)) _bstr_t UniqueIdS;

		_bstr_t GetNumber();
		void PutNumber (_bstr_t pNumber);
		_bstr_t GetName();
		void PutName (_bstr_t pName);
		_bstr_t GetDescription();
		void PutDescription (_bstr_t pDescription);
		IPostalAddressPtr GetAddress();
		IPropertyContainerPtr GetProperties();
		GUID GetUniqueId();
		_bstr_t GetUniqueIdS();

		virtual HRESULT __stdcall get_Number (BSTR * pNumber) = 0;
		virtual HRESULT __stdcall put_Number (BSTR pNumber) = 0;
		virtual HRESULT __stdcall get_Name (BSTR * pName) = 0;
		virtual HRESULT __stdcall put_Name (BSTR pName) = 0;
		virtual HRESULT __stdcall get_Description (BSTR * pDescription) = 0;
		virtual HRESULT __stdcall put_Description (BSTR pDescription) = 0;
		virtual HRESULT __stdcall raw_GetAddress (struct IPostalAddress * * ppAddress) = 0;
		virtual HRESULT __stdcall raw_GetProperties (struct IPropertyContainer * * ppPropertyContainer) = 0;
		virtual HRESULT __stdcall get_UniqueId (GUID * pUniqueId) = 0;
		virtual HRESULT __stdcall get_UniqueIdS (BSTR * pUniqueId) = 0;
	};

	struct __declspec(uuid("6d193059-9942-488e-8667-e39e4fdb448e")) IEntityCollection : IDispatch {
		__declspec(property(get=GetCount)) int Count;

		IEntityPtr GetById (int Id);
		SAFEARRAY * GetIds();
		IEntityPtr GetByUniqueId (GUID Id);
		IEntityPtr GetByUniqueIdS (_bstr_t Id);
		IGuidCollectionPtr GetUniqueIds();
		VARIANT_BOOL Contains (int Id);
		VARIANT_BOOL ContainsUniqueId (GUID Id);
		VARIANT_BOOL ContainsUniqueIdS (_bstr_t Id);
		int GetCount();
		IEntityPtr GetByIndex (int index);
		HRESULT Remove (int Id);
		HRESULT RemoveByUniqueId (GUID Id);
		HRESULT RemoveByUniqueIdS (_bstr_t Id);
		HRESULT Clear();
		INewEntityArgsPtr CreateNewEntityArgs();
		IEntityPtr Create (struct INewEntityArgs * pArgs);

		virtual HRESULT __stdcall raw_GetById (int Id, struct IEntity * * ppEntity) = 0;
		virtual HRESULT __stdcall raw_GetIds (SAFEARRAY * * pIds) = 0;
		virtual HRESULT __stdcall raw_GetByUniqueId (GUID Id, struct IEntity * * ppEntity) = 0;
		virtual HRESULT __stdcall raw_GetByUniqueIdS (BSTR Id, struct IEntity * * ppEntity) = 0;
		virtual HRESULT __stdcall raw_GetUniqueIds (struct IGuidCollection * * ppUniqueIds) = 0;
		virtual HRESULT __stdcall raw_Contains (int Id, VARIANT_BOOL * pContains) = 0;
		virtual HRESULT __stdcall raw_ContainsUniqueId (GUID Id, VARIANT_BOOL * pContains) = 0;
		virtual HRESULT __stdcall raw_ContainsUniqueIdS (BSTR Id, VARIANT_BOOL * pContains) = 0;
		virtual HRESULT __stdcall get_Count (int * pCount) = 0;
		virtual HRESULT __stdcall raw_GetByIndex (int index, struct IEntity * * ppEntity) = 0;
		virtual HRESULT __stdcall raw_Remove (int Id) = 0;
		virtual HRESULT __stdcall raw_RemoveByUniqueId (GUID Id) = 0;
		virtual HRESULT __stdcall raw_RemoveByUniqueIdS (BSTR Id) = 0;
		virtual HRESULT __stdcall raw_Clear() = 0;
		virtual HRESULT __stdcall raw_CreateNewEntityArgs (struct INewEntityArgs * * ppArgs) = 0;
		virtual HRESULT __stdcall raw_Create (struct INewEntityArgs * pArgs, struct IEntity * * ppEntity) = 0;
	};

	struct __declspec(uuid("05997cb0-a64b-4a39-9298-810afc79c464")) IUndoStack : IDispatch {
		HRESULT Undo();
		HRESULT Redo();
		VARIANT_BOOL HasUndo();
		VARIANT_BOOL HasRedo();

		virtual HRESULT __stdcall raw_Undo() = 0;
		virtual HRESULT __stdcall raw_Redo() = 0;
		virtual HRESULT __stdcall raw_HasUndo (VARIANT_BOOL * pResult) = 0;
		virtual HRESULT __stdcall raw_HasRedo (VARIANT_BOOL * pResult) = 0;
	};

	struct __declspec(uuid("69c88e87-b0bf-4593-af21-183e043fc23b")) IPipeSystemConnectionParameters : IDispatch {
		__declspec(property(get=GetConsiderEnclosingStructuresMagistral,put=PutConsiderEnclosingStructuresMagistral)) VARIANT_BOOL ConsiderEnclosingStructuresMagistral;
		__declspec(property(get=GetConsiderEnclosingStructuresBranch,put=PutConsiderEnclosingStructuresBranch)) VARIANT_BOOL ConsiderEnclosingStructuresBranch;
		__declspec(property(get=GetHeightMagistral,put=PutHeightMagistral)) double HeightMagistral;
		__declspec(property(get=GetHeightBranch,put=PutHeightBranch)) double HeightBranch;
		__declspec(property(get=GetOffsetMagistral,put=PutOffsetMagistral)) double OffsetMagistral;
		__declspec(property(get=GetOffsetBranch,put=PutOffsetBranch)) double OffsetBranch;

		VARIANT_BOOL GetConsiderEnclosingStructuresMagistral();
		void PutConsiderEnclosingStructuresMagistral (VARIANT_BOOL value);
		VARIANT_BOOL GetConsiderEnclosingStructuresBranch();
		void PutConsiderEnclosingStructuresBranch (VARIANT_BOOL value);
		double GetHeightMagistral();
		void PutHeightMagistral (double routeHeight);
		double GetHeightBranch();
		void PutHeightBranch (double routeHeight);
		double GetOffsetMagistral();
		void PutOffsetMagistral (double routeOffset);
		double GetOffsetBranch();
		void PutOffsetBranch (double routeOffset);
		HRESULT AddPipeStyleMagistral (int pipeStyleId, int insulationId);
		HRESULT AddPipeStyleBranch (int pipeStyleId, int insulationId);
		HRESULT DeletePipeStyleMagistral (int pipeStyleId);
		HRESULT DeletePipeStyleBranch (int pipeStyleId);
		HRESULT SetInsulationIdMagistral (int pipeStyleId, int insulationId);
		HRESULT SetInsulationIdBranch (int pipeStyleId, int insulationId);
		int GetInsulationIdMagistral (int pipeStyleId);
		int GetInsulationIdBranch (int pipeStyleId);
		HRESULT AddPipeFittingStyle (int pipeFittingStyleId);
		HRESULT DeletePipeFittingStyle (int pipeFittingStyleId);

		virtual HRESULT __stdcall get_ConsiderEnclosingStructuresMagistral (VARIANT_BOOL * value) = 0;
		virtual HRESULT __stdcall put_ConsiderEnclosingStructuresMagistral (VARIANT_BOOL value) = 0;
		virtual HRESULT __stdcall get_ConsiderEnclosingStructuresBranch (VARIANT_BOOL * value) = 0;
		virtual HRESULT __stdcall put_ConsiderEnclosingStructuresBranch (VARIANT_BOOL value) = 0;
		virtual HRESULT __stdcall get_HeightMagistral (double * routeHeight) = 0;
		virtual HRESULT __stdcall put_HeightMagistral (double routeHeight) = 0;
		virtual HRESULT __stdcall get_HeightBranch (double * routeHeight) = 0;
		virtual HRESULT __stdcall put_HeightBranch (double routeHeight) = 0;
		virtual HRESULT __stdcall get_OffsetMagistral (double * routeOffset) = 0;
		virtual HRESULT __stdcall put_OffsetMagistral (double routeOffset) = 0;
		virtual HRESULT __stdcall get_OffsetBranch (double * routeOffset) = 0;
		virtual HRESULT __stdcall put_OffsetBranch (double routeOffset) = 0;
		virtual HRESULT __stdcall raw_AddPipeStyleMagistral (int pipeStyleId, int insulationId) = 0;
		virtual HRESULT __stdcall raw_AddPipeStyleBranch (int pipeStyleId, int insulationId) = 0;
		virtual HRESULT __stdcall raw_DeletePipeStyleMagistral (int pipeStyleId) = 0;
		virtual HRESULT __stdcall raw_DeletePipeStyleBranch (int pipeStyleId) = 0;
		virtual HRESULT __stdcall raw_SetInsulationIdMagistral (int pipeStyleId, int insulationId) = 0;
		virtual HRESULT __stdcall raw_SetInsulationIdBranch (int pipeStyleId, int insulationId) = 0;
		virtual HRESULT __stdcall raw_GetInsulationIdMagistral (int pipeStyleId, int * pInsulationId) = 0;
		virtual HRESULT __stdcall raw_GetInsulationIdBranch (int pipeStyleId, int * pInsulationId) = 0;
		virtual HRESULT __stdcall raw_AddPipeFittingStyle (int pipeFittingStyleId) = 0;
		virtual HRESULT __stdcall raw_DeletePipeFittingStyle (int pipeFittingStyleId) = 0;
	};

	struct __declspec(uuid("d83b9f0b-aa36-4387-98ab-337c1329b512")) IDuctSystemConnectionParameters : IDispatch {
		__declspec(property(get=GetConsiderEnclosingStructuresMagistral,put=PutConsiderEnclosingStructuresMagistral)) VARIANT_BOOL ConsiderEnclosingStructuresMagistral;
		__declspec(property(get=GetConsiderEnclosingStructuresBranch,put=PutConsiderEnclosingStructuresBranch)) VARIANT_BOOL ConsiderEnclosingStructuresBranch;
		__declspec(property(get=GetHeightMagistral,put=PutHeightMagistral)) double HeightMagistral;
		__declspec(property(get=GetHeightBranch,put=PutHeightBranch)) double HeightBranch;
		__declspec(property(get=GetOffsetMagistral,put=PutOffsetMagistral)) double OffsetMagistral;
		__declspec(property(get=GetOffsetBranch,put=PutOffsetBranch)) double OffsetBranch;

		VARIANT_BOOL GetConsiderEnclosingStructuresMagistral();
		void PutConsiderEnclosingStructuresMagistral (VARIANT_BOOL value);
		VARIANT_BOOL GetConsiderEnclosingStructuresBranch();
		void PutConsiderEnclosingStructuresBranch (VARIANT_BOOL value);
		double GetHeightMagistral();
		void PutHeightMagistral (double routeHeight);
		double GetHeightBranch();
		void PutHeightBranch (double routeHeight);
		double GetOffsetMagistral();
		void PutOffsetMagistral (double routeOffset);
		double GetOffsetBranch();
		void PutOffsetBranch (double routeOffset);
		HRESULT AddDuctStyleMagistral (int ductStyleId, int insulationId);
		HRESULT AddDuctStyleBranch (int ductStyleId, int insulationId);
		HRESULT DeleteDuctStyleMagistral (int ductStyleId);
		HRESULT DeleteDuctStyleBranch (int ductStyleId);
		HRESULT SetInsulationIdMagistral (int ductStyleId, int insulationId);
		HRESULT SetInsulationIdBranch (int ductStyleId, int insulationId);
		int GetInsulationIdMagistral (int ductStyleId);
		int GetInsulationIdBranch (int ductStyleId);
		HRESULT AddDuctFittingStyle (int ductFittingStyleId);
		HRESULT DeleteDuctFittingStyle (int ductFittingStyleId);

		virtual HRESULT __stdcall get_ConsiderEnclosingStructuresMagistral (VARIANT_BOOL * value) = 0;
		virtual HRESULT __stdcall put_ConsiderEnclosingStructuresMagistral (VARIANT_BOOL value) = 0;
		virtual HRESULT __stdcall get_ConsiderEnclosingStructuresBranch (VARIANT_BOOL * value) = 0;
		virtual HRESULT __stdcall put_ConsiderEnclosingStructuresBranch (VARIANT_BOOL value) = 0;
		virtual HRESULT __stdcall get_HeightMagistral (double * routeHeight) = 0;
		virtual HRESULT __stdcall put_HeightMagistral (double routeHeight) = 0;
		virtual HRESULT __stdcall get_HeightBranch (double * routeHeight) = 0;
		virtual HRESULT __stdcall put_HeightBranch (double routeHeight) = 0;
		virtual HRESULT __stdcall get_OffsetMagistral (double * routeOffset) = 0;
		virtual HRESULT __stdcall put_OffsetMagistral (double routeOffset) = 0;
		virtual HRESULT __stdcall get_OffsetBranch (double * routeOffset) = 0;
		virtual HRESULT __stdcall put_OffsetBranch (double routeOffset) = 0;
		virtual HRESULT __stdcall raw_AddDuctStyleMagistral (int ductStyleId, int insulationId) = 0;
		virtual HRESULT __stdcall raw_AddDuctStyleBranch (int ductStyleId, int insulationId) = 0;
		virtual HRESULT __stdcall raw_DeleteDuctStyleMagistral (int ductStyleId) = 0;
		virtual HRESULT __stdcall raw_DeleteDuctStyleBranch (int ductStyleId) = 0;
		virtual HRESULT __stdcall raw_SetInsulationIdMagistral (int ductStyleId, int insulationId) = 0;
		virtual HRESULT __stdcall raw_SetInsulationIdBranch (int ductStyleId, int insulationId) = 0;
		virtual HRESULT __stdcall raw_GetInsulationIdMagistral (int ductStyleId, int * pInsulationId) = 0;
		virtual HRESULT __stdcall raw_GetInsulationIdBranch (int ductStyleId, int * pInsulationId) = 0;
		virtual HRESULT __stdcall raw_AddDuctFittingStyle (int ductFittingStyleId) = 0;
		virtual HRESULT __stdcall raw_DeleteDuctFittingStyle (int ductFittingStyleId) = 0;
	};

	struct __declspec(uuid("d98d9646-3580-4957-bf33-be490930f7f6")) IElectricalSystemConnectionParameters : IDispatch {
		__declspec(property(get=GetConsiderEnclosingStructures,put=PutConsiderEnclosingStructures)) VARIANT_BOOL ConsiderEnclosingStructures;
		__declspec(property(get=GetHeight,put=PutHeight)) double Height;
		__declspec(property(get=Getoffset,put=Putoffset)) double offset;

		VARIANT_BOOL GetConsiderEnclosingStructures();
		void PutConsiderEnclosingStructures (VARIANT_BOOL value);
		double GetHeight();
		void PutHeight (double routeHeight);
		double Getoffset();
		void Putoffset (double routeOffset);
		HRESULT AddElectricalCircuitLineStyle (int electricalCircuitLineStyleId);
		HRESULT DeleteElectricalCircuitLineStyle (int electricalCircuitLineStyleId);

		virtual HRESULT __stdcall get_ConsiderEnclosingStructures (VARIANT_BOOL * value) = 0;
		virtual HRESULT __stdcall put_ConsiderEnclosingStructures (VARIANT_BOOL value) = 0;
		virtual HRESULT __stdcall get_Height (double * routeHeight) = 0;
		virtual HRESULT __stdcall put_Height (double routeHeight) = 0;
		virtual HRESULT __stdcall get_offset (double * routeOffset) = 0;
		virtual HRESULT __stdcall put_offset (double routeOffset) = 0;
		virtual HRESULT __stdcall raw_AddElectricalCircuitLineStyle (int electricalCircuitLineStyleId) = 0;
		virtual HRESULT __stdcall raw_DeleteElectricalCircuitLineStyle (int electricalCircuitLineStyleId) = 0;
	};

	struct __declspec(uuid("404fc5fc-e6cc-4e15-90fa-d7e2e7c57fa3")) IEngineeringObjectConnector : IDispatch {
		IPipeSystemConnectionParametersPtr CreatePipeSystemConnectionParameters();
		IDispatchPtr CreatePipeSystemConnection (struct IPipeSystemConnectionParameters * pPipeSystemConnectionParameters, int sourceId, int sourcePort, int targetId, int targetPort, enum SystemCategory SystemCategory);
		IDuctSystemConnectionParametersPtr CreateDuctSystemConnectionParameters();
		IDispatchPtr CreateDuctSystemConnection (struct IDuctSystemConnectionParameters * pDuctSystemConnectionParameters, int sourceId, int sourcePort, int targetId, int targetPort, enum SystemCategory SystemCategory);
		IElectricalSystemConnectionParametersPtr CreateElectricalSystemConnectionParameters();
		IDispatchPtr CreateElectricalSystemConnection (struct IElectricalSystemConnectionParameters * pElectricalSystemConnectionParameters, int sourceId, int sourcePort, int targetId, int targetPort, enum SystemCategory SystemCategory);

		virtual HRESULT __stdcall raw_CreatePipeSystemConnectionParameters (struct IPipeSystemConnectionParameters * * ppPipeSystemConnectionParameters) = 0;
		virtual HRESULT __stdcall raw_CreatePipeSystemConnection (struct IPipeSystemConnectionParameters * pPipeSystemConnectionParameters, int sourceId, int sourcePort, int targetId, int targetPort, enum SystemCategory SystemCategory, IDispatch * * ppOut) = 0;
		virtual HRESULT __stdcall raw_CreateDuctSystemConnectionParameters (struct IDuctSystemConnectionParameters * * ppDuctSystemConnectionParameters) = 0;
		virtual HRESULT __stdcall raw_CreateDuctSystemConnection (struct IDuctSystemConnectionParameters * pDuctSystemConnectionParameters, int sourceId, int sourcePort, int targetId, int targetPort, enum SystemCategory SystemCategory, IDispatch * * ppOut) = 0;
		virtual HRESULT __stdcall raw_CreateElectricalSystemConnectionParameters (struct IElectricalSystemConnectionParameters * * ppElectricalSystemConnectionParameters) = 0;
		virtual HRESULT __stdcall raw_CreateElectricalSystemConnection (struct IElectricalSystemConnectionParameters * pElectricalSystemConnectionParameters, int sourceId, int sourcePort, int targetId, int targetPort, enum SystemCategory SystemCategory, IDispatch * * ppOut) = 0;
	};

	struct __declspec(uuid("c6f88e0e-91e3-45df-82d8-01fb601b9c1e")) IProject : IDispatch {
		__declspec(property(get=GetFilePath)) _bstr_t FilePath;
		__declspec(property(get=GetModel)) IModelPtr Model;
		__declspec(property(get=GetPropertyManager)) IPropertyManagerPtr PropertyManager;
		__declspec(property(get=GetMaterialManager)) IMaterialManagerPtr MaterialManager;
		__declspec(property(get=GetLayeredMaterialManager)) ILayeredMaterialManagerPtr LayeredMaterialManager;
		__declspec(property(get=GetDataExporter)) IDataExporterPtr DataExporter;
		__declspec(property(get=GetReinforcementUnitStyleManager)) IReinforcementUnitStyleManagerPtr ReinforcementUnitStyleManager;
		__declspec(property(get=GetProjectType)) enum ProjectType _ProjectType;
		__declspec(property(get=GetDrawings)) IDrawingCollectionPtr Drawings;
		__declspec(property(get=GetProfileDescriptionManager)) IProfileDescriptionManagerPtr ProfileDescriptionManager;
		__declspec(property(get=GetBeamStyleManager)) IBeamStyleManagerPtr BeamStyleManager;
		__declspec(property(get=GetColumnStyleManager)) IColumnStyleManagerPtr ColumnStyleManager;
		__declspec(property(get=GetSystemStyleManager)) ISystemStyleManagerPtr SystemStyleManager;
		__declspec(property(get=GetPlumbingFixtureStyleManager)) IPlumbingFixtureStyleManagerPtr PlumbingFixtureStyleManager;
		__declspec(property(get=GetEquipmentStyleManager)) IEquipmentStyleManagerPtr EquipmentStyleManager;
		__declspec(property(get=GetProjectInfo)) IProjectInfoPtr ProjectInfo;
		__declspec(property(get=GetBuildingInfo)) IBuildingInfoPtr BuildingInfo;
		__declspec(property(get=GetSiteInfo)) ISiteInfoPtr SiteInfo;
		__declspec(property(get=GetPipeAccessoryStyles)) IEntityCollectionPtr PipeAccessoryStyles;
		__declspec(property(get=GetPipeStyles)) IEntityCollectionPtr PipeStyles;
		__declspec(property(get=GetPipeFittingStyles)) IEntityCollectionPtr PipeFittingStyles;
		__declspec(property(get=GetMechanicalEquipmentStyles)) IEntityCollectionPtr MechanicalEquipmentStyles;
		__declspec(property(get=GetDuctStyles)) IEntityCollectionPtr DuctStyles;
		__declspec(property(get=GetDuctFittingStyles)) IEntityCollectionPtr DuctFittingStyles;
		__declspec(property(get=GetDuctAccessoryStyles)) IEntityCollectionPtr DuctAccessoryStyles;
		__declspec(property(get=GetLightingFixtureStyles)) IEntityCollectionPtr LightingFixtureStyles;
		__declspec(property(get=GetWiringAccessoryStyles)) IEntityCollectionPtr WiringAccessoryStyles;
		__declspec(property(get=GetElectricDistributionBoardStyles)) IEntityCollectionPtr ElectricDistributionBoardStyles;
		__declspec(property(get=GetElectricalConductorStyles)) IEntityCollectionPtr ElectricalConductorStyles;
		__declspec(property(get=GetElectricalCircuitLineStyles)) IEntityCollectionPtr ElectricalCircuitLineStyles;
		__declspec(property(get=GetSystemStyles)) IEntityCollectionPtr SystemStyles;
		__declspec(property(get=GetPlumbingFixtureStyles)) IEntityCollectionPtr PlumbingFixtureStyles;
		__declspec(property(get=GetEquipmentStyles)) IEntityCollectionPtr EquipmentStyles;
		__declspec(property(get=GetAssemblies)) IEntityCollectionPtr Assemblies;
		__declspec(property(get=GetDrawings2)) IEntityCollectionPtr Drawings2;
		__declspec(property(get=GetElementStyles)) IEntityCollectionPtr ElementStyles;
		__declspec(property(get=GetBeamStyles)) IEntityCollectionPtr BeamStyles;
		__declspec(property(get=GetColumnStyles)) IEntityCollectionPtr ColumnStyles;
		__declspec(property(get=GetPlateStyles)) IEntityCollectionPtr PlateStyles;
		__declspec(property(get=GetMaterials)) IEntityCollectionPtr Materials;
		__declspec(property(get=GetWindowStyles)) IEntityCollectionPtr WindowStyles;
		__declspec(property(get=GetDoorStyles)) IEntityCollectionPtr DoorStyles;
		__declspec(property(get=GetLayeredMaterials)) IEntityCollectionPtr LayeredMaterials;
		__declspec(property(get=GetProfiles)) IEntityCollectionPtr Profiles;
		__declspec(property(get=GetTopics)) IEntityCollectionPtr Topics;
		__declspec(property(get=GetLayoutStyles)) IEntityCollectionPtr LayoutStyles;
		__declspec(property(get=GetPageFormatStyles)) IEntityCollectionPtr PageFormatStyles;
		__declspec(property(get=GetJournalPath)) _bstr_t JournalPath;
		__declspec(property(get=GetDuctAccessoryCategories)) IEntityCollectionPtr DuctAccessoryCategories;
		__declspec(property(get=GetPipeAccessoryCategories)) IEntityCollectionPtr PipeAccessoryCategories;
		__declspec(property(get=GetDuctFittingCategories)) IEntityCollectionPtr DuctFittingCategories;
		__declspec(property(get=GetPipeFittingCategories)) IEntityCollectionPtr PipeFittingCategories;
		__declspec(property(get=GetMechanicalEquipmentCategories)) IEntityCollectionPtr MechanicalEquipmentCategories;
		__declspec(property(get=GetEquipmentCategories)) IEntityCollectionPtr EquipmentCategories;
		__declspec(property(get=GetPlumbingFixtureCategories)) IEntityCollectionPtr PlumbingFixtureCategories;
		__declspec(property(get=GetElectricDistributionBoardCategories)) IEntityCollectionPtr ElectricDistributionBoardCategories;
		__declspec(property(get=GetWiringAccessoryCategories)) IEntityCollectionPtr WiringAccessoryCategories;
		__declspec(property(get=GetLightingFixtureCategories)) IEntityCollectionPtr LightingFixtureCategories;
		__declspec(property(get=GetHoleStyles)) IEntityCollectionPtr HoleStyles;
		__declspec(property(get=GetReinforcementStyles)) IEntityCollectionPtr ReinforcementStyles;
		__declspec(property(get=GetReinforcementUnitStyles)) IEntityCollectionPtr ReinforcementUnitStyles;
		__declspec(property(get=GetRebarStyles)) IEntityCollectionPtr RebarStyles;
		__declspec(property(get=GetReinforcementGrades)) IEntityCollectionPtr ReinforcementGrades;
		__declspec(property(get=GetReinforcementUnitStyleTemplates)) IEntityCollectionPtr ReinforcementUnitStyleTemplates;
		__declspec(property(get=GetImageLinks)) IEntityCollectionPtr ImageLinks;
		__declspec(property(get=GetModelLinks)) IEntityCollectionPtr ModelLinks;
		__declspec(property(get=GetDrawingLinks)) IEntityCollectionPtr DrawingLinks;
		__declspec(property(get=GetScales)) IEntityCollectionPtr Scales;
		__declspec(property(get=GetWallReinforcementStyleTemplates)) IEntityCollectionPtr WallReinforcementStyleTemplates;
		__declspec(property(get=GetFloorReinforcementStyleTemplates)) IEntityCollectionPtr FloorReinforcementStyleTemplates;
		__declspec(property(get=GetIsolatedFoundationReinforcementStyleTemplates)) IEntityCollectionPtr IsolatedFoundationReinforcementStyleTemplates;
		__declspec(property(get=GetEngineeringObjectConnector)) IEngineeringObjectConnectorPtr EngineeringObjectConnector;
		__declspec(property(get=GetIfcLinks)) IEntityCollectionPtr IfcLinks;

		_bstr_t GetFilePath();
		VARIANT_BOOL HasFile();
		IModelPtr GetModel();
		IPropertyManagerPtr GetPropertyManager();
		IMaterialManagerPtr GetMaterialManager();
		ILayeredMaterialManagerPtr GetLayeredMaterialManager();
		IDataExporterPtr GetDataExporter();
		IReinforcementUnitStyleManagerPtr GetReinforcementUnitStyleManager();
		enum ProjectType GetProjectType();
		IDrawingCollectionPtr GetDrawings();
		VARIANT_BOOL HasUnsavedChanges();
		int Save();
		int SaveAs (_bstr_t FilePath, enum ProjectType ProjectType, VARIANT_BOOL overwrite);
		int ExportToIfc (_bstr_t FilePath, VARIANT_BOOL overwrite);
		IProfileDescriptionManagerPtr GetProfileDescriptionManager();
		IBeamStyleManagerPtr GetBeamStyleManager();
		IColumnStyleManagerPtr GetColumnStyleManager();
		int ExportToCsv (_bstr_t folderPath, VARIANT_BOOL overwrite);
		int ExportDrawingsToPdf (SAFEARRAY * drawingIds, _bstr_t FilePath, VARIANT_BOOL overwrite);
		ISystemStyleManagerPtr GetSystemStyleManager();
		IPlumbingFixtureStyleManagerPtr GetPlumbingFixtureStyleManager();
		IEquipmentStyleManagerPtr GetEquipmentStyleManager();
		int ExportToIfc2 (_bstr_t FilePath, VARIANT_BOOL overwrite, struct IIfcExportSettings * pIfcExportSettings);
		IProjectInfoPtr GetProjectInfo();
		IBuildingInfoPtr GetBuildingInfo();
		ISiteInfoPtr GetSiteInfo();
		IEntityCollectionPtr GetPipeAccessoryStyles();
		IEntityCollectionPtr GetPipeStyles();
		IEntityCollectionPtr GetPipeFittingStyles();
		IEntityCollectionPtr GetMechanicalEquipmentStyles();
		IEntityCollectionPtr GetDuctStyles();
		IEntityCollectionPtr GetDuctFittingStyles();
		IEntityCollectionPtr GetDuctAccessoryStyles();
		IEntityCollectionPtr GetLightingFixtureStyles();
		IEntityCollectionPtr GetWiringAccessoryStyles();
		IEntityCollectionPtr GetElectricDistributionBoardStyles();
		IEntityCollectionPtr GetElectricalConductorStyles();
		IEntityCollectionPtr GetElectricalCircuitLineStyles();
		IEntityCollectionPtr GetSystemStyles();
		IEntityCollectionPtr GetPlumbingFixtureStyles();
		IEntityCollectionPtr GetEquipmentStyles();
		IEntityCollectionPtr GetAssemblies();
		int ExportDrawingsToPdfS (SAFEARRAY * drawingIds, _bstr_t FilePath, VARIANT_BOOL overwrite);
		int ExportDrawingsToOpenXpsS (SAFEARRAY * drawingIds, _bstr_t FilePath, VARIANT_BOOL overwrite);
		IEntityCollectionPtr GetDrawings2();
		IEntityCollectionPtr GetElementStyles();
		IEntityCollectionPtr GetBeamStyles();
		IEntityCollectionPtr GetColumnStyles();
		IEntityCollectionPtr GetPlateStyles();
		IEntityCollectionPtr GetMaterials();
		IEntityCollectionPtr GetWindowStyles();
		IEntityCollectionPtr GetDoorStyles();
		IEntityCollectionPtr GetLayeredMaterials();
		IEntityCollectionPtr GetProfiles();
		IOperationPtr CreateOperation();
		IEntityCollectionPtr GetTopics();
		IEntityCollectionPtr GetLayoutStyles();
		IEntityCollectionPtr GetPageFormatStyles();
		int GetEntityNumberInTopic (GUID entityId);
		int GetEntityNumberInTopicS (_bstr_t entityId);
		_bstr_t GetJournalPath();
		VARIANT_BOOL HasActiveOperation();
		IOperationPtr CreateOperationWithUndo (GUID modelId);
		IUndoStackPtr GetUndoStack (GUID modelId);
		IEntityCollectionPtr GetDuctAccessoryCategories();
		IEntityCollectionPtr GetPipeAccessoryCategories();
		IEntityCollectionPtr GetDuctFittingCategories();
		IEntityCollectionPtr GetPipeFittingCategories();
		IEntityCollectionPtr GetMechanicalEquipmentCategories();
		IEntityCollectionPtr GetEquipmentCategories();
		IEntityCollectionPtr GetPlumbingFixtureCategories();
		IEntityCollectionPtr GetElectricDistributionBoardCategories();
		IEntityCollectionPtr GetWiringAccessoryCategories();
		IEntityCollectionPtr GetLightingFixtureCategories();
		IEntityCollectionPtr GetHoleStyles();
		IEntityPtr ImportCategory (GUID entityTypeId, _bstr_t FilePath);
		IEntityPtr ImportCategoryS (_bstr_t entityTypeId, _bstr_t FilePath);
		IEntityCollectionPtr GetReinforcementStyles();
		IEntityCollectionPtr GetReinforcementUnitStyles();
		IEntityCollectionPtr GetRebarStyles();
		IEntityCollectionPtr GetReinforcementGrades();
		int ExportObjectsToIFC (_bstr_t FilePath, SAFEARRAY * objectToExportIds, VARIANT_BOOL overwrite, struct IIfcExportSettings * pIfcExportSettings);
		IEntityCollectionPtr GetReinforcementUnitStyleTemplates();
		IOperationPtr StartOperation();
		IOperationPtr StartOperationWithUndo (GUID modelId);
		IEntityCollectionPtr GetImageLinks();
		IEntityCollectionPtr GetModelLinks();
		IEntityCollectionPtr GetDrawingLinks();
		IEntityCollectionPtr GetScales();
		IEntityCollectionPtr GetWallReinforcementStyleTemplates();
		IEntityCollectionPtr GetFloorReinforcementStyleTemplates();
		IEntityCollectionPtr GetIsolatedFoundationReinforcementStyleTemplates();
		IEngineeringObjectConnectorPtr GetEngineeringObjectConnector();
		IEntityCollectionPtr GetIfcLinks();

		virtual HRESULT __stdcall get_FilePath (BSTR * pFilePath) = 0;
		virtual HRESULT __stdcall raw_HasFile (VARIANT_BOOL * pResult) = 0;
		virtual HRESULT __stdcall get_Model (struct IModel * * ppModel) = 0;
		virtual HRESULT __stdcall get_PropertyManager (struct IPropertyManager * * ppPropertyManager) = 0;
		virtual HRESULT __stdcall get_MaterialManager (struct IMaterialManager * * ppMaterialManager) = 0;
		virtual HRESULT __stdcall get_LayeredMaterialManager (struct ILayeredMaterialManager * * ppLayeredMaterialManager) = 0;
		virtual HRESULT __stdcall get_DataExporter (struct IDataExporter * * ppDataExporter) = 0;
		virtual HRESULT __stdcall get_ReinforcementUnitStyleManager (struct IReinforcementUnitStyleManager * * ppReinforcementUnitStyleManager) = 0;
		virtual HRESULT __stdcall get_ProjectType (enum ProjectType * pProjectType) = 0;
		virtual HRESULT __stdcall get_Drawings (struct IDrawingCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall raw_HasUnsavedChanges (VARIANT_BOOL * pResult) = 0;
		virtual HRESULT __stdcall raw_Save (int * pResult) = 0;
		virtual HRESULT __stdcall raw_SaveAs (BSTR FilePath, enum ProjectType ProjectType, VARIANT_BOOL overwrite, int * pResult) = 0;
		virtual HRESULT __stdcall raw_ExportToIfc (BSTR FilePath, VARIANT_BOOL overwrite, int * pResult) = 0;
		virtual HRESULT __stdcall get_ProfileDescriptionManager (struct IProfileDescriptionManager * * ppProfileDescriptionManager) = 0;
		virtual HRESULT __stdcall get_BeamStyleManager (struct IBeamStyleManager * * ppBeamStyleManager) = 0;
		virtual HRESULT __stdcall get_ColumnStyleManager (struct IColumnStyleManager * * ppColumnStyleManager) = 0;
		virtual HRESULT __stdcall raw_ExportToCsv (BSTR folderPath, VARIANT_BOOL overwrite, int * pResult) = 0;
		virtual HRESULT __stdcall raw_ExportDrawingsToPdf (SAFEARRAY * drawingIds, BSTR FilePath, VARIANT_BOOL overwrite, int * pResult) = 0;
		virtual HRESULT __stdcall get_SystemStyleManager (struct ISystemStyleManager * * ppSystemStyleManager) = 0;
		virtual HRESULT __stdcall get_PlumbingFixtureStyleManager (struct IPlumbingFixtureStyleManager * * ppPlumbingFixtureStyleManager) = 0;
		virtual HRESULT __stdcall get_EquipmentStyleManager (struct IEquipmentStyleManager * * ppEquipmentStyleManager) = 0;
		virtual HRESULT __stdcall raw_ExportToIfc2 (BSTR FilePath, VARIANT_BOOL overwrite, struct IIfcExportSettings * pIfcExportSettings, int * pResult) = 0;
		virtual HRESULT __stdcall get_ProjectInfo (struct IProjectInfo * * ppProjectInfo) = 0;
		virtual HRESULT __stdcall get_BuildingInfo (struct IBuildingInfo * * ppBuildingInfo) = 0;
		virtual HRESULT __stdcall get_SiteInfo (struct ISiteInfo * * ppSiteInfo) = 0;
		virtual HRESULT __stdcall get_PipeAccessoryStyles (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall get_PipeStyles (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall get_PipeFittingStyles (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall get_MechanicalEquipmentStyles (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall get_DuctStyles (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall get_DuctFittingStyles (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall get_DuctAccessoryStyles (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall get_LightingFixtureStyles (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall get_WiringAccessoryStyles (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall get_ElectricDistributionBoardStyles (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall get_ElectricalConductorStyles (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall get_ElectricalCircuitLineStyles (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall get_SystemStyles (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall get_PlumbingFixtureStyles (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall get_EquipmentStyles (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall get_Assemblies (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall raw_ExportDrawingsToPdfS (SAFEARRAY * drawingIds, BSTR FilePath, VARIANT_BOOL overwrite, int * pResult) = 0;
		virtual HRESULT __stdcall raw_ExportDrawingsToOpenXpsS (SAFEARRAY * drawingIds, BSTR FilePath, VARIANT_BOOL overwrite, int * pResult) = 0;
		virtual HRESULT __stdcall get_Drawings2 (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall get_ElementStyles (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall get_BeamStyles (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall get_ColumnStyles (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall get_PlateStyles (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall get_Materials (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall get_WindowStyles (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall get_DoorStyles (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall get_LayeredMaterials (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall get_Profiles (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall raw_CreateOperation (struct IOperation * * ppOperation) = 0;
		virtual HRESULT __stdcall get_Topics (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall get_LayoutStyles (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall get_PageFormatStyles (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall raw_GetEntityNumberInTopic (GUID entityId, int * pResult) = 0;
		virtual HRESULT __stdcall raw_GetEntityNumberInTopicS (BSTR entityId, int * pResult) = 0;
		virtual HRESULT __stdcall get_JournalPath (BSTR * pJournalPath) = 0;
		virtual HRESULT __stdcall raw_HasActiveOperation (VARIANT_BOOL * pResult) = 0;
		virtual HRESULT __stdcall raw_CreateOperationWithUndo (GUID modelId, struct IOperation * * ppOperation) = 0;
		virtual HRESULT __stdcall raw_GetUndoStack (GUID modelId, struct IUndoStack * * ppUndoStack) = 0;
		virtual HRESULT __stdcall get_DuctAccessoryCategories (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall get_PipeAccessoryCategories (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall get_DuctFittingCategories (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall get_PipeFittingCategories (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall get_MechanicalEquipmentCategories (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall get_EquipmentCategories (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall get_PlumbingFixtureCategories (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall get_ElectricDistributionBoardCategories (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall get_WiringAccessoryCategories (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall get_LightingFixtureCategories (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall get_HoleStyles (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall raw_ImportCategory (GUID entityTypeId, BSTR FilePath, struct IEntity * * ppResult) = 0;
		virtual HRESULT __stdcall raw_ImportCategoryS (BSTR entityTypeId, BSTR FilePath, struct IEntity * * ppResult) = 0;
		virtual HRESULT __stdcall get_ReinforcementStyles (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall get_ReinforcementUnitStyles (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall get_RebarStyles (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall get_ReinforcementGrades (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall raw_ExportObjectsToIFC (BSTR FilePath, SAFEARRAY * objectToExportIds, VARIANT_BOOL overwrite, struct IIfcExportSettings * pIfcExportSettings, int * pResult) = 0;
		virtual HRESULT __stdcall get_ReinforcementUnitStyleTemplates (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall raw_StartOperation (struct IOperation * * ppOperation) = 0;
		virtual HRESULT __stdcall raw_StartOperationWithUndo (GUID modelId, struct IOperation * * ppOperation) = 0;
		virtual HRESULT __stdcall get_ImageLinks (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall get_ModelLinks (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall get_DrawingLinks (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall get_Scales (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall get_WallReinforcementStyleTemplates (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall get_FloorReinforcementStyleTemplates (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall get_IsolatedFoundationReinforcementStyleTemplates (struct IEntityCollection * * ppCollection) = 0;
		virtual HRESULT __stdcall get_EngineeringObjectConnector (struct IEngineeringObjectConnector * * ppEngineeringObjectConnector) = 0;
		virtual HRESULT __stdcall get_IfcLinks (struct IEntityCollection * * ppCollection) = 0;
	};

	struct __declspec(uuid("86ae7780-872d-421b-aeb4-a984a5a9afc8")) IView : IDispatch {
		__declspec(property(get=GetId)) int Id;
		__declspec(property(get=GetType)) enum ViewType Type;

		int GetId();
		enum ViewType GetType();

		virtual HRESULT __stdcall get_Id (int * pId) = 0;
		virtual HRESULT __stdcall get_Type (enum ViewType * pType) = 0;
	};

	enum VisualStyle : int {
		VisualStyle_Undefined = 0,
		VisualStyle_Wireframe = 1,
		VisualStyle_Monochrome = 2,
		VisualStyle_Color = 3,
		VisualStyle_Textured = 4
	};

	struct __declspec(uuid("26e2531e-bebb-4691-817d-d47c932d05e5")) IModelView : IView {
		__declspec(property(get=GetVisualStyle,put=PutVisualStyle)) enum VisualStyle _VisualStyle;
		__declspec(property(get=GetRepresentedEntityId)) int RepresentedEntityId;

		HRESULT SetObjectsVisibility (SAFEARRAY * objectIds, VARIANT_BOOL visible_);
		VARIANT_BOOL IsObjectVisible (int objectId);
		HRESULT SetObjectsVisualStyle (SAFEARRAY * objectIds, enum VisualStyle visualStyle_);
		enum VisualStyle GetObjectVisualStyle (int objectId);
		void PutVisualStyle (enum VisualStyle pVisualStyle);
		enum VisualStyle GetVisualStyle();
		HRESULT ShowObjects (SAFEARRAY * objectIds);
		int GetRepresentedEntityId();
		SAFEARRAY * GetVisibleObjects();
		SAFEARRAY * GetHiddenObjects();
		IDispatchPtr GetInterfaceByName (_bstr_t interfaceName);

		virtual HRESULT __stdcall raw_SetObjectsVisibility (SAFEARRAY * objectIds, VARIANT_BOOL visible_) = 0;
		virtual HRESULT __stdcall raw_IsObjectVisible (int objectId, VARIANT_BOOL * pVisible) = 0;
		virtual HRESULT __stdcall raw_SetObjectsVisualStyle (SAFEARRAY * objectIds, enum VisualStyle visualStyle_) = 0;
		virtual HRESULT __stdcall raw_GetObjectVisualStyle (int objectId, enum VisualStyle * pVisualStyle) = 0;
		virtual HRESULT __stdcall put_VisualStyle (enum VisualStyle pVisualStyle) = 0;
		virtual HRESULT __stdcall get_VisualStyle (enum VisualStyle * pVisualStyle) = 0;
		virtual HRESULT __stdcall raw_ShowObjects (SAFEARRAY * objectIds) = 0;
		virtual HRESULT __stdcall get_RepresentedEntityId (int * pRepresentedEntityId) = 0;
		virtual HRESULT __stdcall raw_GetVisibleObjects (SAFEARRAY * * pVisibleObjectIds) = 0;
		virtual HRESULT __stdcall raw_GetHiddenObjects (SAFEARRAY * * pHiddenObjectIds) = 0;
		virtual HRESULT __stdcall raw_GetInterfaceByName (BSTR interfaceName, IDispatch * * ppInterface) = 0;
	};

	struct __declspec(uuid("30312349-6caa-4263-a6c9-720bf1e88f0c")) IView3DParams : IDispatch {
		__declspec(property(get=GetCamera)) ICamera3DPtr Camera;

		ICamera3DPtr GetCamera();

		virtual HRESULT __stdcall get_Camera (struct ICamera3D * * ppCamera) = 0;
	};

	struct __declspec(uuid("63004d82-81b0-4127-bd0b-d1d977081953")) ILevelViewParams : IDispatch {
		__declspec(property(get=GetLevelId)) int LevelId;

		int GetLevelId();

		virtual HRESULT __stdcall get_LevelId (int * pId) = 0;
	};

	enum EventType : int {
		EventType_EventTypeNone = 0,
		EventType_ProjectClose = 1,
		EventType_ApplicationClose = 2
	};

	struct __declspec(uuid("4a745d03-5417-4a01-8ea0-3700ae967411")) IEvent : IDispatch {
		enum EventType GetEventType();

		virtual HRESULT __stdcall raw_GetEventType (enum EventType * pType) = 0;
	};

	struct __declspec(uuid("8b4f0728-578d-43a1-b6b5-f02f75e72e92")) IApplicationCloseEvent : IEvent {
		HRESULT Prevent();

		virtual HRESULT __stdcall raw_Prevent() = 0;
	};

	struct __declspec(uuid("208b6d44-70cc-483e-a82c-35e6fec4b326")) IProjectCloseEvent : IEvent {
		HRESULT Prevent();

		virtual HRESULT __stdcall raw_Prevent() = 0;
	};

	enum PageOrientation : int {
		PageOrientation_Portrait = 1,
		PageOrientation_Landscape = 2
	};

	struct __declspec(uuid("4792885f-579e-4eda-948d-8923485715bc")) IArc2D : IDispatch {
		IPlacement2DPtr GetPlacement();
		double GetRadius();
		double GetRadiusA();
		double GetRadiusB();
		double GetBeginAngle();
		double GetEndAngle();
		double GetBeginGlobalAngle();
		double GetEndGlobalAngle();
		VARIANT_BOOL IsCircular();
		VARIANT_BOOL IsClockwise();
		struct Point2D GetCenter();

		virtual HRESULT __stdcall raw_GetPlacement (struct IPlacement2D * * ppPlacement2D) = 0;
		virtual HRESULT __stdcall raw_GetRadius (double * pPoint3D) = 0;
		virtual HRESULT __stdcall raw_GetRadiusA (double * pRadiusA) = 0;
		virtual HRESULT __stdcall raw_GetRadiusB (double * pRadiusB) = 0;
		virtual HRESULT __stdcall raw_GetBeginAngle (double * pAngle) = 0;
		virtual HRESULT __stdcall raw_GetEndAngle (double * pAngle) = 0;
		virtual HRESULT __stdcall raw_GetBeginGlobalAngle (double * pAngle) = 0;
		virtual HRESULT __stdcall raw_GetEndGlobalAngle (double * pAngle) = 0;
		virtual HRESULT __stdcall raw_IsCircular (VARIANT_BOOL * pResult) = 0;
		virtual HRESULT __stdcall raw_IsClockwise (VARIANT_BOOL * pResult) = 0;
		virtual HRESULT __stdcall raw_GetCenter (struct Point2D * pCenter) = 0;
	};

	struct __declspec(uuid("e62a932a-63af-4d16-bfcb-6dc44b729374")) IPolyCurve2D : IDispatch {
		int GetSegmentCount();
		ICurve2DPtr GetSegment (int index);

		virtual HRESULT __stdcall raw_GetSegmentCount (int * pCount) = 0;
		virtual HRESULT __stdcall raw_GetSegment (int index, struct ICurve2D * * ppCurve2D) = 0;
	};

	struct __declspec(uuid("8fd0c47d-e71c-4e29-9665-94c33e63dc79")) ICurve2DCollection : IDispatch {
		__declspec(property(get=GetCount)) int Count;

		int GetCount();
		ICurve2DPtr Get (int index);

		virtual HRESULT __stdcall get_Count (int * pCount) = 0;
		virtual HRESULT __stdcall raw_Get (int index, struct ICurve2D * * ppCurve2D) = 0;
	};

	struct __declspec(uuid("1764ec4a-3ace-43df-ae25-04cabd72288d")) IArc3D : IDispatch {
		IPlacement3DPtr GetPlacement();
		double GetRadius();
		double GetRadiusA();
		double GetRadiusB();
		double GetBeginAngle();
		double GetEndAngle();
		struct Point3D GetCenter();
		VARIANT_BOOL IsCircular();

		virtual HRESULT __stdcall raw_GetPlacement (struct IPlacement3D * * ppPlacement3D) = 0;
		virtual HRESULT __stdcall raw_GetRadius (double * pPoint3D) = 0;
		virtual HRESULT __stdcall raw_GetRadiusA (double * pRadiusA) = 0;
		virtual HRESULT __stdcall raw_GetRadiusB (double * pRadiusB) = 0;
		virtual HRESULT __stdcall raw_GetBeginAngle (double * pAngle) = 0;
		virtual HRESULT __stdcall raw_GetEndAngle (double * pAngle) = 0;
		virtual HRESULT __stdcall raw_GetCenter (struct Point3D * pCenter) = 0;
		virtual HRESULT __stdcall raw_IsCircular (VARIANT_BOOL * pResult) = 0;
	};

	struct __declspec(uuid("6d082b10-9bf0-450c-8004-148899856224")) IPolyCurve3D : IDispatch {
		int GetSegmentCount();
		ICurve3DPtr GetSegment (int index);

		virtual HRESULT __stdcall raw_GetSegmentCount (int * pCount) = 0;
		virtual HRESULT __stdcall raw_GetSegment (int index, struct ICurve3D * * ppCurve3D) = 0;
	};

	struct __declspec(uuid("4096183c-2ba3-4885-a00b-0f795eabfe9b")) IBeamParams : IDispatch {
		__declspec(property(get=GetStyleId)) int StyleId;
		__declspec(property(get=GetVerticalOffset)) double VerticalOffset;

		ICurve3DPtr GetBaseline();
		int GetStyleId();
		IPlacement2DPtr GetProfilePlacement();
		IPlacement3DPtr GetProfilePlacementOnBaseline (double param);
		double GetVerticalOffset();

		virtual HRESULT __stdcall raw_GetBaseline (struct ICurve3D * * ppBaseline) = 0;
		virtual HRESULT __stdcall get_StyleId (int * pStyleId) = 0;
		virtual HRESULT __stdcall raw_GetProfilePlacement (struct IPlacement2D * * ppPlacement2D) = 0;
		virtual HRESULT __stdcall raw_GetProfilePlacementOnBaseline (double param, struct IPlacement3D * * ppPlacement3D) = 0;
		virtual HRESULT __stdcall get_VerticalOffset (double * pOffset) = 0;
	};

	struct __declspec(uuid("30dc338c-c769-4302-9160-61fda5ba7a02")) IColumnParams : IDispatch {
		__declspec(property(get=GetHeight)) double Height;
		__declspec(property(get=GetStyleId)) int StyleId;
		__declspec(property(get=GetPosition)) struct Point3D Position;
		__declspec(property(get=GetVerticalOffset)) double VerticalOffset;

		double GetHeight();
		int GetStyleId();
		IPlacement2DPtr GetProfilePlacement();
		struct Point3D GetPosition();
		double GetVerticalOffset();

		virtual HRESULT __stdcall get_Height (double * pHeight) = 0;
		virtual HRESULT __stdcall get_StyleId (int * pStyleId) = 0;
		virtual HRESULT __stdcall raw_GetProfilePlacement (struct IPlacement2D * * ppPlacement2D) = 0;
		virtual HRESULT __stdcall get_Position (struct Point3D * pPosition) = 0;
		virtual HRESULT __stdcall get_VerticalOffset (double * pOffset) = 0;
	};

	struct __declspec(uuid("453c023d-219f-4d9f-b5eb-a35312fc370b")) IFloorParams : IDispatch {
		__declspec(property(get=GetThickness)) double Thickness;
		__declspec(property(get=GetVerticalOffset)) double VerticalOffset;

		ICurve2DPtr GetContour();
		double GetThickness();
		double GetVerticalOffset();
		SAFEARRAY * GetDependentObjectIds();

		virtual HRESULT __stdcall raw_GetContour (struct ICurve2D * * ppContour) = 0;
		virtual HRESULT __stdcall get_Thickness (double * pThickness) = 0;
		virtual HRESULT __stdcall get_VerticalOffset (double * pOffset) = 0;
		virtual HRESULT __stdcall raw_GetDependentObjectIds (SAFEARRAY * * pIds) = 0;
	};

	struct __declspec(uuid("befe6679-e31f-481d-b765-d066b431a804")) IWallContour : IDispatch {
		ICurve2DPtr GetCenterLine();
		ICurve2DPtr GetBaseline();
		ICurve2DPtr GetLeftCurve();
		ICurve2DPtr GetRightCurve();
		ICurve2DPtr GetBeginCurve();
		ICurve2DPtr GetEndCurve();
		ICurve2DPtr GetContour();

		virtual HRESULT __stdcall raw_GetCenterLine (struct ICurve2D * * ppCurve2D) = 0;
		virtual HRESULT __stdcall raw_GetBaseline (struct ICurve2D * * ppCurve2D) = 0;
		virtual HRESULT __stdcall raw_GetLeftCurve (struct ICurve2D * * ppCurve2D) = 0;
		virtual HRESULT __stdcall raw_GetRightCurve (struct ICurve2D * * ppCurve2D) = 0;
		virtual HRESULT __stdcall raw_GetBeginCurve (struct ICurve2D * * ppCurve2D) = 0;
		virtual HRESULT __stdcall raw_GetEndCurve (struct ICurve2D * * ppCurve2D) = 0;
		virtual HRESULT __stdcall raw_GetContour (struct ICurve2D * * ppCurve2D) = 0;
	};

	struct __declspec(uuid("25147c94-4ef4-4af6-8427-e4b972529d35")) IWallParams : IDispatch {
		__declspec(property(get=GetHeight)) double Height;
		__declspec(property(get=GetThickness)) double Thickness;
		__declspec(property(get=GetVerticalOffset)) double VerticalOffset;

		IWallContourPtr GetContour();
		double GetHeight();
		double GetThickness();
		double GetVerticalOffset();
		SAFEARRAY * GetDependentObjectIds();

		virtual HRESULT __stdcall raw_GetContour (struct IWallContour * * ppContour) = 0;
		virtual HRESULT __stdcall get_Height (double * pHeight) = 0;
		virtual HRESULT __stdcall get_Thickness (double * pThickness) = 0;
		virtual HRESULT __stdcall get_VerticalOffset (double * pOffset) = 0;
		virtual HRESULT __stdcall raw_GetDependentObjectIds (SAFEARRAY * * pIds) = 0;
	};

	struct __declspec(uuid("5677902a-2b9c-4ddb-a4de-ed3711c251fc")) IWindowParams : IDispatch {
		__declspec(property(get=GetPosition)) struct Point3D Position;
		__declspec(property(get=GetWidth)) double Width;
		__declspec(property(get=GetHeight)) double Height;
		__declspec(property(get=GetVerticalOffset)) double VerticalOffset;

		struct Point3D GetPosition();
		double GetWidth();
		double GetHeight();
		double GetVerticalOffset();
		SAFEARRAY * GetAffectedObjectIds();
		ICurve2DPtr CalculateProjection();

		virtual HRESULT __stdcall get_Position (struct Point3D * pPoint3D) = 0;
		virtual HRESULT __stdcall get_Width (double * pWidth) = 0;
		virtual HRESULT __stdcall get_Height (double * pHeight) = 0;
		virtual HRESULT __stdcall get_VerticalOffset (double * pOffset) = 0;
		virtual HRESULT __stdcall raw_GetAffectedObjectIds (SAFEARRAY * * pIds) = 0;
		virtual HRESULT __stdcall raw_CalculateProjection (struct ICurve2D * * ppProjection) = 0;
	};

	struct __declspec(uuid("9b61b244-db0d-448e-8912-6be23b8c1aa3")) IDoorParams : IDispatch {
		__declspec(property(get=GetPosition)) struct Point3D Position;
		__declspec(property(get=GetWidth)) double Width;
		__declspec(property(get=GetHeight)) double Height;
		__declspec(property(get=GetVerticalOffset)) double VerticalOffset;

		struct Point3D GetPosition();
		double GetWidth();
		double GetHeight();
		double GetVerticalOffset();
		SAFEARRAY * GetAffectedObjectIds();
		ICurve2DPtr CalculateProjection();

		virtual HRESULT __stdcall get_Position (struct Point3D * pPoint3D) = 0;
		virtual HRESULT __stdcall get_Width (double * pWidth) = 0;
		virtual HRESULT __stdcall get_Height (double * pHeight) = 0;
		virtual HRESULT __stdcall get_VerticalOffset (double * pOffset) = 0;
		virtual HRESULT __stdcall raw_GetAffectedObjectIds (SAFEARRAY * * pIds) = 0;
		virtual HRESULT __stdcall raw_CalculateProjection (struct ICurve2D * * ppProjection) = 0;
	};

	enum LineStyle : int {
		LineStyle_None = 0,
		LineStyle_Continuous = 1,
		LineStyle_Dashed = 2,
		LineStyle_LongDashedDotted = 3,
		LineStyle_Dotted = 4,
		LineStyle_LongDashedDoubleDotted = 5,
		LineStyle_LongDashedTriplicateDotted = 6,
		LineStyle_LongDashedShortDashed = 7,
		LineStyle_LongDashedDoubleShortDashed = 8,
		LineStyle_DashedSpaced = 9,
		LineStyle_DashedDotted = 10,
		LineStyle_DoubleDashedDotted = 11,
		LineStyle_DashedDoubleDotted = 12,
		LineStyle_DoubleDashedDoubleDotted = 13,
		LineStyle_DashedTriplicateDotted = 14,
		LineStyle_DoubleDashedTriplicateDotted = 15
	};

	struct __declspec(uuid("17a34aee-c4db-46c8-9275-3f04ac2ec0d7")) ILine3DParams : IDispatch {
		__declspec(property(get=GetVerticalOffset)) double VerticalOffset;
		__declspec(property(get=GetColor)) struct Color _Color;
		__declspec(property(get=GetStyle)) enum LineStyle Style;

		ICurve3DPtr GetBaseline();
		double GetVerticalOffset();
		struct Color GetColor();
		enum LineStyle GetStyle();

		virtual HRESULT __stdcall raw_GetBaseline (struct ICurve3D * * ppBaseline) = 0;
		virtual HRESULT __stdcall get_VerticalOffset (double * pOffset) = 0;
		virtual HRESULT __stdcall get_Color (struct Color * pColor) = 0;
		virtual HRESULT __stdcall get_Style (enum LineStyle * pStyle) = 0;
	};

	struct __declspec(uuid("777a1a04-55b4-4c5c-ba0a-87495592a31a")) IOpeningParams : IDispatch {
		__declspec(property(get=GetThickness)) double Thickness;
		__declspec(property(get=GetVerticalOffset)) double VerticalOffset;

		ICurve2DPtr GetContour();
		double GetThickness();
		double GetVerticalOffset();
		SAFEARRAY * GetAffectedObjectIds();

		virtual HRESULT __stdcall raw_GetContour (struct ICurve2D * * ppContour) = 0;
		virtual HRESULT __stdcall get_Thickness (double * pThickness) = 0;
		virtual HRESULT __stdcall get_VerticalOffset (double * pOffset) = 0;
		virtual HRESULT __stdcall raw_GetAffectedObjectIds (SAFEARRAY * * pIds) = 0;
	};

	#pragma pack(push, 8)

	struct __declspec(uuid("f11c7ef5-cad9-4ac6-9b9a-70bb3b7da59c")) RouteJointParams {
		int routeId;
		double parameter;
	};

	#pragma pack(pop)

	struct __declspec(uuid("693650f8-47fd-46a8-8380-d43f07d9ae12")) IObjectOnRoutePlacement : IDispatch {
		__declspec(property(get=GetId)) int Id;
		__declspec(property(get=Getparameter)) double parameter;

		int GetId();
		double Getparameter();

		virtual HRESULT __stdcall get_Id (int * pId) = 0;
		virtual HRESULT __stdcall get_parameter (double * pParameter) = 0;
	};

	struct __declspec(uuid("f8c12054-c1ff-4605-8c01-f1926123aa92")) IFlowSegmentPlacement : IDispatch {
		__declspec(property(get=GetId)) int Id;

		int GetId();
		ICurve3DPtr GetBaseline();

		virtual HRESULT __stdcall get_Id (int * pId) = 0;
		virtual HRESULT __stdcall raw_GetBaseline (struct ICurve3D * * ppBaseline) = 0;
	};

	struct __declspec(uuid("944227ae-299e-4b60-8557-f14b7492e6e4")) IRouteParams : IDispatch {
		__declspec(property(get=GetSourceModelObjectId)) int SourceModelObjectId;
		__declspec(property(get=GetTargetModelObjectId)) int TargetModelObjectId;
		__declspec(property(get=GetSystemStyleId)) int SystemStyleId;
		__declspec(property(get=GetSourcePortIndex)) int SourcePortIndex;
		__declspec(property(get=GetTargetPortIndex)) int TargetPortIndex;

		ICurve3DPtr GetContour();
		int GetSourceModelObjectId();
		int GetTargetModelObjectId();
		int GetSystemStyleId();
		int GetJointCount();
		struct RouteJointParams GetJointParams (int index);
		int GetObjectOnRouteCount();
		IObjectOnRoutePlacementPtr GetObjectOnRoutePlacement (int index);
		int GetFlowSegmentCount();
		IFlowSegmentPlacementPtr GetFlowSegmentPlacement (int index);
		int GetSourcePortIndex();
		int GetTargetPortIndex();

		virtual HRESULT __stdcall raw_GetContour (struct ICurve3D * * ppContour) = 0;
		virtual HRESULT __stdcall get_SourceModelObjectId (int * pModelObjectId) = 0;
		virtual HRESULT __stdcall get_TargetModelObjectId (int * pModelObjectId) = 0;
		virtual HRESULT __stdcall get_SystemStyleId (int * pStyleId) = 0;
		virtual HRESULT __stdcall raw_GetJointCount (int * pCount) = 0;
		virtual HRESULT __stdcall raw_GetJointParams (int index, struct RouteJointParams * ppRouteJoint) = 0;
		virtual HRESULT __stdcall raw_GetObjectOnRouteCount (int * pCount) = 0;
		virtual HRESULT __stdcall raw_GetObjectOnRoutePlacement (int index, struct IObjectOnRoutePlacement * * ppObjectOnRoutePlacement) = 0;
		virtual HRESULT __stdcall raw_GetFlowSegmentCount (int * pCount) = 0;
		virtual HRESULT __stdcall raw_GetFlowSegmentPlacement (int index, struct IFlowSegmentPlacement * * ppFlowSegmentPlacement) = 0;
		virtual HRESULT __stdcall get_SourcePortIndex (int * pPortIndex) = 0;
		virtual HRESULT __stdcall get_TargetPortIndex (int * pPortIndex) = 0;
	};

	struct __declspec(uuid("f21fc0e1-f0c0-46df-9ae1-54a7c03fdaa9")) IScreenshotSettings : IDispatch {
		__declspec(property(get=GetWidth,put=PutWidth)) int Width;
		__declspec(property(get=GetHeight,put=PutHeight)) int Height;

		void PutWidth (int pWidth);
		int GetWidth();
		void PutHeight (int pHeight);
		int GetHeight();

		virtual HRESULT __stdcall put_Width (int pWidth) = 0;
		virtual HRESULT __stdcall get_Width (int * pWidth) = 0;
		virtual HRESULT __stdcall put_Height (int pHeight) = 0;
		virtual HRESULT __stdcall get_Height (int * pHeight) = 0;
	};

	struct __declspec(uuid("d3af0c63-0929-4e7f-a4a6-04849dbfa2e6")) IScreenshotService : IDispatch {
		IImagePtr MakeScreenshot (struct IScreenshotSettings * pSettings);
		IScreenshotSettingsPtr CreateSettings();

		virtual HRESULT __stdcall raw_MakeScreenshot (struct IScreenshotSettings * pSettings, struct IImage * * ppImage) = 0;
		virtual HRESULT __stdcall raw_CreateSettings (struct IScreenshotSettings * * ppSettings) = 0;
	};

	enum RoofEdgeShape : int {
		RoofEdgeShape_SingleSlope = 0,
		RoofEdgeShape_Gable = 1
	};

	struct __declspec(uuid("05cc27df-c496-4fbc-be1a-a0b116c4d07b")) IRoofSlopes : IDispatch {
		__declspec(property(get=GetCount)) int Count;

		int GetCount();
		enum RoofEdgeShape GetRoofEdgeShape (int slopeIndex);
		HRESULT SetRoofEdgeShape (int slopeIndex, enum RoofEdgeShape RoofEdgeShape);
		double GetSlopeAngle (int slopeIndex);
		HRESULT SetSlopeAngle (int slopeIndex, double slopeAngle);
		double GetSlopeLevel (int slopeIndex);
		HRESULT SetSlopeLevel (int slopeIndex, double slopeLevel);
		double GetOverhang (int slopeIndex);
		HRESULT SetOverhang (int slopeIndex, double overhang);

		virtual HRESULT __stdcall get_Count (int * pCount) = 0;
		virtual HRESULT __stdcall raw_GetRoofEdgeShape (int slopeIndex, enum RoofEdgeShape * pRoofEdgeShape) = 0;
		virtual HRESULT __stdcall raw_SetRoofEdgeShape (int slopeIndex, enum RoofEdgeShape RoofEdgeShape) = 0;
		virtual HRESULT __stdcall raw_GetSlopeAngle (int slopeIndex, double * pSlopeAngle) = 0;
		virtual HRESULT __stdcall raw_SetSlopeAngle (int slopeIndex, double slopeAngle) = 0;
		virtual HRESULT __stdcall raw_GetSlopeLevel (int slopeIndex, double * pSlopeLevel) = 0;
		virtual HRESULT __stdcall raw_SetSlopeLevel (int slopeIndex, double slopeLevel) = 0;
		virtual HRESULT __stdcall raw_GetOverhang (int slopeIndex, double * pOverhang) = 0;
		virtual HRESULT __stdcall raw_SetOverhang (int slopeIndex, double overhang) = 0;
	};

	enum PipeConnectionType : int {
		PipeConnectionType_Weld = 0,
		PipeConnectionType_Flange = 1,
		PipeConnectionType_Compressed = 2,
		PipeConnectionType_Socket = 3,
		PipeConnectionType_Thread = 4,
		PipeConnectionType_QuickConnection = 5,
		PipeConnectionType_Glue = 6,
		PipeConnectionType_FusionWelding = 7,
		PipeConnectionType_Grooved = 8
	};

	struct __declspec(uuid("ef141d65-6fe0-4360-9b93-9ad624b16c25")) IPortPipeParams : IDispatch {
		__declspec(property(get=GetConnectionType)) enum PipeConnectionType ConnectionType;
		__declspec(property(get=GetNominalDiameter)) double NominalDiameter;

		enum PipeConnectionType GetConnectionType();
		double GetNominalDiameter();

		virtual HRESULT __stdcall get_ConnectionType (enum PipeConnectionType * pPipeConnectionType) = 0;
		virtual HRESULT __stdcall get_NominalDiameter (double * pNominalDiameter) = 0;
	};

	enum DuctConnectionType : int {
		DuctConnectionType_Drawband = 0,
		DuctConnectionType_SlipOn = 1,
		DuctConnectionType_DriveSlip = 2,
		DuctConnectionType_Weld = 3,
		DuctConnectionType_Flange = 4
	};

	enum DuctProfile : int {
		DuctProfile_Circle = 0,
		DuctProfile_Rect = 1
	};

	struct __declspec(uuid("6278350a-7888-4e51-9a29-acbd6b651d55")) IPortDuctParams : IDispatch {
		__declspec(property(get=GetConnectionType)) enum DuctConnectionType ConnectionType;
		__declspec(property(get=GetDuctProfile)) enum DuctProfile _DuctProfile;
		__declspec(property(get=GetNominalDiameter)) double NominalDiameter;
		__declspec(property(get=GetNominalWidth)) double NominalWidth;
		__declspec(property(get=GetNominalHeight)) double NominalHeight;

		enum DuctConnectionType GetConnectionType();
		enum DuctProfile GetDuctProfile();
		double GetNominalDiameter();
		double GetNominalWidth();
		double GetNominalHeight();

		virtual HRESULT __stdcall get_ConnectionType (enum DuctConnectionType * pDuctConnectionType) = 0;
		virtual HRESULT __stdcall get_DuctProfile (enum DuctProfile * pDuctProfile) = 0;
		virtual HRESULT __stdcall get_NominalDiameter (double * pNominalDiameter) = 0;
		virtual HRESULT __stdcall get_NominalWidth (double * pNominalWidth) = 0;
		virtual HRESULT __stdcall get_NominalHeight (double * pNominalHeight) = 0;
	};

	enum PipeThreadSize : int {
		PipeThreadSize_D0_25 = 0,
		PipeThreadSize_D0_375 = 1,
		PipeThreadSize_D0_50 = 2,
		PipeThreadSize_D0_75 = 3,
		PipeThreadSize_D1_0 = 4,
		PipeThreadSize_D1_25 = 5,
		PipeThreadSize_D1_50 = 6,
		PipeThreadSize_D2_0 = 7,
		PipeThreadSize_D2_5 = 8,
		PipeThreadSize_D3_0 = 9,
		PipeThreadSize_D3_5 = 10,
		PipeThreadSize_D4_0 = 11,
		PipeThreadSize_D5_0 = 12,
		PipeThreadSize_D6_0 = 13
	};

	struct __declspec(uuid("90752235-e251-4746-b5da-bf10025429b4")) IMath : IDispatch {
		ICurve3DPtr CreateLineSegment3D (struct Point3D startPoint, struct Point3D endPoint);
		ICurve3DPtr CreateArc3DByCenterStartEndPoints (struct Point3D centerPoint, struct Point3D startPoint, struct Point3D endPoint, VARIANT_BOOL clockwise);
		ICurve3DPtr CreateArc3DByThreePoints (struct Point3D startPoint, struct Point3D intermediatePoint, struct Point3D endPoint);
		ICurve3DPtr CreateCircle3D (struct Point3D centerPoint, struct Vector3D normalVector, double radius);
		ICurve3DPtr CreateCompositeCurve3D (SAFEARRAY * curves);
		ICurve2DPtr CreateLineSegment2D (struct Point2D startPoint, struct Point2D endPoint);
		ICurve2DPtr CreateArc2DByCenterStartEndPoints (struct Point2D centerPoint, struct Point2D startPoint, struct Point2D endPoint, VARIANT_BOOL clockwise);
		ICurve2DPtr CreateArc2DByThreePoints (struct Point2D startPoint, struct Point2D intermediatePoint, struct Point2D endPoint);
		ICurve2DPtr CreateCircle2D (struct Point2D centerPoint, double radius);
		ICurve2DPtr CreateCompositeCurve2D (SAFEARRAY * curves);

		virtual HRESULT __stdcall raw_CreateLineSegment3D (struct Point3D startPoint, struct Point3D endPoint, struct ICurve3D * * ppCurve3D) = 0;
		virtual HRESULT __stdcall raw_CreateArc3DByCenterStartEndPoints (struct Point3D centerPoint, struct Point3D startPoint, struct Point3D endPoint, VARIANT_BOOL clockwise, struct ICurve3D * * ppCurve3D) = 0;
		virtual HRESULT __stdcall raw_CreateArc3DByThreePoints (struct Point3D startPoint, struct Point3D intermediatePoint, struct Point3D endPoint, struct ICurve3D * * ppCurve3D) = 0;
		virtual HRESULT __stdcall raw_CreateCircle3D (struct Point3D centerPoint, struct Vector3D normalVector, double radius, struct ICurve3D * * ppCurve3D) = 0;
		virtual HRESULT __stdcall raw_CreateCompositeCurve3D (SAFEARRAY * curves, struct ICurve3D * * ppCurve3D) = 0;
		virtual HRESULT __stdcall raw_CreateLineSegment2D (struct Point2D startPoint, struct Point2D endPoint, struct ICurve2D * * ppCurve2D) = 0;
		virtual HRESULT __stdcall raw_CreateArc2DByCenterStartEndPoints (struct Point2D centerPoint, struct Point2D startPoint, struct Point2D endPoint, VARIANT_BOOL clockwise, struct ICurve2D * * ppCurve2D) = 0;
		virtual HRESULT __stdcall raw_CreateArc2DByThreePoints (struct Point2D startPoint, struct Point2D intermediatePoint, struct Point2D endPoint, struct ICurve2D * * ppCurve2D) = 0;
		virtual HRESULT __stdcall raw_CreateCircle2D (struct Point2D centerPoint, double radius, struct ICurve2D * * ppCurve2D) = 0;
		virtual HRESULT __stdcall raw_CreateCompositeCurve2D (SAFEARRAY * curves, struct ICurve2D * * ppCurve2D) = 0;
	};

	struct __declspec(uuid("175a3cec-1e06-47fa-aaf6-ce8148d06f54")) _ISelectionEvents : IDispatch {
		HRESULT OnModelSelectionChanged();

		virtual HRESULT __stdcall raw_OnModelSelectionChanged() = 0;
	};

	struct __declspec(uuid("23317d10-a9d1-49e1-b2f2-00d4e5507140")) _IApplicationEvents : IDispatch {

		HRESULT OnBeforeApplicationClose (struct IApplicationCloseEvent * pEvent);
		HRESULT OnBeforeProjectClose (struct IProjectCloseEvent * pEvent);
		HRESULT OnProjectCreated();
		HRESULT OnProjectOpened (_bstr_t filePath_);
		HRESULT OnProjectSaved (_bstr_t filePath_);
		HRESULT OnProjectClosed();

		virtual HRESULT __stdcall raw_OnBeforeApplicationClose (struct IApplicationCloseEvent * pEvent) = 0;
		virtual HRESULT __stdcall raw_OnBeforeProjectClose (struct IProjectCloseEvent * pEvent) = 0;
		virtual HRESULT __stdcall raw_OnProjectCreated() = 0;
		virtual HRESULT __stdcall raw_OnProjectOpened (BSTR filePath_) = 0;
		virtual HRESULT __stdcall raw_OnProjectSaved (BSTR filePath_) = 0;
		virtual HRESULT __stdcall raw_OnProjectClosed() = 0;
	};

	struct __declspec(uuid("c9e692d6-2163-4fd3-be06-11b723316b6e")) _IActionEvents : IDispatch {
		HRESULT OnTriggered();
		HRESULT OnToggled (VARIANT_BOOL Checked);

		virtual HRESULT __stdcall raw_OnTriggered() = 0;
		virtual HRESULT __stdcall raw_OnToggled (VARIANT_BOOL Checked) = 0;
	};

	struct __declspec(uuid("c94a380a-02f2-427b-8fd3-7d6572e16556")) Application;
		// [ default ] interface IApplication
		// interface IExternalConnection

	struct __declspec(uuid("7ef3b7d7-8854-49dd-bc2c-81cca3fb4b47")) ISelection : IDispatch {
		SAFEARRAY * GetSelectedObjects();
		HRESULT SetSelectedObjects (SAFEARRAY * objectIds);

		virtual HRESULT __stdcall raw_GetSelectedObjects (SAFEARRAY * * pObjectIds) = 0;
		virtual HRESULT __stdcall raw_SetSelectedObjects (SAFEARRAY * objectIds) = 0;
	};

	#pragma pack(push, 4)

	struct __declspec(uuid("993e83d1-ee95-4eed-9da9-0c962d7502dd")) ProductVersion {
		int Major;
		int Minor;
		int Patch;
		int BuildNumber;
	};

	#pragma pack(pop)

	struct __declspec(uuid("ee71e77c-64bb-45a1-9311-9945c13a82dc")) IApplication : IDispatch {
		__declspec(property(get=GetEnabled,put=PutEnabled)) VARIANT_BOOL Enabled;
		__declspec(property(get=GetActiveView)) IViewPtr ActiveView;
		__declspec(property(get=GetUI)) IUIPtr UI;
		__declspec(property(get=GetProject)) IProjectPtr Project;
		__declspec(property(get=GetSelection)) ISelectionPtr Selection;
		__declspec(property(get=GetVisible,put=PutVisible)) VARIANT_BOOL Visible;
		__declspec(property(get=GetVersion)) struct ProductVersion Version;
		__declspec(property(get=GetVersionS)) _bstr_t VersionS;
		__declspec(property(get=GetLastError,put=PutLastError)) _bstr_t LastError;
		__declspec(property(get=GetHasLastError)) VARIANT_BOOL HasLastError;
		__declspec(property(get=GetMath)) IMathPtr Math;
		__declspec(property(get=GetProductName)) _bstr_t ProductName;

		HRESULT Enable();
		HRESULT Disable();
		void PutEnabled (VARIANT_BOOL pEnabled);
		VARIANT_BOOL GetEnabled();
		int GetMainWindowHandle();
		IViewPtr GetActiveView();
		IUIPtr GetUI();
		VARIANT_BOOL HasProject();
		IProjectPtr GetProject();
		ISelectionPtr GetSelection();
		_bstr_t GetCurrentLocale();
		int CreateProject();
		int CreateProjectFromTemplate (_bstr_t fileName);
		int ImportIfcProject (_bstr_t fileName);
		int OpenProject (_bstr_t fileName);
		int CloseProject (VARIANT_BOOL discardChanges);
		HRESULT Quit();
		VARIANT_BOOL GetVisible();
		void PutVisible (VARIANT_BOOL pVisible);
		IIfcExportSettingsPtr CreateIfcExportSettings();
		struct ProductVersion GetVersion();
		_bstr_t GetVersionS();
		_bstr_t GetLastError();
		void PutLastError (_bstr_t pLastError);
		VARIANT_BOOL GetHasLastError();
		IViewPtr OpenViewByEntity (int RepresentedEntityId);
		IMathPtr GetMath();
		_bstr_t GetProductName();

		virtual HRESULT __stdcall raw_Enable() = 0;
		virtual HRESULT __stdcall raw_Disable() = 0;
		virtual HRESULT __stdcall put_Enabled (VARIANT_BOOL pEnabled) = 0;
		virtual HRESULT __stdcall get_Enabled (VARIANT_BOOL * pEnabled) = 0;
		virtual HRESULT __stdcall raw_GetMainWindowHandle (int * pHwnd) = 0;
		virtual HRESULT __stdcall get_ActiveView (struct IView * * ppView) = 0;
		virtual HRESULT __stdcall get_UI (struct IUI * * ppUI) = 0;
		virtual HRESULT __stdcall raw_HasProject (VARIANT_BOOL * pResult) = 0;
		virtual HRESULT __stdcall get_Project (struct IProject * * ppProject) = 0;
		virtual HRESULT __stdcall get_Selection (struct ISelection * * ppSelection) = 0;
		virtual HRESULT __stdcall raw_GetCurrentLocale (BSTR * pLocale) = 0;
		virtual HRESULT __stdcall raw_CreateProject (int * pResult) = 0;
		virtual HRESULT __stdcall raw_CreateProjectFromTemplate (BSTR fileName, int * pResult) = 0;
		virtual HRESULT __stdcall raw_ImportIfcProject (BSTR fileName, int * pResult) = 0;
		virtual HRESULT __stdcall raw_OpenProject (BSTR fileName, int * pResult) = 0;
		virtual HRESULT __stdcall raw_CloseProject (VARIANT_BOOL discardChanges, int * pResult) = 0;
		virtual HRESULT __stdcall raw_Quit() = 0;
		virtual HRESULT __stdcall get_Visible (VARIANT_BOOL * pVisible) = 0;
		virtual HRESULT __stdcall put_Visible (VARIANT_BOOL pVisible) = 0;
		virtual HRESULT __stdcall raw_CreateIfcExportSettings (struct IIfcExportSettings * * ppIfcExportSettings) = 0;
		virtual HRESULT __stdcall get_Version (struct ProductVersion * pProductVersion) = 0;
		virtual HRESULT __stdcall get_VersionS (BSTR * pProductVersion) = 0;
		virtual HRESULT __stdcall get_LastError (BSTR * pLastError) = 0;
		virtual HRESULT __stdcall put_LastError (BSTR pLastError) = 0;
		virtual HRESULT __stdcall get_HasLastError (VARIANT_BOOL * pResult) = 0;
		virtual HRESULT __stdcall raw_OpenViewByEntity (int RepresentedEntityId, struct IView * * ppView) = 0;
		virtual HRESULT __stdcall get_Math (struct IMath * * ppMath) = 0;
		virtual HRESULT __stdcall get_ProductName (BSTR * pProductName) = 0;
	};

	// interface IImage wrapper method implementations

	inline HRESULT IImage::LoadFromData (SAFEARRAY * data, enum ImageFormat format) {
		HRESULT _hr = raw_LoadFromData(data, format);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IImage::LoadFromFile (_bstr_t path_) {
		HRESULT _hr = raw_LoadFromFile(path_);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IImage::SaveToFile (_bstr_t path_, enum ImageFormat format) {
		HRESULT _hr = raw_SaveToFile(path_, format);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline SAFEARRAY * IImage::SaveToData (enum ImageFormat format) {
		SAFEARRAY * _result = 0;
		HRESULT _hr = raw_SaveToData(format, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	// interface IAction wrapper method implementations

	inline GUID IAction::GetId() {
		GUID _result;
		HRESULT _hr = get_Id(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline _bstr_t IAction::GetDisplayName() {
		BSTR _result = 0;
		HRESULT _hr = get_DisplayName(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline void IAction::PutDisplayName (_bstr_t pName) {
		HRESULT _hr = put_DisplayName(pName);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline _bstr_t IAction::GetToolTip() {
		BSTR _result = 0;
		HRESULT _hr = get_ToolTip(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline void IAction::PutToolTip (_bstr_t pToolTip) {
		HRESULT _hr = put_ToolTip(pToolTip);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline VARIANT_BOOL IAction::GetEnabled() {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = get_Enabled(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline void IAction::PutEnabled (VARIANT_BOOL Enabled) {
		HRESULT _hr = put_Enabled(Enabled);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline VARIANT_BOOL IAction::GetCheckable() {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = get_Checkable(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline void IAction::PutCheckable (VARIANT_BOOL pCheckable) {
		HRESULT _hr = put_Checkable(pCheckable);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline VARIANT_BOOL IAction::GetChecked() {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = get_Checked(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline void IAction::PutChecked (VARIANT_BOOL pChecked) {
		HRESULT _hr = put_Checked(pChecked);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline void IAction::PutIcon (struct IImage * _arg1) {
		HRESULT _hr = put_Icon(_arg1);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline VARIANT_BOOL IAction::GetVisible() {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = get_Visible(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline void IAction::PutVisible (VARIANT_BOOL pVisible) {
		HRESULT _hr = put_Visible(pVisible);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline HRESULT IAction::Trigger() {
		HRESULT _hr = raw_Trigger();
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	// interface ISplitButton wrapper method implementations

	inline HRESULT ISplitButton::AddAction (struct IAction * pAction) {
		HRESULT _hr = raw_AddAction(pAction);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT ISplitButton::AddSeparator() {
		HRESULT _hr = raw_AddSeparator();
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline GUID ISplitButton::GetId() {
		GUID _result;
		HRESULT _hr = get_Id(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline _bstr_t ISplitButton::GetIdS() {
		BSTR _result = 0;
		HRESULT _hr = get_IdS(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline VARIANT_BOOL ISplitButton::GetTextVisible() {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = get_TextVisible(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline void ISplitButton::PutTextVisible (VARIANT_BOOL pTextVisible) {
		HRESULT _hr = put_TextVisible(pTextVisible);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	// interface IDropDownButton wrapper method implementations

	inline HRESULT IDropDownButton::AddAction (struct IAction * pAction) {
		HRESULT _hr = raw_AddAction(pAction);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IDropDownButton::AddSeparator() {
		HRESULT _hr = raw_AddSeparator();
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline void IDropDownButton::PutIcon (struct IImage * _arg1) {
		HRESULT _hr = put_Icon(_arg1);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline void IDropDownButton::PutToolTip (_bstr_t pToolTip) {
		HRESULT _hr = put_ToolTip(pToolTip);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline _bstr_t IDropDownButton::GetToolTip() {
		BSTR _result = 0;
		HRESULT _hr = get_ToolTip(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline GUID IDropDownButton::GetId() {
		GUID _result;
		HRESULT _hr = get_Id(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline _bstr_t IDropDownButton::GetIdS() {
		BSTR _result = 0;
		HRESULT _hr = get_IdS(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline VARIANT_BOOL IDropDownButton::GetTextVisible() {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = get_TextVisible(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline void IDropDownButton::PutTextVisible (VARIANT_BOOL pTextVisible) {
		HRESULT _hr = put_TextVisible(pTextVisible);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	// interface IToolButton wrapper method implementations

	inline IActionPtr IToolButton::GetAction() {
		struct IAction * _result = 0;
		HRESULT _hr = get_Action(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IActionPtr(_result, false);
	}

	inline void IToolButton::PutAction (struct IAction * ppAction) {
		HRESULT _hr = put_Action(ppAction);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline GUID IToolButton::GetId() {
		GUID _result;
		HRESULT _hr = get_Id(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline _bstr_t IToolButton::GetIdS() {
		BSTR _result = 0;
		HRESULT _hr = get_IdS(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline VARIANT_BOOL IToolButton::GetTextVisible() {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = get_TextVisible(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline void IToolButton::PutTextVisible (VARIANT_BOOL pTextVisible) {
		HRESULT _hr = put_TextVisible(pTextVisible);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	// interface IUIPanelExtension wrapper method implementations

	inline HRESULT IUIPanelExtension::AddToolButton (struct IAction * pAction) {
		HRESULT _hr = raw_AddToolButton(pAction);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IUIPanelExtension::AddSplitButton (struct ISplitButton * pSplitButton) {
		HRESULT _hr = raw_AddSplitButton(pSplitButton);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IUIPanelExtension::AddDropDownButton (struct IDropDownButton * pDropDownButton) {
		HRESULT _hr = raw_AddDropDownButton(pDropDownButton);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IUIPanelExtension::AddToolButton2 (struct IToolButton * pToolButton) {
		HRESULT _hr = raw_AddToolButton2(pToolButton);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	// interface IContextMenuNodeItem wrapper method implementations

	inline void IContextMenuNodeItem::PutDisplayName (_bstr_t displayName_) {
		HRESULT _hr = put_DisplayName(displayName_);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline IContextMenuItemPtr IContextMenuNodeItem::AddActionItem (struct IAction * pAction) {
		struct IContextMenuItem * _result = 0;
		HRESULT _hr = raw_AddActionItem(pAction, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IContextMenuItemPtr(_result, false);
	}

	inline IContextMenuNodeItemPtr IContextMenuNodeItem::AddNodeItem() {
		struct IContextMenuNodeItem * _result = 0;
		HRESULT _hr = raw_AddNodeItem(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IContextMenuNodeItemPtr(_result, false);
	}

	inline HRESULT IContextMenuNodeItem::AddSeparator() {
		HRESULT _hr = raw_AddSeparator();
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline _bstr_t IContextMenuNodeItem::GetDisplayName() {
		BSTR _result = 0;
		HRESULT _hr = get_DisplayName(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	// interface IContextMenu wrapper method implementations

	inline IContextMenuItemPtr IContextMenu::AddActionItem (struct IAction * pAction) {
		struct IContextMenuItem * _result = 0;
		HRESULT _hr = raw_AddActionItem(pAction, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IContextMenuItemPtr(_result, false);
	}

	inline IContextMenuNodeItemPtr IContextMenu::AddNodeItem() {
		struct IContextMenuNodeItem * _result = 0;
		HRESULT _hr = raw_AddNodeItem(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IContextMenuNodeItemPtr(_result, false);
	}

	inline HRESULT IContextMenu::AddSeparator() {
		HRESULT _hr = raw_AddSeparator();
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	// interface IUI wrapper method implementations

	inline IActionPtr IUI::CreateAction() {
		struct IAction * _result = 0;
		HRESULT _hr = raw_CreateAction(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IActionPtr(_result, false);
	}

	inline IActionPtr IUI::CreateActionWithId (GUID Id) {
		struct IAction * _result = 0;
		HRESULT _hr = raw_CreateActionWithId(Id, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IActionPtr(_result, false);
	}

	inline IActionPtr IUI::GetAction (GUID Id) {
		struct IAction * _result = 0;
		HRESULT _hr = raw_GetAction(Id, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IActionPtr(_result, false);
	}

	inline HRESULT IUI::AddExtensionToPrimaryPanel (struct IUIPanelExtension * pUIPanelExtension) {
		HRESULT _hr = raw_AddExtensionToPrimaryPanel(pUIPanelExtension);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IUI::AddExtensionToActionsPanel (struct IUIPanelExtension * pUIPanelExtension, enum ViewType viewType_) {
		HRESULT _hr = raw_AddExtensionToActionsPanel(pUIPanelExtension, viewType_);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IUI::AddToolButtonToActionsPanel (struct IAction * pAction, enum ViewType viewType_) {
		HRESULT _hr = raw_AddToolButtonToActionsPanel(pAction, viewType_);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline IUIPanelExtensionPtr IUI::CreateUIPanelExtension() {
		struct IUIPanelExtension * _result = 0;
		HRESULT _hr = raw_CreateUIPanelExtension(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IUIPanelExtensionPtr(_result, false);
	}

	inline ISplitButtonPtr IUI::CreateSplitButton (struct IAction * pDefaultAction) {
		struct ISplitButton * _result = 0;
		HRESULT _hr = raw_CreateSplitButton(pDefaultAction, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ISplitButtonPtr(_result, false);
	}

	inline IDropDownButtonPtr IUI::CreateDropDownButton() {
		struct IDropDownButton * _result = 0;
		HRESULT _hr = raw_CreateDropDownButton(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IDropDownButtonPtr(_result, false);
	}

	inline HRESULT IUI::AddContextMenu (GUID * pId, struct IContextMenu * pMmenu, enum ViewType viewType_, enum ContextMenuShowCase showCase_) {
		HRESULT _hr = raw_AddContextMenu(pId, pMmenu, viewType_, showCase_);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IUI::ShowMessageBox (enum MessageIcon icon_, _bstr_t title_, _bstr_t text_) {
		HRESULT _hr = raw_ShowMessageBox(icon_, title_, text_);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline _bstr_t IUI::ShowSaveFileDialog (_bstr_t title, _bstr_t defaultPath, _bstr_t filter) {
		BSTR _result = 0;
		HRESULT _hr = raw_ShowSaveFileDialog(title, defaultPath, filter, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline _bstr_t IUI::ShowOpenFileDialog (_bstr_t title_, _bstr_t defaultPath, _bstr_t filter) {
		BSTR _result = 0;
		HRESULT _hr = raw_ShowOpenFileDialog(title_, defaultPath, filter, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline IImagePtr IUI::CreateImage() {
		struct IImage * _result = 0;
		HRESULT _hr = raw_CreateImage(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IImagePtr(_result, false);
	}

	inline IContextMenuPtr IUI::CreateContextMenu() {
		struct IContextMenu * _result = 0;
		HRESULT _hr = raw_CreateContextMenu(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IContextMenuPtr(_result, false);
	}

	inline HRESULT IUI::AddExportAction (struct IAction * pAction) {
		HRESULT _hr = raw_AddExportAction(pAction);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IUI::AddContextMenuS (_bstr_t uniqueId_, struct IContextMenu * pMmenu, enum ViewType viewType_, enum ContextMenuShowCase showCase_) {
		HRESULT _hr = raw_AddContextMenuS(uniqueId_, pMmenu, viewType_, showCase_);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline VARIANT_BOOL IUI::GetControlVisibility (GUID Id) {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = raw_GetControlVisibility(Id, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline HRESULT IUI::SetControlVisibility (GUID Id, VARIANT_BOOL isVisible) {
		HRESULT _hr = raw_SetControlVisibility(Id, isVisible);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline VARIANT_BOOL IUI::GetControlVisibilityS (_bstr_t Id) {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = raw_GetControlVisibilityS(Id, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline HRESULT IUI::SetControlVisibilityS (_bstr_t Id, VARIANT_BOOL isVisible) {
		HRESULT _hr = raw_SetControlVisibilityS(Id, isVisible);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline IToolButtonPtr IUI::CreateToolButton() {
		struct IToolButton * _result = 0;
		HRESULT _hr = raw_CreateToolButton(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IToolButtonPtr(_result, false);
	}

	inline IToolButtonPtr IUI::CreateToolButtonWithId (GUID Id) {
		struct IToolButton * _result = 0;
		HRESULT _hr = raw_CreateToolButtonWithId(Id, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IToolButtonPtr(_result, false);
	}

	inline ISplitButtonPtr IUI::CreateSplitButtonWithId (GUID Id, struct IAction * pDefaultAction) {
		struct ISplitButton * _result = 0;
		HRESULT _hr = raw_CreateSplitButtonWithId(Id, pDefaultAction, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ISplitButtonPtr(_result, false);
	}

	inline IDropDownButtonPtr IUI::CreateDropDownButtonWithId (GUID Id) {
		struct IDropDownButton * _result = 0;
		HRESULT _hr = raw_CreateDropDownButtonWithId(Id, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IDropDownButtonPtr(_result, false);
	}

	inline IToolButtonPtr IUI::CreateToolButtonWithIdS (_bstr_t Id) {
		struct IToolButton * _result = 0;
		HRESULT _hr = raw_CreateToolButtonWithIdS(Id, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IToolButtonPtr(_result, false);
	}

	inline ISplitButtonPtr IUI::CreateSplitButtonWithIdS (_bstr_t Id, struct IAction * pDefaultAction) {
		struct ISplitButton * _result = 0;
		HRESULT _hr = raw_CreateSplitButtonWithIdS(Id, pDefaultAction, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ISplitButtonPtr(_result, false);
	}

	inline IDropDownButtonPtr IUI::CreateDropDownButtonWithIdS (_bstr_t Id) {
		struct IDropDownButton * _result = 0;
		HRESULT _hr = raw_CreateDropDownButtonWithIdS(Id, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IDropDownButtonPtr(_result, false);
	}

	// interface IOperation wrapper method implementations

	inline HRESULT IOperation::Start() {
		HRESULT _hr = raw_Start();
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IOperation::Apply() {
		HRESULT _hr = raw_Apply();
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IOperation::Rollback() {
		HRESULT _hr = raw_Rollback();
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	// interface IProperty wrapper method implementations

	inline HRESULT IProperty::SetDoubleValue (double value_) {
		HRESULT _hr = raw_SetDoubleValue(value_);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IProperty::SetStringValue (_bstr_t value_) {
		HRESULT _hr = raw_SetStringValue(value_);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline double IProperty::GetDoubleValue() {
		double _result = 0;
		HRESULT _hr = raw_GetDoubleValue(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline _bstr_t IProperty::GetStringValue() {
		BSTR _result = 0;
		HRESULT _hr = raw_GetStringValue(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline enum PropertyType IProperty::GetType() {
		enum PropertyType _result;
		HRESULT _hr = get_Type(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline HRESULT IProperty::ResetValue() {
		HRESULT _hr = raw_ResetValue();
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline VARIANT_BOOL IProperty::HasValue() {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = raw_HasValue(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline GUID IProperty::GetId() {
		GUID _result;
		HRESULT _hr = get_Id(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline _bstr_t IProperty::GetIdS() {
		BSTR _result = 0;
		HRESULT _hr = get_IdS(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline _bstr_t IProperty::GetName() {
		BSTR _result = 0;
		HRESULT _hr = get_Name(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline HRESULT IProperty::SetAngleValue (double value_, enum AngleUnit unit) {
		HRESULT _hr = raw_SetAngleValue(value_, unit);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IProperty::SetAreaValue (double value_, enum AreaUnit unit) {
		HRESULT _hr = raw_SetAreaValue(value_, unit);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IProperty::SetBooleanValue (VARIANT_BOOL value_) {
		HRESULT _hr = raw_SetBooleanValue(value_);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IProperty::SetEnumerationValue (_bstr_t value_) {
		HRESULT _hr = raw_SetEnumerationValue(value_);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IProperty::SetIntegerValue (int value_) {
		HRESULT _hr = raw_SetIntegerValue(value_);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IProperty::SetLengthValue (double value_, enum LengthUnit unit) {
		HRESULT _hr = raw_SetLengthValue(value_, unit);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IProperty::SetLogicalValue (enum Logical value_) {
		HRESULT _hr = raw_SetLogicalValue(value_);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IProperty::SetMassValue (double value_, enum MassUnit unit) {
		HRESULT _hr = raw_SetMassValue(value_, unit);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IProperty::SetVolumeValue (double value_, enum VolumeUnit unit) {
		HRESULT _hr = raw_SetVolumeValue(value_, unit);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline double IProperty::GetAngleValue (enum AngleUnit unit) {
		double _result = 0;
		HRESULT _hr = raw_GetAngleValue(unit, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double IProperty::GetAreaValue (enum AreaUnit unit) {
		double _result = 0;
		HRESULT _hr = raw_GetAreaValue(unit, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline VARIANT_BOOL IProperty::GetBooleanValue() {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = raw_GetBooleanValue(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline _bstr_t IProperty::GetEnumerationValue() {
		BSTR _result = 0;
		HRESULT _hr = raw_GetEnumerationValue(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline int IProperty::GetIntegerValue() {
		int _result = 0;
		HRESULT _hr = raw_GetIntegerValue(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double IProperty::GetLengthValue (enum LengthUnit unit) {
		double _result = 0;
		HRESULT _hr = raw_GetLengthValue(unit, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline enum Logical IProperty::GetLogicalValue() {
		enum Logical _result;
		HRESULT _hr = raw_GetLogicalValue(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double IProperty::GetMassValue (enum MassUnit unit) {
		double _result = 0;
		HRESULT _hr = raw_GetMassValue(unit, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double IProperty::GetVolumeValue (enum VolumeUnit unit) {
		double _result = 0;
		HRESULT _hr = raw_GetVolumeValue(unit, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	// interface IGuidCollection wrapper method implementations

	inline int IGuidCollection::GetCount() {
		int _result = 0;
		HRESULT _hr = get_Count(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline GUID IGuidCollection::Get (int index) {
		GUID _result;
		HRESULT _hr = raw_Get(index, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline _bstr_t IGuidCollection::GetS (int index) {
		BSTR _result = 0;
		HRESULT _hr = raw_GetS(index, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	// interface IPropertyContainer wrapper method implementations

	inline IPropertyPtr IPropertyContainer::Get (GUID propertyId) {
		struct IProperty * _result = 0;
		HRESULT _hr = raw_Get(propertyId, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IPropertyPtr(_result, false);
	}

	inline VARIANT_BOOL IPropertyContainer::Contains (GUID propertyId) {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = raw_Contains(propertyId, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IPropertyPtr IPropertyContainer::GetS (_bstr_t propertyId) {
		struct IProperty * _result = 0;
		HRESULT _hr = raw_GetS(propertyId, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IPropertyPtr(_result, false);
	}

	inline VARIANT_BOOL IPropertyContainer::ContainsS (_bstr_t propertyId) {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = raw_ContainsS(propertyId, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IGuidCollectionPtr IPropertyContainer::GetIds() {
		struct IGuidCollection * _result = 0;
		HRESULT _hr = raw_GetIds(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IGuidCollectionPtr(_result, false);
	}

	// interface IPropertyDescription wrapper method implementations

	inline _bstr_t IPropertyDescription::GetName() {
		BSTR _result = 0;
		HRESULT _hr = get_Name(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline enum PropertyType IPropertyDescription::GetType() {
		enum PropertyType _result;
		HRESULT _hr = get_Type(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline HRESULT IPropertyDescription::SetEnumerationItems (SAFEARRAY * enumItems) {
		HRESULT _hr = raw_SetEnumerationItems(enumItems);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline SAFEARRAY * IPropertyDescription::GetEnumerationItems() {
		SAFEARRAY * _result = 0;
		HRESULT _hr = raw_GetEnumerationItems(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	// interface IPropertyManager wrapper method implementations

	inline HRESULT IPropertyManager::RegisterProperty (GUID propertyId, struct PropertyDescription description_) {
		HRESULT _hr = raw_RegisterProperty(propertyId, description_);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IPropertyManager::UnregisterProperty (GUID propertyId) {
		HRESULT _hr = raw_UnregisterProperty(propertyId);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline int IPropertyManager::GetPropertyCount() {
		int _result = 0;
		HRESULT _hr = get_PropertyCount(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline GUID IPropertyManager::GetPropertyId (int index) {
		GUID _result;
		HRESULT _hr = raw_GetPropertyId(index, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline struct PropertyDescription IPropertyManager::GetPropertyDescription (GUID propertyId) {
		struct PropertyDescription _result;
		HRESULT _hr = raw_GetPropertyDescription(propertyId, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline VARIANT_BOOL IPropertyManager::IsPropertyRegistered (GUID propertyId) {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = raw_IsPropertyRegistered(propertyId, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline HRESULT IPropertyManager::AssignPropertyToType (GUID propertyId, GUID objectType_) {
		HRESULT _hr = raw_AssignPropertyToType(propertyId, objectType_);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IPropertyManager::UnassignPropertyFromType (GUID propertyId, GUID objectType_) {
		HRESULT _hr = raw_UnassignPropertyFromType(propertyId, objectType_);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline VARIANT_BOOL IPropertyManager::IsPropertyAssignedToType (GUID propertyId, GUID objectType_) {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = raw_IsPropertyAssignedToType(propertyId, objectType_, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline HRESULT IPropertyManager::RegisterPropertyS (_bstr_t propertyId, _bstr_t name_, enum PropertyType type_) {
		HRESULT _hr = raw_RegisterPropertyS(propertyId, name_, type_);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IPropertyManager::UnregisterPropertyS (_bstr_t propertyId) {
		HRESULT _hr = raw_UnregisterPropertyS(propertyId);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline _bstr_t IPropertyManager::GetPropertyIdS (int index) {
		BSTR _result = 0;
		HRESULT _hr = raw_GetPropertyIdS(index, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline _bstr_t IPropertyManager::GetPropertyNameS (_bstr_t propertyId) {
		BSTR _result = 0;
		HRESULT _hr = raw_GetPropertyNameS(propertyId, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline enum PropertyType IPropertyManager::GetPropertyTypeS (_bstr_t propertyId) {
		enum PropertyType _result;
		HRESULT _hr = raw_GetPropertyTypeS(propertyId, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline VARIANT_BOOL IPropertyManager::IsPropertyRegisteredS (_bstr_t propertyId) {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = raw_IsPropertyRegisteredS(propertyId, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline HRESULT IPropertyManager::AssignPropertyToTypeS (_bstr_t propertyId, _bstr_t objectType_) {
		HRESULT _hr = raw_AssignPropertyToTypeS(propertyId, objectType_);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IPropertyManager::UnassignPropertyFromTypeS (_bstr_t propertyId, _bstr_t objectType_) {
		HRESULT _hr = raw_UnassignPropertyFromTypeS(propertyId, objectType_);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline VARIANT_BOOL IPropertyManager::IsPropertyAssignedToTypeS (_bstr_t propertyId, _bstr_t objectType_) {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = raw_IsPropertyAssignedToTypeS(propertyId, objectType_, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline _bstr_t IPropertyManager::GetPropertyName (GUID propertyId) {
		BSTR _result = 0;
		HRESULT _hr = raw_GetPropertyName(propertyId, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline enum PropertyType IPropertyManager::GetPropertyType (GUID propertyId) {
		enum PropertyType _result;
		HRESULT _hr = raw_GetPropertyType(propertyId, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IPropertyDescriptionPtr IPropertyManager::CreatePropertyDescription (_bstr_t name_, enum PropertyType type_) {
		struct IPropertyDescription * _result = 0;
		HRESULT _hr = raw_CreatePropertyDescription(name_, type_, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IPropertyDescriptionPtr(_result, false);
	}

	inline HRESULT IPropertyManager::RegisterProperty2 (GUID propertyId, struct IPropertyDescription * pDescription) {
		HRESULT _hr = raw_RegisterProperty2(propertyId, pDescription);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IPropertyManager::RegisterPropertyS2 (_bstr_t propertyId, struct IPropertyDescription * pDescription) {
		HRESULT _hr = raw_RegisterPropertyS2(propertyId, pDescription);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline IPropertyDescriptionPtr IPropertyManager::GetPropertyDescription2 (GUID propertyId) {
		struct IPropertyDescription * _result = 0;
		HRESULT _hr = raw_GetPropertyDescription2(propertyId, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IPropertyDescriptionPtr(_result, false);
	}

	inline IPropertyDescriptionPtr IPropertyManager::GetPropertyDescription2S (_bstr_t propertyId) {
		struct IPropertyDescription * _result = 0;
		HRESULT _hr = raw_GetPropertyDescription2S(propertyId, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IPropertyDescriptionPtr(_result, false);
	}

	inline HRESULT IPropertyManager::UpdateEnumValues (GUID propertyId, SAFEARRAY * pEnumItems, SAFEARRAY * pSubstitutionTable) {
		HRESULT _hr = raw_UpdateEnumValues(propertyId, pEnumItems, pSubstitutionTable);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IPropertyManager::SetPropertyName (GUID propertyId, _bstr_t Name) {
		HRESULT _hr = raw_SetPropertyName(propertyId, Name);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline _bstr_t IPropertyManager::GetExpression (GUID propertyId, GUID objectType_) {
		BSTR _result = 0;
		HRESULT _hr = raw_GetExpression(propertyId, objectType_, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline HRESULT IPropertyManager::SetExpression (GUID propertyId, GUID objectType_, _bstr_t expression) {
		HRESULT _hr = raw_SetExpression(propertyId, objectType_, expression);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline VARIANT_BOOL IPropertyManager::GetCSVExportFlag (GUID propertyId, GUID objectType_) {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = raw_GetCSVExportFlag(propertyId, objectType_, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline HRESULT IPropertyManager::SetCSVExportFlag (GUID propertyId, GUID objectType_, VARIANT_BOOL value) {
		HRESULT _hr = raw_SetCSVExportFlag(propertyId, objectType_, value);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline _bstr_t IPropertyManager::GetExpressionS (_bstr_t propertyId, _bstr_t objectType_) {
		BSTR _result = 0;
		HRESULT _hr = raw_GetExpressionS(propertyId, objectType_, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline HRESULT IPropertyManager::SetExpressionS (_bstr_t propertyId, _bstr_t objectType_, _bstr_t expression) {
		HRESULT _hr = raw_SetExpressionS(propertyId, objectType_, expression);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline VARIANT_BOOL IPropertyManager::GetCSVExportFlagS (_bstr_t propertyId, _bstr_t objectType_) {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = raw_GetCSVExportFlagS(propertyId, objectType_, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline HRESULT IPropertyManager::SetCSVExportFlagS (_bstr_t propertyId, _bstr_t objectType_, VARIANT_BOOL value) {
		HRESULT _hr = raw_SetCSVExportFlagS(propertyId, objectType_, value);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	// interface IParameterDefinition wrapper method implementations

	inline enum ParameterType IParameterDefinition::GetParameterType() {
		enum ParameterType _result;
		HRESULT _hr = get_ParameterType(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline _bstr_t IParameterDefinition::GetText() {
		BSTR _result = 0;
		HRESULT _hr = get_Text(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline SAFEARRAY * IParameterDefinition::GetEnumerationItemTexts() {
		SAFEARRAY * _result = 0;
		HRESULT _hr = get_EnumerationItemTexts(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline _bstr_t IParameterDefinition::GetName() {
		BSTR _result = 0;
		HRESULT _hr = get_Name(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline _bstr_t IParameterDefinition::GetGroupText() {
		BSTR _result = 0;
		HRESULT _hr = get_GroupText(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline GUID IParameterDefinition::GetReferencedEntityType() {
		GUID _result;
		HRESULT _hr = get_ReferencedEntityType(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline _bstr_t IParameterDefinition::GetReferencedEntityTypeS() {
		BSTR _result = 0;
		HRESULT _hr = get_ReferencedEntityTypeS(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	// interface IParameter wrapper method implementations

	inline enum ParameterValueType IParameter::GetValueType() {
		enum ParameterValueType _result;
		HRESULT _hr = get_ValueType(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IParameterDefinitionPtr IParameter::GetDefinition() {
		struct IParameterDefinition * _result = 0;
		HRESULT _hr = get_Definition(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IParameterDefinitionPtr(_result, false);
	}

	inline VARIANT_BOOL IParameter::GetBoolValue() {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = raw_GetBoolValue(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline HRESULT IParameter::SetBoolValue (VARIANT_BOOL value) {
		HRESULT _hr = raw_SetBoolValue(value);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline int IParameter::GetIntValue() {
		int _result = 0;
		HRESULT _hr = raw_GetIntValue(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline HRESULT IParameter::SetIntValue (int value) {
		HRESULT _hr = raw_SetIntValue(value);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline double IParameter::GetDoubleValue() {
		double _result = 0;
		HRESULT _hr = raw_GetDoubleValue(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline HRESULT IParameter::SetDoubleValue (double value) {
		HRESULT _hr = raw_SetDoubleValue(value);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline _bstr_t IParameter::GetStringValue() {
		BSTR _result = 0;
		HRESULT _hr = raw_GetStringValue(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline HRESULT IParameter::SetStringValue (_bstr_t value) {
		HRESULT _hr = raw_SetStringValue(value);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline GUID IParameter::GetId() {
		GUID _result;
		HRESULT _hr = get_Id(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline _bstr_t IParameter::GetIdS() {
		BSTR _result = 0;
		HRESULT _hr = get_IdS(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline VARIANT_BOOL IParameter::GetHasValue() {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = get_HasValue(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline VARIANT_BOOL IParameter::GetIsReadOnly() {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = get_IsReadOnly(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	// interface IParameterContainer wrapper method implementations

	inline IGuidCollectionPtr IParameterContainer::GetIds() {
		struct IGuidCollection * _result = 0;
		HRESULT _hr = raw_GetIds(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IGuidCollectionPtr(_result, false);
	}

	inline VARIANT_BOOL IParameterContainer::Contains (GUID Id) {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = raw_Contains(Id, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IParameterPtr IParameterContainer::Get (GUID Id) {
		struct IParameter * _result = 0;
		HRESULT _hr = raw_Get(Id, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IParameterPtr(_result, false);
	}

	inline VARIANT_BOOL IParameterContainer::ContainsS (_bstr_t Id) {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = raw_ContainsS(Id, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IParameterPtr IParameterContainer::GetS (_bstr_t Id) {
		struct IParameter * _result = 0;
		HRESULT _hr = raw_GetS(Id, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IParameterPtr(_result, false);
	}

	// interface IQuantity wrapper method implementations

	inline VARIANT_BOOL IQuantity::HasValue() {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = raw_HasValue(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline enum QuantityType IQuantity::GetType() {
		enum QuantityType _result;
		HRESULT _hr = get_Type(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline int IQuantity::AsCount() {
		int _result = 0;
		HRESULT _hr = raw_AsCount(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double IQuantity::AsLength (enum LengthUnit unit) {
		double _result = 0;
		HRESULT _hr = raw_AsLength(unit, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double IQuantity::AsArea (enum AreaUnit unit) {
		double _result = 0;
		HRESULT _hr = raw_AsArea(unit, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double IQuantity::AsVolume (enum VolumeUnit unit) {
		double _result = 0;
		HRESULT _hr = raw_AsVolume(unit, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double IQuantity::AsMass (enum MassUnit unit) {
		double _result = 0;
		HRESULT _hr = raw_AsMass(unit, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double IQuantity::AsAngle (enum AngleUnit unit) {
		double _result = 0;
		HRESULT _hr = raw_AsAngle(unit, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double IQuantity::AsElevation (enum LengthUnit unit) {
		double _result = 0;
		HRESULT _hr = raw_AsElevation(unit, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline _bstr_t IQuantity::GetText() {
		BSTR _result = 0;
		HRESULT _hr = get_Text(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline _bstr_t IQuantity::GetName() {
		BSTR _result = 0;
		HRESULT _hr = get_Name(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	// interface IQuantityContainer wrapper method implementations

	inline VARIANT_BOOL IQuantityContainer::Contains (GUID Id) {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = raw_Contains(Id, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IQuantityPtr IQuantityContainer::Get (GUID Id) {
		struct IQuantity * _result = 0;
		HRESULT _hr = raw_Get(Id, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IQuantityPtr(_result, false);
	}

	inline VARIANT_BOOL IQuantityContainer::ContainsS (_bstr_t Id) {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = raw_ContainsS(Id, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IQuantityPtr IQuantityContainer::GetS (_bstr_t Id) {
		struct IQuantity * _result = 0;
		HRESULT _hr = raw_GetS(Id, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IQuantityPtr(_result, false);
	}

	// interface IModelObject wrapper method implementations

	inline GUID IModelObject::GetObjectType() {
		GUID _result;
		HRESULT _hr = get_ObjectType(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline int IModelObject::GetId() {
		int _result = 0;
		HRESULT _hr = get_Id(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline _bstr_t IModelObject::GetName() {
		BSTR _result = 0;
		HRESULT _hr = get_Name(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline IPropertyContainerPtr IModelObject::GetProperties() {
		struct IPropertyContainer * _result = 0;
		HRESULT _hr = raw_GetProperties(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IPropertyContainerPtr(_result, false);
	}

	inline IQuantityContainerPtr IModelObject::GetQuantities() {
		struct IQuantityContainer * _result = 0;
		HRESULT _hr = raw_GetQuantities(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IQuantityContainerPtr(_result, false);
	}

	inline _bstr_t IModelObject::GetObjectTypeS() {
		BSTR _result = 0;
		HRESULT _hr = get_ObjectTypeS(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline IDispatchPtr IModelObject::GetInterfaceByName (_bstr_t interfaceName) {
		IDispatch * _result = 0;
		HRESULT _hr = raw_GetInterfaceByName(interfaceName, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IDispatchPtr(_result, false);
	}

	inline IParameterContainerPtr IModelObject::GetParameters() {
		struct IParameterContainer * _result = 0;
		HRESULT _hr = raw_GetParameters(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IParameterContainerPtr(_result, false);
	}

	inline GUID IModelObject::GetUniqueId() {
		GUID _result;
		HRESULT _hr = get_UniqueId(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline _bstr_t IModelObject::GetUniqueIdS() {
		BSTR _result = 0;
		HRESULT _hr = get_UniqueIdS(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline VARIANT_BOOL IModelObject::GetPinned() {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = get_Pinned(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline void IModelObject::PutPinned (VARIANT_BOOL pPinned) {
		HRESULT _hr = put_Pinned(pPinned);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	// interface ITransform3D wrapper method implementations

	inline double ITransform3D::GetElement (int rowIndex, int columnIndex) {
		double _result = 0;
		HRESULT _hr = raw_GetElement(rowIndex, columnIndex, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline HRESULT ITransform3D::SetElement (int rowIndex, int columnIndex, double value) {
		HRESULT _hr = raw_SetElement(rowIndex, columnIndex, value);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT ITransform3D::AddTranslation (struct Vector3D * translation) {
		HRESULT _hr = raw_AddTranslation(translation);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT ITransform3D::AddRotation (struct Vector3D * axis, double angle) {
		HRESULT _hr = raw_AddRotation(axis, angle);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline ITransform3DPtr ITransform3D::GetCopy() {
		struct ITransform3D * _result = 0;
		HRESULT _hr = raw_GetCopy(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ITransform3DPtr(_result, false);
	}

	inline ITransform3DPtr ITransform3D::GetMultiplied (struct ITransform3D * pTransform) {
		struct ITransform3D * _result = 0;
		HRESULT _hr = raw_GetMultiplied(pTransform, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ITransform3DPtr(_result, false);
	}

	inline struct Point3D ITransform3D::TransformPoint (struct Point3D * pPoint) {
		struct Point3D _result;
		HRESULT _hr = raw_TransformPoint(pPoint, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline struct Vector3D ITransform3D::TransformVector (struct Vector3D * pVector) {
		struct Vector3D _result;
		HRESULT _hr = raw_TransformVector(pVector, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	// interface IPlacement3D wrapper method implementations

	inline struct Point3D IPlacement3D::GetOrigin() {
		struct Point3D _result;
		HRESULT _hr = get_Origin(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline struct Vector3D IPlacement3D::GetAxisX() {
		struct Vector3D _result;
		HRESULT _hr = get_AxisX(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline struct Vector3D IPlacement3D::GetAxisY() {
		struct Vector3D _result;
		HRESULT _hr = get_AxisY(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline struct Vector3D IPlacement3D::GetAxisZ() {
		struct Vector3D _result;
		HRESULT _hr = get_AxisZ(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline VARIANT_BOOL IPlacement3D::IsOrthogonal() {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = raw_IsOrthogonal(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline VARIANT_BOOL IPlacement3D::IsNormal() {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = raw_IsNormal(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline VARIANT_BOOL IPlacement3D::IsLeft() {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = raw_IsLeft(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline ITransform3DPtr IPlacement3D::GetTransformFrom() {
		struct ITransform3D * _result = 0;
		HRESULT _hr = raw_GetTransformFrom(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ITransform3DPtr(_result, false);
	}

	inline ITransform3DPtr IPlacement3D::GetTransformInto() {
		struct ITransform3D * _result = 0;
		HRESULT _hr = raw_GetTransformInto(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ITransform3DPtr(_result, false);
	}

	inline HRESULT IPlacement3D::Move (struct Vector3D vector_) {
		HRESULT _hr = raw_Move(vector_);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IPlacement3D::Rotate (struct Vector3D axis_, double angle_) {
		HRESULT _hr = raw_Rotate(axis_, angle_);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IPlacement3D::Transform (struct ITransform3D * pTransform) {
		HRESULT _hr = raw_Transform(pTransform);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline IPlacement3DPtr IPlacement3D::GetCopy() {
		struct IPlacement3D * _result = 0;
		HRESULT _hr = raw_GetCopy(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IPlacement3DPtr(_result, false);
	}

	inline HRESULT IPlacement3D::Rotate2 (struct Point3D axisOrigin_, struct Vector3D axis_, double angle_) {
		HRESULT _hr = raw_Rotate2(axisOrigin_, axis_, angle_);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline struct Placement3D IPlacement3D::GetPlacement() {
		struct Placement3D _result;
		HRESULT _hr = get_Placement(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	// interface ILevel wrapper method implementations

	inline double ILevel::GetElevation() {
		double _result = 0;
		HRESULT _hr = get_Elevation(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline _bstr_t ILevel::GetLevelName() {
		BSTR _result = 0;
		HRESULT _hr = get_LevelName(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline IPlacement3DPtr ILevel::GetPlacement() {
		struct IPlacement3D * _result = 0;
		HRESULT _hr = get_Placement(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IPlacement3DPtr(_result, false);
	}

	// interface ITransform2D wrapper method implementations

	inline double ITransform2D::GetElement (int rowIndex, int columnIndex) {
		double _result = 0;
		HRESULT _hr = raw_GetElement(rowIndex, columnIndex, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline HRESULT ITransform2D::SetElement (int rowIndex, int columnIndex, double value) {
		HRESULT _hr = raw_SetElement(rowIndex, columnIndex, value);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT ITransform2D::AddTranslation (struct Vector2D translation) {
		HRESULT _hr = raw_AddTranslation(translation);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT ITransform2D::AddRotation (struct Point2D pivot, double angle) {
		HRESULT _hr = raw_AddRotation(pivot, angle);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline ITransform2DPtr ITransform2D::GetCopy() {
		struct ITransform2D * _result = 0;
		HRESULT _hr = raw_GetCopy(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ITransform2DPtr(_result, false);
	}

	inline struct Point2D ITransform2D::TransformPoint (struct Point2D * pPoint) {
		struct Point2D _result;
		HRESULT _hr = raw_TransformPoint(pPoint, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline struct Vector2D ITransform2D::TransformVector (struct Vector2D * pVector) {
		struct Vector2D _result;
		HRESULT _hr = raw_TransformVector(pVector, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline ITransform3DPtr ITransform2D::CreateTransform3D() {
		struct ITransform3D * _result = 0;
		HRESULT _hr = raw_CreateTransform3D(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ITransform3DPtr(_result, false);
	}

	// interface ICurve3D wrapper method implementations

	inline enum Curve3DType ICurve3D::GetCurve3DType() {
		enum Curve3DType _result;
		HRESULT _hr = get_Curve3DType(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline ICurve3DPtr ICurve3D::GetCopy() {
		struct ICurve3D * _result = 0;
		HRESULT _hr = raw_GetCopy(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ICurve3DPtr(_result, false);
	}

	inline struct Point3D ICurve3D::GetBeginPoint() {
		struct Point3D _result;
		HRESULT _hr = raw_GetBeginPoint(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline struct Point3D ICurve3D::GetEndPoint() {
		struct Point3D _result;
		HRESULT _hr = raw_GetEndPoint(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline struct Point3D ICurve3D::GetPointOn (double param) {
		struct Point3D _result;
		HRESULT _hr = raw_GetPointOn(param, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double ICurve3D::GetMinParameter() {
		double _result = 0;
		HRESULT _hr = get_MinParameter(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double ICurve3D::GetMaxParameter() {
		double _result = 0;
		HRESULT _hr = get_MaxParameter(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double ICurve3D::GetLength() {
		double _result = 0;
		HRESULT _hr = raw_GetLength(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline struct Cube ICurve3D::GetGabarit() {
		struct Cube _result;
		HRESULT _hr = raw_GetGabarit(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline VARIANT_BOOL ICurve3D::IsClosed() {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = raw_IsClosed(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double ICurve3D::GetParameterAtDistance (double startT, double distance, int direction) {
		double _result = 0;
		HRESULT _hr = raw_GetParameterAtDistance(startT, distance, direction, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline ICurve3DPtr ICurve3D::GetTrimmed (double t1, double t2, int sense) {
		struct ICurve3D * _result = 0;
		HRESULT _hr = raw_GetTrimmed(t1, t2, sense, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ICurve3DPtr(_result, false);
	}

	inline double ICurve3D::PointProjection (struct Point3D * point) {
		double _result = 0;
		HRESULT _hr = raw_PointProjection(point, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IDispatchPtr ICurve3D::GetInterfaceByName (_bstr_t interfaceName) {
		IDispatch * _result = 0;
		HRESULT _hr = raw_GetInterfaceByName(interfaceName, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IDispatchPtr(_result, false);
	}

	inline ICurve3DPtr ICurve3D::GetTransformed (struct ITransform3D * pTransfrom) {
		struct ICurve3D * _result = 0;
		HRESULT _hr = raw_GetTransformed(pTransfrom, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ICurve3DPtr(_result, false);
	}

	inline ICurve3DPtr ICurve3D::GetOffseted (struct Vector3D * pOffset) {
		struct ICurve3D * _result = 0;
		HRESULT _hr = raw_GetOffseted(pOffset, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ICurve3DPtr(_result, false);
	}

	inline int ICurve3D::GetTrackingId() {
		int _result = 0;
		HRESULT _hr = get_TrackingId(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	// interface ICurve2D wrapper method implementations

	inline enum Curve2DType ICurve2D::GetCurve2DType() {
		enum Curve2DType _result;
		HRESULT _hr = get_Curve2DType(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline ICurve2DPtr ICurve2D::GetCopy() {
		struct ICurve2D * _result = 0;
		HRESULT _hr = raw_GetCopy(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ICurve2DPtr(_result, false);
	}

	inline struct Point2D ICurve2D::GetBeginPoint() {
		struct Point2D _result;
		HRESULT _hr = raw_GetBeginPoint(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline struct Point2D ICurve2D::GetEndPoint() {
		struct Point2D _result;
		HRESULT _hr = raw_GetEndPoint(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline struct Point2D ICurve2D::GetPointOn (double param) {
		struct Point2D _result;
		HRESULT _hr = raw_GetPointOn(param, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double ICurve2D::GetMinParameter() {
		double _result = 0;
		HRESULT _hr = get_MinParameter(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double ICurve2D::GetMaxParameter() {
		double _result = 0;
		HRESULT _hr = get_MaxParameter(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double ICurve2D::GetLength() {
		double _result = 0;
		HRESULT _hr = raw_GetLength(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline HRESULT ICurve2D::GetGabarit (struct Point2D * p1, struct Point2D * p2) {
		HRESULT _hr = raw_GetGabarit(p1, p2);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline VARIANT_BOOL ICurve2D::IsClosed() {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = raw_IsClosed(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double ICurve2D::GetParameterAtDistance (double startT, double distance, int direction) {
		double _result = 0;
		HRESULT _hr = raw_GetParameterAtDistance(startT, distance, direction, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline ICurve2DPtr ICurve2D::GetTrimmed (double t1, double t2, int sense) {
		struct ICurve2D * _result = 0;
		HRESULT _hr = raw_GetTrimmed(t1, t2, sense, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ICurve2DPtr(_result, false);
	}

	inline double ICurve2D::PointProjection (struct Point2D point) {
		double _result = 0;
		HRESULT _hr = raw_PointProjection(point, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IDispatchPtr ICurve2D::GetInterfaceByName (_bstr_t interfaceName) {
		IDispatch * _result = 0;
		HRESULT _hr = raw_GetInterfaceByName(interfaceName, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IDispatchPtr(_result, false);
	}

	inline ICurve2DPtr ICurve2D::GetTransformed (struct ITransform2D * pTransfrom) {
		struct ICurve2D * _result = 0;
		HRESULT _hr = raw_GetTransformed(pTransfrom, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ICurve2DPtr(_result, false);
	}

	inline ICurve3DPtr ICurve2D::CreateCurve3D (struct IPlacement3D * pPlacement) {
		struct ICurve3D * _result = 0;
		HRESULT _hr = raw_CreateCurve3D(pPlacement, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ICurve3DPtr(_result, false);
	}

	inline ICurve2DPtr ICurve2D::GetOffseted (double offset) {
		struct ICurve2D * _result = 0;
		HRESULT _hr = raw_GetOffseted(offset, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ICurve2DPtr(_result, false);
	}

	inline int ICurve2D::GetTrackingId() {
		int _result = 0;
		HRESULT _hr = get_TrackingId(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	// interface IRegion2D wrapper method implementations

	inline int IRegion2D::GetContourCount() {
		int _result = 0;
		HRESULT _hr = raw_GetContourCount(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline ICurve2DPtr IRegion2D::GetContour (int index) {
		struct ICurve2D * _result = 0;
		HRESULT _hr = raw_GetContour(index, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ICurve2DPtr(_result, false);
	}

	inline ICurve2DPtr IRegion2D::GetOuterContour() {
		struct ICurve2D * _result = 0;
		HRESULT _hr = raw_GetOuterContour(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ICurve2DPtr(_result, false);
	}

	// interface IRoomRegionDescription wrapper method implementations

	inline int IRoomRegionDescription::GetObjectId (int regionCurveTrackingId) {
		int _result = 0;
		HRESULT _hr = raw_GetObjectId(regionCurveTrackingId, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IRegion2DPtr IRoomRegionDescription::GetRegion() {
		struct IRegion2D * _result = 0;
		HRESULT _hr = get_Region(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IRegion2DPtr(_result, false);
	}

	// interface IRoom wrapper method implementations

	inline _bstr_t IRoom::GetRoomName() {
		BSTR _result = 0;
		HRESULT _hr = get_RoomName(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline _bstr_t IRoom::GetRoomNumber() {
		BSTR _result = 0;
		HRESULT _hr = get_RoomNumber(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline struct Point2D IRoom::GetMarkerPosition() {
		struct Point2D _result;
		HRESULT _hr = get_MarkerPosition(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline VARIANT_BOOL IRoom::GetAutomatic() {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = get_Automatic(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline struct Point2D IRoom::GetControlPoint() {
		struct Point2D _result;
		HRESULT _hr = get_ControlPoint(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IRoomRegionDescriptionPtr IRoom::CalculateRegion (struct Point2D roomPoint) {
		struct IRoomRegionDescription * _result = 0;
		HRESULT _hr = raw_CalculateRegion(roomPoint, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IRoomRegionDescriptionPtr(_result, false);
	}

	inline void IRoom::PutMarkerPosition (struct Point2D pMarkerPosition) {
		HRESULT _hr = put_MarkerPosition(pMarkerPosition);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline void IRoom::PutControlPoint (struct Point2D pControlPoint) {
		HRESULT _hr = put_ControlPoint(pControlPoint);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	// interface IPort wrapper method implementations

	inline _bstr_t IPort::GetName() {
		BSTR _result = 0;
		HRESULT _hr = get_Name(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline enum FlowDirectionType IPort::GetFlowDirection() {
		enum FlowDirectionType _result;
		HRESULT _hr = get_FlowDirection(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline SAFEARRAY * IPort::GetAvailableSystemCategories() {
		SAFEARRAY * _result = 0;
		HRESULT _hr = get_AvailableSystemCategories(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IDispatchPtr IPort::GetPortConnectionParams() {
		IDispatch * _result = 0;
		HRESULT _hr = get_PortConnectionParams(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IDispatchPtr(_result, false);
	}

	inline VARIANT_BOOL IPort::HasConnectionWithRoute() {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = raw_HasConnectionWithRoute(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline int IPort::ConnectedRouteId() {
		int _result = 0;
		HRESULT _hr = raw_ConnectedRouteId(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline struct Placement3D IPort::GetPlacement() {
		struct Placement3D _result;
		HRESULT _hr = get_Placement(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline enum PortRole IPort::GetPortRole() {
		enum PortRole _result;
		HRESULT _hr = get_PortRole(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	// interface IEntityWithPorts wrapper method implementations

	inline int IEntityWithPorts::GetCount() {
		int _result = 0;
		HRESULT _hr = get_Count(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IPortPtr IEntityWithPorts::GetByIndex (int index) {
		struct IPort * _result = 0;
		HRESULT _hr = raw_GetByIndex(index, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IPortPtr(_result, false);
	}

	// interface IObjectWithMaterial wrapper method implementations

	inline int IObjectWithMaterial::GetMaterialId() {
		int _result = 0;
		HRESULT _hr = get_MaterialId(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline VARIANT_BOOL IObjectWithMaterial::HasMaterial() {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = raw_HasMaterial(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	// interface ILayer wrapper method implementations

	inline int ILayer::GetMaterialId() {
		int _result = 0;
		HRESULT _hr = get_MaterialId(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IQuantityContainerPtr ILayer::GetQuantities() {
		struct IQuantityContainer * _result = 0;
		HRESULT _hr = raw_GetQuantities(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IQuantityContainerPtr(_result, false);
	}

	// interface ILayerCollection wrapper method implementations

	inline int ILayerCollection::GetCount() {
		int _result = 0;
		HRESULT _hr = get_Count(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline ILayerPtr ILayerCollection::Get (int index) {
		struct ILayer * _result = 0;
		HRESULT _hr = raw_Get(index, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ILayerPtr(_result, false);
	}

	// interface IObjectWithLayeredMaterial wrapper method implementations

	inline LayeredMaterialIdGroupPair IObjectWithLayeredMaterial::GetLayeredMaterialIdGroupPair() {
		LayeredMaterialIdGroupPair _result;
		HRESULT _hr = raw_GetLayeredMaterialIdGroupPair(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline VARIANT_BOOL IObjectWithLayeredMaterial::HasLayeredMaterial() {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = raw_HasLayeredMaterial(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline ILayerCollectionPtr IObjectWithLayeredMaterial::GetLayers() {
		struct ILayerCollection * _result = 0;
		HRESULT _hr = raw_GetLayers(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ILayerCollectionPtr(_result, false);
	}

	inline int IObjectWithLayeredMaterial::GetLayeredMaterialId() {
		int _result = 0;
		HRESULT _hr = get_LayeredMaterialId(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	// interface ILevelObject wrapper method implementations

	inline int ILevelObject::GetLevelId() {
		int _result = 0;
		HRESULT _hr = get_LevelId(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double ILevelObject::GetVerticalOffset() {
		double _result = 0;
		HRESULT _hr = get_VerticalOffset(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double ILevelObject::GetPlacementElevation() {
		double _result = 0;
		HRESULT _hr = get_PlacementElevation(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double ILevelObject::GetElevationAboveLevel() {
		double _result = 0;
		HRESULT _hr = get_ElevationAboveLevel(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IPlacement3DPtr ILevelObject::GetPlacement() {
		struct IPlacement3D * _result = 0;
		HRESULT _hr = raw_GetPlacement(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IPlacement3DPtr(_result, false);
	}

	inline HRESULT ILevelObject::SetPlacement (struct IPlacement3D * pPlacement) {
		HRESULT _hr = raw_SetPlacement(pPlacement);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	// interface IObjectWithLink wrapper method implementations

	inline int IObjectWithLink::GetLinkId() {
		int _result = 0;
		HRESULT _hr = get_LinkId(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline GUID IObjectWithLink::GetLinkType() {
		GUID _result;
		HRESULT _hr = get_LinkType(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	// interface IObjectWithMark wrapper method implementations

	inline _bstr_t IObjectWithMark::GetMark() {
		BSTR _result = 0;
		HRESULT _hr = get_Mark(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	// interface IEntity wrapper method implementations

	inline int IEntity::GetId() {
		int _result = 0;
		HRESULT _hr = get_Id(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline _bstr_t IEntity::GetName() {
		BSTR _result = 0;
		HRESULT _hr = get_Name(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline GUID IEntity::GetUniqueId() {
		GUID _result;
		HRESULT _hr = get_UniqueId(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline _bstr_t IEntity::GetUniqueIdS() {
		BSTR _result = 0;
		HRESULT _hr = get_UniqueIdS(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline GUID IEntity::GetTypeId() {
		GUID _result;
		HRESULT _hr = get_TypeId(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline _bstr_t IEntity::GetTypeIdS() {
		BSTR _result = 0;
		HRESULT _hr = get_TypeIdS(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline IDispatchPtr IEntity::GetInterfaceByName (_bstr_t interfaceName) {
		IDispatch * _result = 0;
		HRESULT _hr = raw_GetInterfaceByName(interfaceName, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IDispatchPtr(_result, false);
	}

	// interface IObjectWithInsulation wrapper method implementations

	inline IEntityPtr IObjectWithInsulation::GetInsulation() {
		struct IEntity * _result = 0;
		HRESULT _hr = get_Insulation(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityPtr(_result, false);
	}

	// interface IPlacement3DCollection wrapper method implementations

	inline int IPlacement3DCollection::GetCount() {
		int _result = 0;
		HRESULT _hr = get_Count(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IPlacement3DPtr IPlacement3DCollection::Get (int index) {
		struct IPlacement3D * _result = 0;
		HRESULT _hr = raw_Get(index, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IPlacement3DPtr(_result, false);
	}

	// interface IRebarUsage wrapper method implementations

	inline int IRebarUsage::GetStyleId() {
		int _result = 0;
		HRESULT _hr = get_StyleId(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IQuantityContainerPtr IRebarUsage::GetQuantities() {
		struct IQuantityContainer * _result = 0;
		HRESULT _hr = raw_GetQuantities(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IQuantityContainerPtr(_result, false);
	}

	inline ICurve3DPtr IRebarUsage::GetRebarGeometry() {
		struct ICurve3D * _result = 0;
		HRESULT _hr = raw_GetRebarGeometry(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ICurve3DPtr(_result, false);
	}

	inline IPlacement3DCollectionPtr IRebarUsage::GetPlacements() {
		struct IPlacement3DCollection * _result = 0;
		HRESULT _hr = raw_GetPlacements(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IPlacement3DCollectionPtr(_result, false);
	}

	// interface IRebarUsageCollection wrapper method implementations

	inline int IRebarUsageCollection::GetCount() {
		int _result = 0;
		HRESULT _hr = get_Count(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IRebarUsagePtr IRebarUsageCollection::Get (int index) {
		struct IRebarUsage * _result = 0;
		HRESULT _hr = raw_Get(index, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IRebarUsagePtr(_result, false);
	}

	// interface IReinforcementUnitUsage wrapper method implementations

	inline int IReinforcementUnitUsage::GetStyleId() {
		int _result = 0;
		HRESULT _hr = get_StyleId(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IQuantityContainerPtr IReinforcementUnitUsage::GetQuantities() {
		struct IQuantityContainer * _result = 0;
		HRESULT _hr = raw_GetQuantities(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IQuantityContainerPtr(_result, false);
	}

	inline IPlacement3DCollectionPtr IReinforcementUnitUsage::GetPlacements() {
		struct IPlacement3DCollection * _result = 0;
		HRESULT _hr = raw_GetPlacements(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IPlacement3DCollectionPtr(_result, false);
	}

	// interface IReinforcementUnitUsageCollection wrapper method implementations

	inline int IReinforcementUnitUsageCollection::GetCount() {
		int _result = 0;
		HRESULT _hr = get_Count(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IReinforcementUnitUsagePtr IReinforcementUnitUsageCollection::Get (int index) {
		struct IReinforcementUnitUsage * _result = 0;
		HRESULT _hr = raw_Get(index, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IReinforcementUnitUsagePtr(_result, false);
	}

	// interface IObjectReinforcementModel wrapper method implementations

	inline IRebarUsageCollectionPtr IObjectReinforcementModel::GetRebarUsages() {
		struct IRebarUsageCollection * _result = 0;
		HRESULT _hr = raw_GetRebarUsages(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IRebarUsageCollectionPtr(_result, false);
	}

	inline IReinforcementUnitUsageCollectionPtr IObjectReinforcementModel::GetReinforcementUnitUsages() {
		struct IReinforcementUnitUsageCollection * _result = 0;
		HRESULT _hr = raw_GetReinforcementUnitUsages(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IReinforcementUnitUsageCollectionPtr(_result, false);
	}

	// interface IRichTextParagraph wrapper method implementations

	inline int IRichTextParagraph::GetTokenCount() {
		int _result = 0;
		HRESULT _hr = get_TokenCount(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline struct RichTextToken IRichTextParagraph::GetToken (int index) {
		struct RichTextToken _result;
		HRESULT _hr = raw_GetToken(index, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline HRESULT IRichTextParagraph::InsertToken (int index, struct RichTextToken token) {
		HRESULT _hr = raw_InsertToken(index, token);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IRichTextParagraph::AppendToken (struct RichTextToken token) {
		HRESULT _hr = raw_AppendToken(token);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IRichTextParagraph::PrependToken (struct RichTextToken token) {
		HRESULT _hr = raw_PrependToken(token);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IRichTextParagraph::RemoveToken (int index) {
		HRESULT _hr = raw_RemoveToken(index);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	// interface IRichTextDocument wrapper method implementations

	inline int IRichTextDocument::GetParagraphCount() {
		int _result = 0;
		HRESULT _hr = get_ParagraphCount(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IRichTextParagraphPtr IRichTextDocument::GetParagraph (int index) {
		struct IRichTextParagraph * _result = 0;
		HRESULT _hr = raw_GetParagraph(index, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IRichTextParagraphPtr(_result, false);
	}

	inline IRichTextParagraphPtr IRichTextDocument::InsertParagraph (int index, SAFEARRAY * data) {
		struct IRichTextParagraph * _result = 0;
		HRESULT _hr = raw_InsertParagraph(index, data, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IRichTextParagraphPtr(_result, false);
	}

	inline IRichTextParagraphPtr IRichTextDocument::AppendParagraph (SAFEARRAY * data) {
		struct IRichTextParagraph * _result = 0;
		HRESULT _hr = raw_AppendParagraph(data, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IRichTextParagraphPtr(_result, false);
	}

	inline IRichTextParagraphPtr IRichTextDocument::PrependParagraph (SAFEARRAY * data) {
		struct IRichTextParagraph * _result = 0;
		HRESULT _hr = raw_PrependParagraph(data, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IRichTextParagraphPtr(_result, false);
	}

	inline HRESULT IRichTextDocument::RemoveParagraph (int index) {
		HRESULT _hr = raw_RemoveParagraph(index);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	// interface ITextObject wrapper method implementations

	inline IRichTextDocumentPtr ITextObject::GetRichTextDocument() {
		struct IRichTextDocument * _result = 0;
		HRESULT _hr = raw_GetRichTextDocument(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IRichTextDocumentPtr(_result, false);
	}

	inline struct Rect ITextObject::GetBoundRect() {
		struct Rect _result;
		HRESULT _hr = get_BoundRect(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline void ITextObject::PutBoundRect (struct Rect pRect) {
		HRESULT _hr = put_BoundRect(pRect);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	// interface IBaseline2DObject wrapper method implementations

	inline ICurve2DPtr IBaseline2DObject::GetBaseline() {
		struct ICurve2D * _result = 0;
		HRESULT _hr = raw_GetBaseline(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ICurve2DPtr(_result, false);
	}

	inline HRESULT IBaseline2DObject::SetBaseline (struct ICurve2D * pBaseline) {
		HRESULT _hr = raw_SetBaseline(pBaseline);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline ICurve2DPtr IBaseline2DObject::GetBaselineInCS (struct Placement2D Placement2D) {
		struct ICurve2D * _result = 0;
		HRESULT _hr = raw_GetBaselineInCS(Placement2D, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ICurve2DPtr(_result, false);
	}

	inline HRESULT IBaseline2DObject::SetBaselineInCS (struct Placement2D Placement2D, struct ICurve2D * pBaselineInCS) {
		HRESULT _hr = raw_SetBaselineInCS(Placement2D, pBaselineInCS);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	// interface IPlacement2D wrapper method implementations

	inline struct Point2D IPlacement2D::GetOrigin() {
		struct Point2D _result;
		HRESULT _hr = get_Origin(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline struct Vector2D IPlacement2D::GetAxisX() {
		struct Vector2D _result;
		HRESULT _hr = get_AxisX(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline struct Vector2D IPlacement2D::GetAxisY() {
		struct Vector2D _result;
		HRESULT _hr = get_AxisY(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline VARIANT_BOOL IPlacement2D::IsOrthogonal() {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = raw_IsOrthogonal(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline VARIANT_BOOL IPlacement2D::IsNormal() {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = raw_IsNormal(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline VARIANT_BOOL IPlacement2D::IsLeft() {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = raw_IsLeft(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline ITransform2DPtr IPlacement2D::GetTransformFrom() {
		struct ITransform2D * _result = 0;
		HRESULT _hr = raw_GetTransformFrom(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ITransform2DPtr(_result, false);
	}

	inline ITransform2DPtr IPlacement2D::GetTransformInto() {
		struct ITransform2D * _result = 0;
		HRESULT _hr = raw_GetTransformInto(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ITransform2DPtr(_result, false);
	}

	inline IPlacement2DPtr IPlacement2D::GetCopy() {
		struct IPlacement2D * _result = 0;
		HRESULT _hr = raw_GetCopy(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IPlacement2DPtr(_result, false);
	}

	inline struct Placement2D IPlacement2D::GetPlacement() {
		struct Placement2D _result;
		HRESULT _hr = get_Placement(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline HRESULT IPlacement2D::Move (struct Vector2D vector_) {
		HRESULT _hr = raw_Move(vector_);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IPlacement2D::Rotate (struct Point2D point_, double angle_) {
		HRESULT _hr = raw_Rotate(point_, angle_);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IPlacement2D::Transform (struct ITransform2D * pTransform) {
		HRESULT _hr = raw_Transform(pTransform);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	// interface IPlacement2DObject wrapper method implementations

	inline IPlacement2DPtr IPlacement2DObject::GetPlacement() {
		struct IPlacement2D * _result = 0;
		HRESULT _hr = raw_GetPlacement(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IPlacement2DPtr(_result, false);
	}

	inline HRESULT IPlacement2DObject::SetPlacement (struct IPlacement2D * pPlacement) {
		HRESULT _hr = raw_SetPlacement(pPlacement);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	// interface IBaseline3DObject wrapper method implementations

	inline ICurve3DPtr IBaseline3DObject::GetBaseline() {
		struct ICurve3D * _result = 0;
		HRESULT _hr = raw_GetBaseline(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ICurve3DPtr(_result, false);
	}

	inline HRESULT IBaseline3DObject::SetBaseline (struct ICurve3D * pBaseline) {
		HRESULT _hr = raw_SetBaseline(pBaseline);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline ICurve3DPtr IBaseline3DObject::GetBaselineInCS (struct Placement3D Placement3D) {
		struct ICurve3D * _result = 0;
		HRESULT _hr = raw_GetBaselineInCS(Placement3D, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ICurve3DPtr(_result, false);
	}

	inline HRESULT IBaseline3DObject::SetBaselineInCS (struct Placement3D Placement3D, struct ICurve3D * pBaselineInCS) {
		HRESULT _hr = raw_SetBaselineInCS(Placement3D, pBaselineInCS);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	// interface IGrid wrapper method implementations

	inline int IGrid::GetTriangleCount() {
		int _result = 0;
		HRESULT _hr = get_TriangleCount(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline struct Triangle IGrid::GetTriangle (int index) {
		struct Triangle _result;
		HRESULT _hr = raw_GetTriangle(index, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline int IGrid::GetVertexCount() {
		int _result = 0;
		HRESULT _hr = get_VertexCount(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline struct FloatPoint3D IGrid::GetVertex (int index) {
		struct FloatPoint3D _result;
		HRESULT _hr = raw_GetVertex(index, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline int IGrid::GetNormalCount() {
		int _result = 0;
		HRESULT _hr = get_NormalCount(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline struct FloatVector3D IGrid::GetNormal (int index) {
		struct FloatVector3D _result;
		HRESULT _hr = raw_GetNormal(index, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline int IGrid::GetTextureCoordinateCount() {
		int _result = 0;
		HRESULT _hr = get_TextureCoordinateCount(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline struct FloatPoint2D IGrid::GetTextureCoordinate (int index) {
		struct FloatPoint2D _result;
		HRESULT _hr = raw_GetTextureCoordinate(index, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline int IGrid::GetGridType() {
		int _result = 0;
		HRESULT _hr = get_GridType(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline VARIANT_BOOL IGrid::GetDoubleSided() {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = get_DoubleSided(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline HRESULT IGrid::GetTriangleComponents (int index, unsigned int * pTriangleV0, unsigned int * pTriangleV1, unsigned int * pTriangleV2) {
		HRESULT _hr = raw_GetTriangleComponents(index, pTriangleV0, pTriangleV1, pTriangleV2);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IGrid::GetVertexComponents (int index, float * pX, float * pY, float * pZ) {
		HRESULT _hr = raw_GetVertexComponents(index, pX, pY, pZ);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IGrid::GetNormalComponents (int index, float * pX, float * pY, float * pZ) {
		HRESULT _hr = raw_GetNormalComponents(index, pX, pY, pZ);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IGrid::GetTextureCoordinateComponents (int index, float * pX, float * pY) {
		HRESULT _hr = raw_GetTextureCoordinateComponents(index, pX, pY);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	// interface IMesh wrapper method implementations

	inline int IMesh::GetGridCount() {
		int _result = 0;
		HRESULT _hr = get_GridCount(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IGridPtr IMesh::GetGrid (int index) {
		struct IGrid * _result = 0;
		HRESULT _hr = raw_GetGrid(index, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IGridPtr(_result, false);
	}

	inline GUID IMesh::GetMeshType() {
		GUID _result;
		HRESULT _hr = get_MeshType(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline _bstr_t IMesh::GetMeshTypeS() {
		BSTR _result = 0;
		HRESULT _hr = get_MeshTypeS(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	// interface IExportedObject3D wrapper method implementations

	inline int IExportedObject3D::GetModelObjectId() {
		int _result = 0;
		HRESULT _hr = get_ModelObjectId(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline int IExportedObject3D::GetMeshCount() {
		int _result = 0;
		HRESULT _hr = get_MeshCount(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IMeshPtr IExportedObject3D::GetMesh (int index) {
		struct IMesh * _result = 0;
		HRESULT _hr = raw_GetMesh(index, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IMeshPtr(_result, false);
	}

	inline GUID IExportedObject3D::GetModelObjectType() {
		GUID _result;
		HRESULT _hr = get_ModelObjectType(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline _bstr_t IExportedObject3D::GetModelObjectTypeS() {
		BSTR _result = 0;
		HRESULT _hr = get_ModelObjectTypeS(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	// interface IExportedObject3DCollection wrapper method implementations

	inline IExportedObject3DPtr IExportedObject3DCollection::Get (int index) {
		struct IExportedObject3D * _result = 0;
		HRESULT _hr = raw_Get(index, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IExportedObject3DPtr(_result, false);
	}

	inline int IExportedObject3DCollection::GetCount() {
		int _result = 0;
		HRESULT _hr = get_Count(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	// interface IGridMaterial wrapper method implementations

	inline int IGridMaterial::GetId() {
		int _result = 0;
		HRESULT _hr = get_Id(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline struct Color IGridMaterial::GetColor() {
		struct Color _result;
		HRESULT _hr = get_Color(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline HRESULT IGridMaterial::GetColorComponents (unsigned short * pRed, unsigned short * pGreen, unsigned short * pBlue, unsigned short * pAlpha) {
		HRESULT _hr = raw_GetColorComponents(pRed, pGreen, pBlue, pAlpha);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	// interface IGridWithMaterial wrapper method implementations

	inline IGridPtr IGridWithMaterial::GetGrid() {
		struct IGrid * _result = 0;
		HRESULT _hr = get_Grid(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IGridPtr(_result, false);
	}

	inline IGridMaterialPtr IGridWithMaterial::GetMaterial() {
		struct IGridMaterial * _result = 0;
		HRESULT _hr = get_Material(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IGridMaterialPtr(_result, false);
	}

	// interface IGridWithMaterialCollection wrapper method implementations

	inline IGridWithMaterialPtr IGridWithMaterialCollection::Get (int index) {
		struct IGridWithMaterial * _result = 0;
		HRESULT _hr = raw_Get(index, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IGridWithMaterialPtr(_result, false);
	}

	inline int IGridWithMaterialCollection::GetCount() {
		int _result = 0;
		HRESULT _hr = get_Count(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	// interface IDataExporter wrapper method implementations

	inline IExportedObject3DCollectionPtr IDataExporter::GetObjects3D() {
		struct IExportedObject3DCollection * _result = 0;
		HRESULT _hr = raw_GetObjects3D(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IExportedObject3DCollectionPtr(_result, false);
	}

	inline IGridWithMaterialCollectionPtr IDataExporter::GetGrids() {
		struct IGridWithMaterialCollection * _result = 0;
		HRESULT _hr = raw_GetGrids(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IGridWithMaterialCollectionPtr(_result, false);
	}

	// interface IMaterial wrapper method implementations

	inline int IMaterial::GetId() {
		int _result = 0;
		HRESULT _hr = get_Id(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline _bstr_t IMaterial::GetName() {
		BSTR _result = 0;
		HRESULT _hr = get_Name(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline double IMaterial::GetDensity() {
		double _result = 0;
		HRESULT _hr = get_Density(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline struct Color IMaterial::GetColor() {
		struct Color _result;
		HRESULT _hr = get_Color(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	// interface IMaterialLayer wrapper method implementations

	inline int IMaterialLayer::GetId() {
		int _result = 0;
		HRESULT _hr = get_Id(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double IMaterialLayer::GetThickness() {
		double _result = 0;
		HRESULT _hr = get_Thickness(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IMaterialPtr IMaterialLayer::GetMaterial() {
		struct IMaterial * _result = 0;
		HRESULT _hr = get_Material(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IMaterialPtr(_result, false);
	}

	// interface IMaterialLayerCollection wrapper method implementations

	inline IMaterialLayerPtr IMaterialLayerCollection::Get (int index) {
		struct IMaterialLayer * _result = 0;
		HRESULT _hr = raw_Get(index, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IMaterialLayerPtr(_result, false);
	}

	inline int IMaterialLayerCollection::GetCount() {
		int _result = 0;
		HRESULT _hr = get_Count(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	// interface ILayeredMaterial wrapper method implementations

	inline LayeredMaterialIdGroupPair ILayeredMaterial::GetIdGroupPair() {
		LayeredMaterialIdGroupPair _result;
		HRESULT _hr = raw_GetIdGroupPair(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline _bstr_t ILayeredMaterial::GetName() {
		BSTR _result = 0;
		HRESULT _hr = get_Name(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline IMaterialLayerCollectionPtr ILayeredMaterial::GetLayers() {
		struct IMaterialLayerCollection * _result = 0;
		HRESULT _hr = get_Layers(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IMaterialLayerCollectionPtr(_result, false);
	}

	inline IMaterialLayerPtr ILayeredMaterial::GetBaseLayer() {
		struct IMaterialLayer * _result = 0;
		HRESULT _hr = raw_GetBaseLayer(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IMaterialLayerPtr(_result, false);
	}

	inline int ILayeredMaterial::GetBaseLayerIndex() {
		int _result = 0;
		HRESULT _hr = get_BaseLayerIndex(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline int ILayeredMaterial::GetId() {
		int _result = 0;
		HRESULT _hr = get_Id(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	// interface IMaterialManager wrapper method implementations

	inline IMaterialPtr IMaterialManager::GetMaterial (int MaterialId) {
		struct IMaterial * _result = 0;
		HRESULT _hr = raw_GetMaterial(MaterialId, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IMaterialPtr(_result, false);
	}

	// interface ILayeredMaterialManager wrapper method implementations

	inline ILayeredMaterialPtr ILayeredMaterialManager::GetLayeredMaterialByIdGroupPair (LayeredMaterialIdGroupPair LayeredMaterialIdGroupPair) {
		struct ILayeredMaterial * _result = 0;
		HRESULT _hr = raw_GetLayeredMaterialByIdGroupPair(LayeredMaterialIdGroupPair, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ILayeredMaterialPtr(_result, false);
	}

	inline ILayeredMaterialPtr ILayeredMaterialManager::GetLayeredMaterial (int Id) {
		struct ILayeredMaterial * _result = 0;
		HRESULT _hr = raw_GetLayeredMaterial(Id, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ILayeredMaterialPtr(_result, false);
	}

	// interface ICamera3D wrapper method implementations

	inline struct FloatPoint3D ICamera3D::GetPosition() {
		struct FloatPoint3D _result;
		HRESULT _hr = get_Position(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline struct FloatPoint3D ICamera3D::GetFocusPoint() {
		struct FloatPoint3D _result;
		HRESULT _hr = get_FocusPoint(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double ICamera3D::GetFovHorizontal() {
		double _result = 0;
		HRESULT _hr = get_FovHorizontal(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double ICamera3D::GetFovVertical() {
		double _result = 0;
		HRESULT _hr = get_FovVertical(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline HRESULT ICamera3D::LookAt (struct FloatPoint3D focusPoint_, struct FloatPoint3D position_, struct FloatVector3D upVector_) {
		HRESULT _hr = raw_LookAt(focusPoint_, position_, upVector_);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline struct FloatVector3D ICamera3D::GetUpVector() {
		struct FloatVector3D _result;
		HRESULT _hr = get_UpVector(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	// interface IModelObjectCollection wrapper method implementations

	inline int IModelObjectCollection::GetCount() {
		int _result = 0;
		HRESULT _hr = get_Count(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IModelObjectPtr IModelObjectCollection::GetByIndex (int index) {
		struct IModelObject * _result = 0;
		HRESULT _hr = raw_GetByIndex(index, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IModelObjectPtr(_result, false);
	}

	inline IModelObjectPtr IModelObjectCollection::GetById (int Id) {
		struct IModelObject * _result = 0;
		HRESULT _hr = raw_GetById(Id, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IModelObjectPtr(_result, false);
	}

	inline SAFEARRAY * IModelObjectCollection::GetIds() {
		SAFEARRAY * _result = 0;
		HRESULT _hr = raw_GetIds(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IModelObjectPtr IModelObjectCollection::GetByUniqueId (GUID Id) {
		struct IModelObject * _result = 0;
		HRESULT _hr = raw_GetByUniqueId(Id, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IModelObjectPtr(_result, false);
	}

	// interface INewEntityArgs wrapper method implementations

	inline GUID INewEntityArgs::GetTypeId() {
		GUID _result;
		HRESULT _hr = get_TypeId(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline void INewEntityArgs::PutTypeId (GUID pTypeId) {
		HRESULT _hr = put_TypeId(pTypeId);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline int INewEntityArgs::GetCategoryId() {
		int _result = 0;
		HRESULT _hr = get_CategoryId(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline void INewEntityArgs::PutCategoryId (int pCategoryId) {
		HRESULT _hr = put_CategoryId(pCategoryId);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline int INewEntityArgs::GetHostObjectId() {
		int _result = 0;
		HRESULT _hr = get_HostObjectId(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline void INewEntityArgs::PutHostObjectId (int pHostObjectId) {
		HRESULT _hr = put_HostObjectId(pHostObjectId);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline struct Placement3D INewEntityArgs::GetPlacement3D() {
		struct Placement3D _result;
		HRESULT _hr = get_Placement3D(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline void INewEntityArgs::PutPlacement3D (struct Placement3D pPlacement3D) {
		HRESULT _hr = put_Placement3D(pPlacement3D);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline _bstr_t INewEntityArgs::GetTypeIdS() {
		BSTR _result = 0;
		HRESULT _hr = get_TypeIdS(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline void INewEntityArgs::PutTypeIdS (_bstr_t pTypeId) {
		HRESULT _hr = put_TypeIdS(pTypeId);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline struct Placement2D INewEntityArgs::GetPlacement2D() {
		struct Placement2D _result;
		HRESULT _hr = get_Placement2D(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline void INewEntityArgs::PutPlacement2D (struct Placement2D pPlacement2D) {
		HRESULT _hr = put_Placement2D(pPlacement2D);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline int INewEntityArgs::GetStyleId() {
		int _result = 0;
		HRESULT _hr = get_StyleId(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline void INewEntityArgs::PutStyleId (int StyleId) {
		HRESULT _hr = put_StyleId(StyleId);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline _bstr_t INewEntityArgs::GetFilePath() {
		BSTR _result = 0;
		HRESULT _hr = get_FilePath(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline void INewEntityArgs::PutFilePath (_bstr_t pPath) {
		HRESULT _hr = put_FilePath(pPath);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	// interface IModel wrapper method implementations

	inline IModelObjectCollectionPtr IModel::GetObjects() {
		struct IModelObjectCollection * _result = 0;
		HRESULT _hr = raw_GetObjects(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IModelObjectCollectionPtr(_result, false);
	}

	inline IOperationPtr IModel::CreateOperation() {
		struct IOperation * _result = 0;
		HRESULT _hr = raw_CreateOperation(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IOperationPtr(_result, false);
	}

	inline int IModel::GetIdFromUniqueId (GUID uniqueId_) {
		int _result = 0;
		HRESULT _hr = raw_GetIdFromUniqueId(uniqueId_, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline int IModel::GetIdFromUniqueIdS (_bstr_t uniqueId_) {
		int _result = 0;
		HRESULT _hr = raw_GetIdFromUniqueIdS(uniqueId_, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline GUID IModel::GetUniqueIdFromId (int id_) {
		GUID _result;
		HRESULT _hr = raw_GetUniqueIdFromId(id_, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline _bstr_t IModel::GetUniqueIdFromIdS (int id_) {
		BSTR _result = 0;
		HRESULT _hr = raw_GetUniqueIdFromIdS(id_, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline GUID IModel::GetId() {
		GUID _result;
		HRESULT _hr = get_Id(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline INewEntityArgsPtr IModel::CreateNewEntityArgs() {
		struct INewEntityArgs * _result = 0;
		HRESULT _hr = raw_CreateNewEntityArgs(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return INewEntityArgsPtr(_result, false);
	}

	inline IModelObjectPtr IModel::CreateObject (struct INewEntityArgs * pArgs) {
		struct IModelObject * _result = 0;
		HRESULT _hr = raw_CreateObject(pArgs, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IModelObjectPtr(_result, false);
	}

	inline HRESULT IModel::DeleteObjectById (int id_) {
		HRESULT _hr = raw_DeleteObjectById(id_);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IModel::DeleteObjectByUniqueId (GUID uniqueId_) {
		HRESULT _hr = raw_DeleteObjectByUniqueId(uniqueId_);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IModel::DeleteObjectByUniqueIdS (_bstr_t uniqueId_) {
		HRESULT _hr = raw_DeleteObjectByUniqueIdS(uniqueId_);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline struct Cube IModel::GetBoundingBox() {
		struct Cube _result;
		HRESULT _hr = raw_GetBoundingBox(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	// interface IRebarStyle wrapper method implementations

	inline int IRebarStyle::GetId() {
		int _result = 0;
		HRESULT _hr = get_Id(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline _bstr_t IRebarStyle::GetName() {
		BSTR _result = 0;
		HRESULT _hr = get_Name(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline _bstr_t IRebarStyle::GetGradeName() {
		BSTR _result = 0;
		HRESULT _hr = get_GradeName(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline double IRebarStyle::GetDiameter() {
		double _result = 0;
		HRESULT _hr = get_Diameter(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline int IRebarStyle::GetMaterialId() {
		int _result = 0;
		HRESULT _hr = get_MaterialId(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double IRebarStyle::GetGradeTensileStrength() {
		double _result = 0;
		HRESULT _hr = get_GradeTensileStrength(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	// interface IReinforcementUnitStyle wrapper method implementations

	inline int IReinforcementUnitStyle::GetId() {
		int _result = 0;
		HRESULT _hr = get_Id(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline _bstr_t IReinforcementUnitStyle::GetName() {
		BSTR _result = 0;
		HRESULT _hr = get_Name(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline IRebarUsageCollectionPtr IReinforcementUnitStyle::GetRebarUsages() {
		struct IRebarUsageCollection * _result = 0;
		HRESULT _hr = raw_GetRebarUsages(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IRebarUsageCollectionPtr(_result, false);
	}

	inline enum ReinforcementUnitType IReinforcementUnitStyle::GetUnitType() {
		enum ReinforcementUnitType _result;
		HRESULT _hr = get_UnitType(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	// interface IReinforcementUnitStyleManager wrapper method implementations

	inline IRebarStylePtr IReinforcementUnitStyleManager::GetRebarStyle (int rebarStyleId) {
		struct IRebarStyle * _result = 0;
		HRESULT _hr = raw_GetRebarStyle(rebarStyleId, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IRebarStylePtr(_result, false);
	}

	inline SAFEARRAY * IReinforcementUnitStyleManager::GetRebarStyleIds() {
		SAFEARRAY * _result = 0;
		HRESULT _hr = raw_GetRebarStyleIds(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline VARIANT_BOOL IReinforcementUnitStyleManager::RebarStyleExists (int rebarStyleId) {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = raw_RebarStyleExists(rebarStyleId, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IReinforcementUnitStylePtr IReinforcementUnitStyleManager::GetUnitStyle (int reinforcementUnitStyleId) {
		struct IReinforcementUnitStyle * _result = 0;
		HRESULT _hr = raw_GetUnitStyle(reinforcementUnitStyleId, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IReinforcementUnitStylePtr(_result, false);
	}

	inline VARIANT_BOOL IReinforcementUnitStyleManager::UnitStyleExists (int reinforcementUnitStyleId) {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = raw_UnitStyleExists(reinforcementUnitStyleId, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline SAFEARRAY * IReinforcementUnitStyleManager::GetReinforcementUnitStyleIds() {
		SAFEARRAY * _result = 0;
		HRESULT _hr = raw_GetReinforcementUnitStyleIds(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	// interface ITitleBlockInstance wrapper method implementations

	inline _bstr_t ITitleBlockInstance::GetName() {
		BSTR _result = 0;
		HRESULT _hr = get_Name(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline int ITitleBlockInstance::GetRowCount() {
		int _result = 0;
		HRESULT _hr = get_RowCount(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline int ITitleBlockInstance::GetColumnCount() {
		int _result = 0;
		HRESULT _hr = get_ColumnCount(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline _bstr_t ITitleBlockInstance::GetCellValue (int columnIndex, int rowIndex) {
		BSTR _result = 0;
		HRESULT _hr = raw_GetCellValue(columnIndex, rowIndex, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	// interface IDrawing wrapper method implementations

	inline _bstr_t IDrawing::GetName() {
		BSTR _result = 0;
		HRESULT _hr = get_Name(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline int IDrawing::ExportToDxf (_bstr_t FilePath, enum AutocadVersion AutocadVersion, VARIANT_BOOL overwrite) {
		int _result = 0;
		HRESULT _hr = raw_ExportToDxf(FilePath, AutocadVersion, overwrite, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline int IDrawing::ExportToDwg (_bstr_t FilePath, enum AutocadVersion AutocadVersion, VARIANT_BOOL overwrite) {
		int _result = 0;
		HRESULT _hr = raw_ExportToDwg(FilePath, AutocadVersion, overwrite, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline GUID IDrawing::GetId() {
		GUID _result;
		HRESULT _hr = get_Id(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline _bstr_t IDrawing::GetIdS() {
		BSTR _result = 0;
		HRESULT _hr = get_IdS(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline int IDrawing::ExportToPdf (_bstr_t FilePath, VARIANT_BOOL overwrite) {
		int _result = 0;
		HRESULT _hr = raw_ExportToPdf(FilePath, overwrite, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline int IDrawing::ExportToOpenXps (_bstr_t FilePath, VARIANT_BOOL overwrite) {
		int _result = 0;
		HRESULT _hr = raw_ExportToOpenXps(FilePath, overwrite, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline int IDrawing::GetTitleBlockInstanceCount() {
		int _result = 0;
		HRESULT _hr = get_TitleBlockInstanceCount(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline ITitleBlockInstancePtr IDrawing::GetTitleBlockInstance (int index) {
		struct ITitleBlockInstance * _result = 0;
		HRESULT _hr = raw_GetTitleBlockInstance(index, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ITitleBlockInstancePtr(_result, false);
	}

	// interface IDrawingCollection wrapper method implementations

	inline int IDrawingCollection::GetCount() {
		int _result = 0;
		HRESULT _hr = get_Count(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IDrawingPtr IDrawingCollection::Get (int index) {
		struct IDrawing * _result = 0;
		HRESULT _hr = raw_Get(index, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IDrawingPtr(_result, false);
	}

	// interface IProfileDescription wrapper method implementations

	inline _bstr_t IProfileDescription::GetName() {
		BSTR _result = 0;
		HRESULT _hr = get_Name(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline int IProfileDescription::GetId() {
		int _result = 0;
		HRESULT _hr = get_Id(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	// interface IProfileDescriptionManager wrapper method implementations

	inline SAFEARRAY * IProfileDescriptionManager::GetIds() {
		SAFEARRAY * _result = 0;
		HRESULT _hr = raw_GetIds(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline VARIANT_BOOL IProfileDescriptionManager::Contains (int Id) {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = raw_Contains(Id, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IProfileDescriptionPtr IProfileDescriptionManager::GetProfileDescription (int Id) {
		struct IProfileDescription * _result = 0;
		HRESULT _hr = raw_GetProfileDescription(Id, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IProfileDescriptionPtr(_result, false);
	}

	// interface IRegion2DCollection wrapper method implementations

	inline int IRegion2DCollection::GetCount() {
		int _result = 0;
		HRESULT _hr = get_Count(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IRegion2DPtr IRegion2DCollection::Get (int index) {
		struct IRegion2D * _result = 0;
		HRESULT _hr = raw_Get(index, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IRegion2DPtr(_result, false);
	}

	// interface IProfile wrapper method implementations

	inline int IProfile::GetDescriptionId() {
		int _result = 0;
		HRESULT _hr = get_DescriptionId(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IRegion2DCollectionPtr IProfile::GetRegions() {
		struct IRegion2DCollection * _result = 0;
		HRESULT _hr = get_Regions(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IRegion2DCollectionPtr(_result, false);
	}

	inline struct Point2D IProfile::GetCenterOfMass() {
		struct Point2D _result;
		HRESULT _hr = raw_GetCenterOfMass(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IParameterContainerPtr IProfile::GetParameters() {
		struct IParameterContainer * _result = 0;
		HRESULT _hr = get_Parameters(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IParameterContainerPtr(_result, false);
	}

	// interface IBeamStyle wrapper method implementations

	inline int IBeamStyle::GetId() {
		int _result = 0;
		HRESULT _hr = get_Id(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline _bstr_t IBeamStyle::GetName() {
		BSTR _result = 0;
		HRESULT _hr = get_Name(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline IProfilePtr IBeamStyle::GetProfile() {
		struct IProfile * _result = 0;
		HRESULT _hr = get_Profile(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IProfilePtr(_result, false);
	}

	// interface IBeamStyleManager wrapper method implementations

	inline SAFEARRAY * IBeamStyleManager::GetIds() {
		SAFEARRAY * _result = 0;
		HRESULT _hr = raw_GetIds(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline VARIANT_BOOL IBeamStyleManager::Contains (int Id) {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = raw_Contains(Id, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IBeamStylePtr IBeamStyleManager::GetBeamStyle (int Id) {
		struct IBeamStyle * _result = 0;
		HRESULT _hr = raw_GetBeamStyle(Id, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IBeamStylePtr(_result, false);
	}

	// interface IColumnStyle wrapper method implementations

	inline int IColumnStyle::GetId() {
		int _result = 0;
		HRESULT _hr = get_Id(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline _bstr_t IColumnStyle::GetName() {
		BSTR _result = 0;
		HRESULT _hr = get_Name(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline IProfilePtr IColumnStyle::GetProfile() {
		struct IProfile * _result = 0;
		HRESULT _hr = get_Profile(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IProfilePtr(_result, false);
	}

	// interface IColumnStyleManager wrapper method implementations

	inline SAFEARRAY * IColumnStyleManager::GetIds() {
		SAFEARRAY * _result = 0;
		HRESULT _hr = raw_GetIds(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline VARIANT_BOOL IColumnStyleManager::Contains (int Id) {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = raw_Contains(Id, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IColumnStylePtr IColumnStyleManager::GetColumnStyle (int Id) {
		struct IColumnStyle * _result = 0;
		HRESULT _hr = raw_GetColumnStyle(Id, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IColumnStylePtr(_result, false);
	}

	// interface ISystemStyle wrapper method implementations

	inline enum SystemCategory ISystemStyle::GetSystemCategory() {
		enum SystemCategory _result;
		HRESULT _hr = get_SystemCategory(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline _bstr_t ISystemStyle::GetDesignation() {
		BSTR _result = 0;
		HRESULT _hr = get_Designation(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline int ISystemStyle::GetId() {
		int _result = 0;
		HRESULT _hr = get_Id(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline _bstr_t ISystemStyle::GetName() {
		BSTR _result = 0;
		HRESULT _hr = get_Name(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline struct Color ISystemStyle::GetColor() {
		struct Color _result;
		HRESULT _hr = get_Color(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	// interface ISystemStyleManager wrapper method implementations

	inline SAFEARRAY * ISystemStyleManager::GetIds() {
		SAFEARRAY * _result = 0;
		HRESULT _hr = raw_GetIds(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline VARIANT_BOOL ISystemStyleManager::Contains (int Id) {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = raw_Contains(Id, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline ISystemStylePtr ISystemStyleManager::GetSystemStyle (int Id) {
		struct ISystemStyle * _result = 0;
		HRESULT _hr = raw_GetSystemStyle(Id, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ISystemStylePtr(_result, false);
	}

	// interface IPlumbingFixtureStyle wrapper method implementations

	inline _bstr_t IPlumbingFixtureStyle::GetName() {
		BSTR _result = 0;
		HRESULT _hr = get_Name(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline enum PlumbingFixtureCategory IPlumbingFixtureStyle::GetCategory() {
		enum PlumbingFixtureCategory _result;
		HRESULT _hr = get_Category(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	// interface IPlumbingFixtureStyleManager wrapper method implementations

	inline SAFEARRAY * IPlumbingFixtureStyleManager::GetIds() {
		SAFEARRAY * _result = 0;
		HRESULT _hr = raw_GetIds(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline VARIANT_BOOL IPlumbingFixtureStyleManager::Contains (int Id) {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = raw_Contains(Id, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IPlumbingFixtureStylePtr IPlumbingFixtureStyleManager::GetPlumbingFixtureStyle (int Id) {
		struct IPlumbingFixtureStyle * _result = 0;
		HRESULT _hr = raw_GetPlumbingFixtureStyle(Id, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IPlumbingFixtureStylePtr(_result, false);
	}

	// interface IEquipmentStyle wrapper method implementations

	inline _bstr_t IEquipmentStyle::GetName() {
		BSTR _result = 0;
		HRESULT _hr = get_Name(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline enum EquipmentCategory IEquipmentStyle::GetCategory() {
		enum EquipmentCategory _result;
		HRESULT _hr = get_Category(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	// interface IEquipmentStyleManager wrapper method implementations

	inline SAFEARRAY * IEquipmentStyleManager::GetIds() {
		SAFEARRAY * _result = 0;
		HRESULT _hr = raw_GetIds(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline VARIANT_BOOL IEquipmentStyleManager::Contains (int Id) {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = raw_Contains(Id, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IEquipmentStylePtr IEquipmentStyleManager::GetEquipmentStyle (int Id) {
		struct IEquipmentStyle * _result = 0;
		HRESULT _hr = raw_GetEquipmentStyle(Id, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEquipmentStylePtr(_result, false);
	}

	// interface IIfcExportSettings wrapper method implementations

	inline void IIfcExportSettings::PutParameterMappingFilePath (_bstr_t pFilePath) {
		HRESULT _hr = put_ParameterMappingFilePath(pFilePath);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline _bstr_t IIfcExportSettings::GetParameterMappingFilePath() {
		BSTR _result = 0;
		HRESULT _hr = get_ParameterMappingFilePath(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline void IIfcExportSettings::PutVersion (enum IfcVersion pIfcVersion) {
		HRESULT _hr = put_Version(pIfcVersion);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline enum IfcVersion IIfcExportSettings::GetVersion() {
		enum IfcVersion _result;
		HRESULT _hr = get_Version(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline void IIfcExportSettings::PutTypeMappingFilePath (_bstr_t pFilePath) {
		HRESULT _hr = put_TypeMappingFilePath(pFilePath);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline _bstr_t IIfcExportSettings::GetTypeMappingFilePath() {
		BSTR _result = 0;
		HRESULT _hr = get_TypeMappingFilePath(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline void IIfcExportSettings::PutLayerMappingFilePath (_bstr_t pFilePath) {
		HRESULT _hr = put_LayerMappingFilePath(pFilePath);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline _bstr_t IIfcExportSettings::GetLayerMappingFilePath() {
		BSTR _result = 0;
		HRESULT _hr = get_LayerMappingFilePath(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline void IIfcExportSettings::PutApproximateCurves (VARIANT_BOOL ApproximateCurves) {
		HRESULT _hr = put_ApproximateCurves(ApproximateCurves);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline VARIANT_BOOL IIfcExportSettings::GetApproximateCurves() {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = get_ApproximateCurves(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline void IIfcExportSettings::PutVoidsAsReference (VARIANT_BOOL VoidsAsReference) {
		HRESULT _hr = put_VoidsAsReference(VoidsAsReference);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline VARIANT_BOOL IIfcExportSettings::GetVoidsAsReference() {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = get_VoidsAsReference(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline void IIfcExportSettings::PutSplitObjectsWithLayeredMaterialIntoParts (VARIANT_BOOL SplitObjectsWithLayeredMaterialIntoParts) {
		HRESULT _hr = put_SplitObjectsWithLayeredMaterialIntoParts(SplitObjectsWithLayeredMaterialIntoParts);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline VARIANT_BOOL IIfcExportSettings::GetSplitObjectsWithLayeredMaterialIntoParts() {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = get_SplitObjectsWithLayeredMaterialIntoParts(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline void IIfcExportSettings::PutGeometricRepresentationWithoutCutting (VARIANT_BOOL GeometricRepresentationWithoutCutting) {
		HRESULT _hr = put_GeometricRepresentationWithoutCutting(GeometricRepresentationWithoutCutting);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline VARIANT_BOOL IIfcExportSettings::GetGeometricRepresentationWithoutCutting() {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = get_GeometricRepresentationWithoutCutting(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	// interface IProjectInfo wrapper method implementations

	inline _bstr_t IProjectInfo::GetCode() {
		BSTR _result = 0;
		HRESULT _hr = get_Code(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline void IProjectInfo::PutCode (_bstr_t pCode) {
		HRESULT _hr = put_Code(pCode);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline _bstr_t IProjectInfo::GetName() {
		BSTR _result = 0;
		HRESULT _hr = get_Name(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline void IProjectInfo::PutName (_bstr_t pName) {
		HRESULT _hr = put_Name(pName);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline _bstr_t IProjectInfo::GetStage() {
		BSTR _result = 0;
		HRESULT _hr = get_Stage(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline void IProjectInfo::PutStage (_bstr_t pStage) {
		HRESULT _hr = put_Stage(pStage);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline _bstr_t IProjectInfo::GetDescription() {
		BSTR _result = 0;
		HRESULT _hr = get_Description(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline void IProjectInfo::PutDescription (_bstr_t pDescription) {
		HRESULT _hr = put_Description(pDescription);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline IPropertyContainerPtr IProjectInfo::GetProperties() {
		struct IPropertyContainer * _result = 0;
		HRESULT _hr = raw_GetProperties(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IPropertyContainerPtr(_result, false);
	}

	inline GUID IProjectInfo::GetUniqueId() {
		GUID _result;
		HRESULT _hr = get_UniqueId(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline _bstr_t IProjectInfo::GetUniqueIdS() {
		BSTR _result = 0;
		HRESULT _hr = get_UniqueIdS(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	// interface IPostalAddress wrapper method implementations

	inline _bstr_t IPostalAddress::GetAddressee() {
		BSTR _result = 0;
		HRESULT _hr = get_Addressee(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline void IPostalAddress::PutAddressee (_bstr_t pAddressee) {
		HRESULT _hr = put_Addressee(pAddressee);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline SAFEARRAY * IPostalAddress::GetAddressLines() {
		SAFEARRAY * _result = 0;
		HRESULT _hr = get_AddressLines(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline void IPostalAddress::PutAddressLines (SAFEARRAY * pAddressLines) {
		HRESULT _hr = put_AddressLines(pAddressLines);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline _bstr_t IPostalAddress::GetPostalBox() {
		BSTR _result = 0;
		HRESULT _hr = get_PostalBox(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline void IPostalAddress::PutPostalBox (_bstr_t pPostalBox) {
		HRESULT _hr = put_PostalBox(pPostalBox);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline _bstr_t IPostalAddress::GetTown() {
		BSTR _result = 0;
		HRESULT _hr = get_Town(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline void IPostalAddress::PutTown (_bstr_t pTown) {
		HRESULT _hr = put_Town(pTown);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline _bstr_t IPostalAddress::GetRegion() {
		BSTR _result = 0;
		HRESULT _hr = get_Region(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline void IPostalAddress::PutRegion (_bstr_t pRegion) {
		HRESULT _hr = put_Region(pRegion);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline _bstr_t IPostalAddress::GetPostcode() {
		BSTR _result = 0;
		HRESULT _hr = get_Postcode(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline void IPostalAddress::PutPostcode (_bstr_t pPostalCode) {
		HRESULT _hr = put_Postcode(pPostalCode);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline _bstr_t IPostalAddress::GetCountry() {
		BSTR _result = 0;
		HRESULT _hr = get_Country(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline void IPostalAddress::PutCountry (_bstr_t pCountry) {
		HRESULT _hr = put_Country(pCountry);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	// interface IBuildingInfo wrapper method implementations

	inline _bstr_t IBuildingInfo::GetNumber() {
		BSTR _result = 0;
		HRESULT _hr = get_Number(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline void IBuildingInfo::PutNumber (_bstr_t pNumber) {
		HRESULT _hr = put_Number(pNumber);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline _bstr_t IBuildingInfo::GetName() {
		BSTR _result = 0;
		HRESULT _hr = get_Name(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline void IBuildingInfo::PutName (_bstr_t pName) {
		HRESULT _hr = put_Name(pName);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline _bstr_t IBuildingInfo::GetDescription() {
		BSTR _result = 0;
		HRESULT _hr = get_Description(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline void IBuildingInfo::PutDescription (_bstr_t pDescription) {
		HRESULT _hr = put_Description(pDescription);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline IPostalAddressPtr IBuildingInfo::GetAddress() {
		struct IPostalAddress * _result = 0;
		HRESULT _hr = raw_GetAddress(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IPostalAddressPtr(_result, false);
	}

	inline IPropertyContainerPtr IBuildingInfo::GetProperties() {
		struct IPropertyContainer * _result = 0;
		HRESULT _hr = raw_GetProperties(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IPropertyContainerPtr(_result, false);
	}

	inline GUID IBuildingInfo::GetUniqueId() {
		GUID _result;
		HRESULT _hr = get_UniqueId(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline _bstr_t IBuildingInfo::GetUniqueIdS() {
		BSTR _result = 0;
		HRESULT _hr = get_UniqueIdS(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline int IBuildingInfo::GetId() {
		int _result = 0;
		HRESULT _hr = get_Id(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	// interface ISiteInfo wrapper method implementations

	inline _bstr_t ISiteInfo::GetNumber() {
		BSTR _result = 0;
		HRESULT _hr = get_Number(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline void ISiteInfo::PutNumber (_bstr_t pNumber) {
		HRESULT _hr = put_Number(pNumber);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline _bstr_t ISiteInfo::GetName() {
		BSTR _result = 0;
		HRESULT _hr = get_Name(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline void ISiteInfo::PutName (_bstr_t pName) {
		HRESULT _hr = put_Name(pName);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline _bstr_t ISiteInfo::GetDescription() {
		BSTR _result = 0;
		HRESULT _hr = get_Description(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline void ISiteInfo::PutDescription (_bstr_t pDescription) {
		HRESULT _hr = put_Description(pDescription);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline IPostalAddressPtr ISiteInfo::GetAddress() {
		struct IPostalAddress * _result = 0;
		HRESULT _hr = raw_GetAddress(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IPostalAddressPtr(_result, false);
	}

	inline IPropertyContainerPtr ISiteInfo::GetProperties() {
		struct IPropertyContainer * _result = 0;
		HRESULT _hr = raw_GetProperties(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IPropertyContainerPtr(_result, false);
	}

	inline GUID ISiteInfo::GetUniqueId() {
		GUID _result;
		HRESULT _hr = get_UniqueId(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline _bstr_t ISiteInfo::GetUniqueIdS() {
		BSTR _result = 0;
		HRESULT _hr = get_UniqueIdS(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	// interface IEntityCollection wrapper method implementations

	inline IEntityPtr IEntityCollection::GetById (int Id) {
		struct IEntity * _result = 0;
		HRESULT _hr = raw_GetById(Id, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityPtr(_result, false);
	}

	inline SAFEARRAY * IEntityCollection::GetIds() {
		SAFEARRAY * _result = 0;
		HRESULT _hr = raw_GetIds(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IEntityPtr IEntityCollection::GetByUniqueId (GUID Id) {
		struct IEntity * _result = 0;
		HRESULT _hr = raw_GetByUniqueId(Id, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityPtr(_result, false);
	}

	inline IEntityPtr IEntityCollection::GetByUniqueIdS (_bstr_t Id) {
		struct IEntity * _result = 0;
		HRESULT _hr = raw_GetByUniqueIdS(Id, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityPtr(_result, false);
	}

	inline IGuidCollectionPtr IEntityCollection::GetUniqueIds() {
		struct IGuidCollection * _result = 0;
		HRESULT _hr = raw_GetUniqueIds(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IGuidCollectionPtr(_result, false);
	}

	inline VARIANT_BOOL IEntityCollection::Contains (int Id) {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = raw_Contains(Id, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline VARIANT_BOOL IEntityCollection::ContainsUniqueId (GUID Id) {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = raw_ContainsUniqueId(Id, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline VARIANT_BOOL IEntityCollection::ContainsUniqueIdS (_bstr_t Id) {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = raw_ContainsUniqueIdS(Id, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline int IEntityCollection::GetCount() {
		int _result = 0;
		HRESULT _hr = get_Count(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IEntityPtr IEntityCollection::GetByIndex (int index) {
		struct IEntity * _result = 0;
		HRESULT _hr = raw_GetByIndex(index, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityPtr(_result, false);
	}

	inline HRESULT IEntityCollection::Remove (int Id) {
		HRESULT _hr = raw_Remove(Id);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IEntityCollection::RemoveByUniqueId (GUID Id) {
		HRESULT _hr = raw_RemoveByUniqueId(Id);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IEntityCollection::RemoveByUniqueIdS (_bstr_t Id) {
		HRESULT _hr = raw_RemoveByUniqueIdS(Id);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IEntityCollection::Clear() {
		HRESULT _hr = raw_Clear();
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline INewEntityArgsPtr IEntityCollection::CreateNewEntityArgs() {
		struct INewEntityArgs * _result = 0;
		HRESULT _hr = raw_CreateNewEntityArgs(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return INewEntityArgsPtr(_result, false);
	}

	inline IEntityPtr IEntityCollection::Create (struct INewEntityArgs * pArgs) {
		struct IEntity * _result = 0;
		HRESULT _hr = raw_Create(pArgs, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityPtr(_result, false);
	}

	// interface IUndoStack wrapper method implementations

	inline HRESULT IUndoStack::Undo() {
		HRESULT _hr = raw_Undo();
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IUndoStack::Redo() {
		HRESULT _hr = raw_Redo();
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline VARIANT_BOOL IUndoStack::HasUndo() {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = raw_HasUndo(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline VARIANT_BOOL IUndoStack::HasRedo() {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = raw_HasRedo(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	// interface IPipeSystemConnectionParameters wrapper method implementations

	inline VARIANT_BOOL IPipeSystemConnectionParameters::GetConsiderEnclosingStructuresMagistral() {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = get_ConsiderEnclosingStructuresMagistral(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline void IPipeSystemConnectionParameters::PutConsiderEnclosingStructuresMagistral (VARIANT_BOOL value) {
		HRESULT _hr = put_ConsiderEnclosingStructuresMagistral(value);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline VARIANT_BOOL IPipeSystemConnectionParameters::GetConsiderEnclosingStructuresBranch() {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = get_ConsiderEnclosingStructuresBranch(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline void IPipeSystemConnectionParameters::PutConsiderEnclosingStructuresBranch (VARIANT_BOOL value) {
		HRESULT _hr = put_ConsiderEnclosingStructuresBranch(value);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline double IPipeSystemConnectionParameters::GetHeightMagistral() {
		double _result = 0;
		HRESULT _hr = get_HeightMagistral(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline void IPipeSystemConnectionParameters::PutHeightMagistral (double routeHeight) {
		HRESULT _hr = put_HeightMagistral(routeHeight);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline double IPipeSystemConnectionParameters::GetHeightBranch() {
		double _result = 0;
		HRESULT _hr = get_HeightBranch(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline void IPipeSystemConnectionParameters::PutHeightBranch (double routeHeight) {
		HRESULT _hr = put_HeightBranch(routeHeight);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline double IPipeSystemConnectionParameters::GetOffsetMagistral() {
		double _result = 0;
		HRESULT _hr = get_OffsetMagistral(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline void IPipeSystemConnectionParameters::PutOffsetMagistral (double routeOffset) {
		HRESULT _hr = put_OffsetMagistral(routeOffset);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline double IPipeSystemConnectionParameters::GetOffsetBranch() {
		double _result = 0;
		HRESULT _hr = get_OffsetBranch(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline void IPipeSystemConnectionParameters::PutOffsetBranch (double routeOffset) {
		HRESULT _hr = put_OffsetBranch(routeOffset);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline HRESULT IPipeSystemConnectionParameters::AddPipeStyleMagistral (int pipeStyleId, int insulationId) {
		HRESULT _hr = raw_AddPipeStyleMagistral(pipeStyleId, insulationId);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IPipeSystemConnectionParameters::AddPipeStyleBranch (int pipeStyleId, int insulationId) {
		HRESULT _hr = raw_AddPipeStyleBranch(pipeStyleId, insulationId);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IPipeSystemConnectionParameters::DeletePipeStyleMagistral (int pipeStyleId) {
		HRESULT _hr = raw_DeletePipeStyleMagistral(pipeStyleId);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IPipeSystemConnectionParameters::DeletePipeStyleBranch (int pipeStyleId) {
		HRESULT _hr = raw_DeletePipeStyleBranch(pipeStyleId);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IPipeSystemConnectionParameters::SetInsulationIdMagistral (int pipeStyleId, int insulationId) {
		HRESULT _hr = raw_SetInsulationIdMagistral(pipeStyleId, insulationId);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IPipeSystemConnectionParameters::SetInsulationIdBranch (int pipeStyleId, int insulationId) {
		HRESULT _hr = raw_SetInsulationIdBranch(pipeStyleId, insulationId);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline int IPipeSystemConnectionParameters::GetInsulationIdMagistral (int pipeStyleId) {
		int _result = 0;
		HRESULT _hr = raw_GetInsulationIdMagistral(pipeStyleId, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline int IPipeSystemConnectionParameters::GetInsulationIdBranch (int pipeStyleId) {
		int _result = 0;
		HRESULT _hr = raw_GetInsulationIdBranch(pipeStyleId, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline HRESULT IPipeSystemConnectionParameters::AddPipeFittingStyle (int pipeFittingStyleId) {
		HRESULT _hr = raw_AddPipeFittingStyle(pipeFittingStyleId);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IPipeSystemConnectionParameters::DeletePipeFittingStyle (int pipeFittingStyleId) {
		HRESULT _hr = raw_DeletePipeFittingStyle(pipeFittingStyleId);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	// interface IDuctSystemConnectionParameters wrapper method implementations

	inline VARIANT_BOOL IDuctSystemConnectionParameters::GetConsiderEnclosingStructuresMagistral() {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = get_ConsiderEnclosingStructuresMagistral(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline void IDuctSystemConnectionParameters::PutConsiderEnclosingStructuresMagistral (VARIANT_BOOL value) {
		HRESULT _hr = put_ConsiderEnclosingStructuresMagistral(value);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline VARIANT_BOOL IDuctSystemConnectionParameters::GetConsiderEnclosingStructuresBranch() {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = get_ConsiderEnclosingStructuresBranch(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline void IDuctSystemConnectionParameters::PutConsiderEnclosingStructuresBranch (VARIANT_BOOL value) {
		HRESULT _hr = put_ConsiderEnclosingStructuresBranch(value);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline double IDuctSystemConnectionParameters::GetHeightMagistral() {
		double _result = 0;
		HRESULT _hr = get_HeightMagistral(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline void IDuctSystemConnectionParameters::PutHeightMagistral (double routeHeight) {
		HRESULT _hr = put_HeightMagistral(routeHeight);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline double IDuctSystemConnectionParameters::GetHeightBranch() {
		double _result = 0;
		HRESULT _hr = get_HeightBranch(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline void IDuctSystemConnectionParameters::PutHeightBranch (double routeHeight) {
		HRESULT _hr = put_HeightBranch(routeHeight);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline double IDuctSystemConnectionParameters::GetOffsetMagistral() {
		double _result = 0;
		HRESULT _hr = get_OffsetMagistral(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline void IDuctSystemConnectionParameters::PutOffsetMagistral (double routeOffset) {
		HRESULT _hr = put_OffsetMagistral(routeOffset);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline double IDuctSystemConnectionParameters::GetOffsetBranch() {
		double _result = 0;
		HRESULT _hr = get_OffsetBranch(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline void IDuctSystemConnectionParameters::PutOffsetBranch (double routeOffset) {
		HRESULT _hr = put_OffsetBranch(routeOffset);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline HRESULT IDuctSystemConnectionParameters::AddDuctStyleMagistral (int ductStyleId, int insulationId) {
		HRESULT _hr = raw_AddDuctStyleMagistral(ductStyleId, insulationId);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IDuctSystemConnectionParameters::AddDuctStyleBranch (int ductStyleId, int insulationId) {
		HRESULT _hr = raw_AddDuctStyleBranch(ductStyleId, insulationId);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IDuctSystemConnectionParameters::DeleteDuctStyleMagistral (int ductStyleId) {
		HRESULT _hr = raw_DeleteDuctStyleMagistral(ductStyleId);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IDuctSystemConnectionParameters::DeleteDuctStyleBranch (int ductStyleId) {
		HRESULT _hr = raw_DeleteDuctStyleBranch(ductStyleId);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IDuctSystemConnectionParameters::SetInsulationIdMagistral (int ductStyleId, int insulationId) {
		HRESULT _hr = raw_SetInsulationIdMagistral(ductStyleId, insulationId);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IDuctSystemConnectionParameters::SetInsulationIdBranch (int ductStyleId, int insulationId) {
		HRESULT _hr = raw_SetInsulationIdBranch(ductStyleId, insulationId);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline int IDuctSystemConnectionParameters::GetInsulationIdMagistral (int ductStyleId) {
		int _result = 0;
		HRESULT _hr = raw_GetInsulationIdMagistral(ductStyleId, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline int IDuctSystemConnectionParameters::GetInsulationIdBranch (int ductStyleId) {
		int _result = 0;
		HRESULT _hr = raw_GetInsulationIdBranch(ductStyleId, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline HRESULT IDuctSystemConnectionParameters::AddDuctFittingStyle (int ductFittingStyleId) {
		HRESULT _hr = raw_AddDuctFittingStyle(ductFittingStyleId);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IDuctSystemConnectionParameters::DeleteDuctFittingStyle (int ductFittingStyleId) {
		HRESULT _hr = raw_DeleteDuctFittingStyle(ductFittingStyleId);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	// interface IElectricalSystemConnectionParameters wrapper method implementations

	inline VARIANT_BOOL IElectricalSystemConnectionParameters::GetConsiderEnclosingStructures() {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = get_ConsiderEnclosingStructures(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline void IElectricalSystemConnectionParameters::PutConsiderEnclosingStructures (VARIANT_BOOL value) {
		HRESULT _hr = put_ConsiderEnclosingStructures(value);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline double IElectricalSystemConnectionParameters::GetHeight() {
		double _result = 0;
		HRESULT _hr = get_Height(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline void IElectricalSystemConnectionParameters::PutHeight (double routeHeight) {
		HRESULT _hr = put_Height(routeHeight);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline double IElectricalSystemConnectionParameters::Getoffset() {
		double _result = 0;
		HRESULT _hr = get_offset(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline void IElectricalSystemConnectionParameters::Putoffset (double routeOffset) {
		HRESULT _hr = put_offset(routeOffset);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline HRESULT IElectricalSystemConnectionParameters::AddElectricalCircuitLineStyle (int electricalCircuitLineStyleId) {
		HRESULT _hr = raw_AddElectricalCircuitLineStyle(electricalCircuitLineStyleId);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IElectricalSystemConnectionParameters::DeleteElectricalCircuitLineStyle (int electricalCircuitLineStyleId) {
		HRESULT _hr = raw_DeleteElectricalCircuitLineStyle(electricalCircuitLineStyleId);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	// interface IEngineeringObjectConnector wrapper method implementations

	inline IPipeSystemConnectionParametersPtr IEngineeringObjectConnector::CreatePipeSystemConnectionParameters() {
		struct IPipeSystemConnectionParameters * _result = 0;
		HRESULT _hr = raw_CreatePipeSystemConnectionParameters(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IPipeSystemConnectionParametersPtr(_result, false);
	}

	inline IDispatchPtr IEngineeringObjectConnector::CreatePipeSystemConnection (struct IPipeSystemConnectionParameters * pPipeSystemConnectionParameters, int sourceId, int sourcePort, int targetId, int targetPort, enum SystemCategory SystemCategory) {
		IDispatch * _result = 0;
		HRESULT _hr = raw_CreatePipeSystemConnection(pPipeSystemConnectionParameters, sourceId, sourcePort, targetId, targetPort, SystemCategory, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IDispatchPtr(_result, false);
	}

	inline IDuctSystemConnectionParametersPtr IEngineeringObjectConnector::CreateDuctSystemConnectionParameters() {
		struct IDuctSystemConnectionParameters * _result = 0;
		HRESULT _hr = raw_CreateDuctSystemConnectionParameters(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IDuctSystemConnectionParametersPtr(_result, false);
	}

	inline IDispatchPtr IEngineeringObjectConnector::CreateDuctSystemConnection (struct IDuctSystemConnectionParameters * pDuctSystemConnectionParameters, int sourceId, int sourcePort, int targetId, int targetPort, enum SystemCategory SystemCategory) {
		IDispatch * _result = 0;
		HRESULT _hr = raw_CreateDuctSystemConnection(pDuctSystemConnectionParameters, sourceId, sourcePort, targetId, targetPort, SystemCategory, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IDispatchPtr(_result, false);
	}

	inline IElectricalSystemConnectionParametersPtr IEngineeringObjectConnector::CreateElectricalSystemConnectionParameters() {
		struct IElectricalSystemConnectionParameters * _result = 0;
		HRESULT _hr = raw_CreateElectricalSystemConnectionParameters(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IElectricalSystemConnectionParametersPtr(_result, false);
	}

	inline IDispatchPtr IEngineeringObjectConnector::CreateElectricalSystemConnection (struct IElectricalSystemConnectionParameters * pElectricalSystemConnectionParameters, int sourceId, int sourcePort, int targetId, int targetPort, enum SystemCategory SystemCategory) {
		IDispatch * _result = 0;
		HRESULT _hr = raw_CreateElectricalSystemConnection(pElectricalSystemConnectionParameters, sourceId, sourcePort, targetId, targetPort, SystemCategory, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IDispatchPtr(_result, false);
	}

	// interface IProject wrapper method implementations

	inline _bstr_t IProject::GetFilePath() {
		BSTR _result = 0;
		HRESULT _hr = get_FilePath(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline VARIANT_BOOL IProject::HasFile() {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = raw_HasFile(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IModelPtr IProject::GetModel() {
		struct IModel * _result = 0;
		HRESULT _hr = get_Model(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IModelPtr(_result, false);
	}

	inline IPropertyManagerPtr IProject::GetPropertyManager() {
		struct IPropertyManager * _result = 0;
		HRESULT _hr = get_PropertyManager(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IPropertyManagerPtr(_result, false);
	}

	inline IMaterialManagerPtr IProject::GetMaterialManager() {
		struct IMaterialManager * _result = 0;
		HRESULT _hr = get_MaterialManager(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IMaterialManagerPtr(_result, false);
	}

	inline ILayeredMaterialManagerPtr IProject::GetLayeredMaterialManager() {
		struct ILayeredMaterialManager * _result = 0;
		HRESULT _hr = get_LayeredMaterialManager(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ILayeredMaterialManagerPtr(_result, false);
	}

	inline IDataExporterPtr IProject::GetDataExporter() {
		struct IDataExporter * _result = 0;
		HRESULT _hr = get_DataExporter(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IDataExporterPtr(_result, false);
	}

	inline IReinforcementUnitStyleManagerPtr IProject::GetReinforcementUnitStyleManager() {
		struct IReinforcementUnitStyleManager * _result = 0;
		HRESULT _hr = get_ReinforcementUnitStyleManager(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IReinforcementUnitStyleManagerPtr(_result, false);
	}

	inline enum ProjectType IProject::GetProjectType() {
		enum ProjectType _result;
		HRESULT _hr = get_ProjectType(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IDrawingCollectionPtr IProject::GetDrawings() {
		struct IDrawingCollection * _result = 0;
		HRESULT _hr = get_Drawings(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IDrawingCollectionPtr(_result, false);
	}

	inline VARIANT_BOOL IProject::HasUnsavedChanges() {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = raw_HasUnsavedChanges(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline int IProject::Save() {
		int _result = 0;
		HRESULT _hr = raw_Save(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline int IProject::SaveAs (_bstr_t FilePath, enum ProjectType ProjectType, VARIANT_BOOL overwrite) {
		int _result = 0;
		HRESULT _hr = raw_SaveAs(FilePath, ProjectType, overwrite, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline int IProject::ExportToIfc (_bstr_t FilePath, VARIANT_BOOL overwrite) {
		int _result = 0;
		HRESULT _hr = raw_ExportToIfc(FilePath, overwrite, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IProfileDescriptionManagerPtr IProject::GetProfileDescriptionManager() {
		struct IProfileDescriptionManager * _result = 0;
		HRESULT _hr = get_ProfileDescriptionManager(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IProfileDescriptionManagerPtr(_result, false);
	}

	inline IBeamStyleManagerPtr IProject::GetBeamStyleManager() {
		struct IBeamStyleManager * _result = 0;
		HRESULT _hr = get_BeamStyleManager(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IBeamStyleManagerPtr(_result, false);
	}

	inline IColumnStyleManagerPtr IProject::GetColumnStyleManager() {
		struct IColumnStyleManager * _result = 0;
		HRESULT _hr = get_ColumnStyleManager(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IColumnStyleManagerPtr(_result, false);
	}

	inline int IProject::ExportToCsv (_bstr_t folderPath, VARIANT_BOOL overwrite) {
		int _result = 0;
		HRESULT _hr = raw_ExportToCsv(folderPath, overwrite, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline int IProject::ExportDrawingsToPdf (SAFEARRAY * drawingIds, _bstr_t FilePath, VARIANT_BOOL overwrite) {
		int _result = 0;
		HRESULT _hr = raw_ExportDrawingsToPdf(drawingIds, FilePath, overwrite, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline ISystemStyleManagerPtr IProject::GetSystemStyleManager() {
		struct ISystemStyleManager * _result = 0;
		HRESULT _hr = get_SystemStyleManager(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ISystemStyleManagerPtr(_result, false);
	}

	inline IPlumbingFixtureStyleManagerPtr IProject::GetPlumbingFixtureStyleManager() {
		struct IPlumbingFixtureStyleManager * _result = 0;
		HRESULT _hr = get_PlumbingFixtureStyleManager(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IPlumbingFixtureStyleManagerPtr(_result, false);
	}

	inline IEquipmentStyleManagerPtr IProject::GetEquipmentStyleManager() {
		struct IEquipmentStyleManager * _result = 0;
		HRESULT _hr = get_EquipmentStyleManager(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEquipmentStyleManagerPtr(_result, false);
	}

	inline int IProject::ExportToIfc2 (_bstr_t FilePath, VARIANT_BOOL overwrite, struct IIfcExportSettings * pIfcExportSettings) {
		int _result = 0;
		HRESULT _hr = raw_ExportToIfc2(FilePath, overwrite, pIfcExportSettings, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IProjectInfoPtr IProject::GetProjectInfo() {
		struct IProjectInfo * _result = 0;
		HRESULT _hr = get_ProjectInfo(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IProjectInfoPtr(_result, false);
	}

	inline IBuildingInfoPtr IProject::GetBuildingInfo() {
		struct IBuildingInfo * _result = 0;
		HRESULT _hr = get_BuildingInfo(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IBuildingInfoPtr(_result, false);
	}

	inline ISiteInfoPtr IProject::GetSiteInfo() {
		struct ISiteInfo * _result = 0;
		HRESULT _hr = get_SiteInfo(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ISiteInfoPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetPipeAccessoryStyles() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_PipeAccessoryStyles(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetPipeStyles() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_PipeStyles(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetPipeFittingStyles() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_PipeFittingStyles(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetMechanicalEquipmentStyles() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_MechanicalEquipmentStyles(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetDuctStyles() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_DuctStyles(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetDuctFittingStyles() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_DuctFittingStyles(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetDuctAccessoryStyles() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_DuctAccessoryStyles(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetLightingFixtureStyles() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_LightingFixtureStyles(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetWiringAccessoryStyles() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_WiringAccessoryStyles(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetElectricDistributionBoardStyles() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_ElectricDistributionBoardStyles(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetElectricalConductorStyles() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_ElectricalConductorStyles(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetElectricalCircuitLineStyles() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_ElectricalCircuitLineStyles(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetSystemStyles() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_SystemStyles(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetPlumbingFixtureStyles() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_PlumbingFixtureStyles(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetEquipmentStyles() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_EquipmentStyles(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetAssemblies() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_Assemblies(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline int IProject::ExportDrawingsToPdfS (SAFEARRAY * drawingIds, _bstr_t FilePath, VARIANT_BOOL overwrite) {
		int _result = 0;
		HRESULT _hr = raw_ExportDrawingsToPdfS(drawingIds, FilePath, overwrite, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline int IProject::ExportDrawingsToOpenXpsS (SAFEARRAY * drawingIds, _bstr_t FilePath, VARIANT_BOOL overwrite) {
		int _result = 0;
		HRESULT _hr = raw_ExportDrawingsToOpenXpsS(drawingIds, FilePath, overwrite, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IEntityCollectionPtr IProject::GetDrawings2() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_Drawings2(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetElementStyles() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_ElementStyles(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetBeamStyles() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_BeamStyles(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetColumnStyles() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_ColumnStyles(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetPlateStyles() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_PlateStyles(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetMaterials() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_Materials(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetWindowStyles() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_WindowStyles(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetDoorStyles() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_DoorStyles(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetLayeredMaterials() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_LayeredMaterials(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetProfiles() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_Profiles(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline IOperationPtr IProject::CreateOperation() {
		struct IOperation * _result = 0;
		HRESULT _hr = raw_CreateOperation(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IOperationPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetTopics() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_Topics(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetLayoutStyles() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_LayoutStyles(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetPageFormatStyles() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_PageFormatStyles(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline int IProject::GetEntityNumberInTopic (GUID entityId) {
		int _result = 0;
		HRESULT _hr = raw_GetEntityNumberInTopic(entityId, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline int IProject::GetEntityNumberInTopicS (_bstr_t entityId) {
		int _result = 0;
		HRESULT _hr = raw_GetEntityNumberInTopicS(entityId, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline _bstr_t IProject::GetJournalPath() {
		BSTR _result = 0;
		HRESULT _hr = get_JournalPath(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline VARIANT_BOOL IProject::HasActiveOperation() {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = raw_HasActiveOperation(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IOperationPtr IProject::CreateOperationWithUndo (GUID modelId) {
		struct IOperation * _result = 0;
		HRESULT _hr = raw_CreateOperationWithUndo(modelId, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IOperationPtr(_result, false);
	}

	inline IUndoStackPtr IProject::GetUndoStack (GUID modelId) {
		struct IUndoStack * _result = 0;
		HRESULT _hr = raw_GetUndoStack(modelId, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IUndoStackPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetDuctAccessoryCategories() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_DuctAccessoryCategories(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetPipeAccessoryCategories() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_PipeAccessoryCategories(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetDuctFittingCategories() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_DuctFittingCategories(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetPipeFittingCategories() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_PipeFittingCategories(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetMechanicalEquipmentCategories() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_MechanicalEquipmentCategories(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetEquipmentCategories() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_EquipmentCategories(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetPlumbingFixtureCategories() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_PlumbingFixtureCategories(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetElectricDistributionBoardCategories() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_ElectricDistributionBoardCategories(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetWiringAccessoryCategories() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_WiringAccessoryCategories(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetLightingFixtureCategories() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_LightingFixtureCategories(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetHoleStyles() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_HoleStyles(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline IEntityPtr IProject::ImportCategory (GUID entityTypeId, _bstr_t FilePath) {
		struct IEntity * _result = 0;
		HRESULT _hr = raw_ImportCategory(entityTypeId, FilePath, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityPtr(_result, false);
	}

	inline IEntityPtr IProject::ImportCategoryS (_bstr_t entityTypeId, _bstr_t FilePath) {
		struct IEntity * _result = 0;
		HRESULT _hr = raw_ImportCategoryS(entityTypeId, FilePath, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetReinforcementStyles() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_ReinforcementStyles(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetReinforcementUnitStyles() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_ReinforcementUnitStyles(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetRebarStyles() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_RebarStyles(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetReinforcementGrades() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_ReinforcementGrades(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline int IProject::ExportObjectsToIFC (_bstr_t FilePath, SAFEARRAY * objectToExportIds, VARIANT_BOOL overwrite, struct IIfcExportSettings * pIfcExportSettings) {
		int _result = 0;
		HRESULT _hr = raw_ExportObjectsToIFC(FilePath, objectToExportIds, overwrite, pIfcExportSettings, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IEntityCollectionPtr IProject::GetReinforcementUnitStyleTemplates() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_ReinforcementUnitStyleTemplates(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline IOperationPtr IProject::StartOperation() {
		struct IOperation * _result = 0;
		HRESULT _hr = raw_StartOperation(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IOperationPtr(_result, false);
	}

	inline IOperationPtr IProject::StartOperationWithUndo (GUID modelId) {
		struct IOperation * _result = 0;
		HRESULT _hr = raw_StartOperationWithUndo(modelId, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IOperationPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetImageLinks() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_ImageLinks(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetModelLinks() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_ModelLinks(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetDrawingLinks() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_DrawingLinks(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetScales() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_Scales(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetWallReinforcementStyleTemplates() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_WallReinforcementStyleTemplates(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetFloorReinforcementStyleTemplates() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_FloorReinforcementStyleTemplates(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetIsolatedFoundationReinforcementStyleTemplates() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_IsolatedFoundationReinforcementStyleTemplates(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	inline IEngineeringObjectConnectorPtr IProject::GetEngineeringObjectConnector() {
		struct IEngineeringObjectConnector * _result = 0;
		HRESULT _hr = get_EngineeringObjectConnector(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEngineeringObjectConnectorPtr(_result, false);
	}

	inline IEntityCollectionPtr IProject::GetIfcLinks() {
		struct IEntityCollection * _result = 0;
		HRESULT _hr = get_IfcLinks(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IEntityCollectionPtr(_result, false);
	}

	// interface IView wrapper method implementations

	inline int IView::GetId() {
		int _result = 0;
		HRESULT _hr = get_Id(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline enum ViewType IView::GetType() {
		enum ViewType _result;
		HRESULT _hr = get_Type(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	// interface IModelView wrapper method implementations

	inline HRESULT IModelView::SetObjectsVisibility (SAFEARRAY * objectIds, VARIANT_BOOL visible_) {
		HRESULT _hr = raw_SetObjectsVisibility(objectIds, visible_);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline VARIANT_BOOL IModelView::IsObjectVisible (int objectId) {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = raw_IsObjectVisible(objectId, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline HRESULT IModelView::SetObjectsVisualStyle (SAFEARRAY * objectIds, enum VisualStyle visualStyle_) {
		HRESULT _hr = raw_SetObjectsVisualStyle(objectIds, visualStyle_);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline enum VisualStyle IModelView::GetObjectVisualStyle (int objectId) {
		enum VisualStyle _result;
		HRESULT _hr = raw_GetObjectVisualStyle(objectId, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline void IModelView::PutVisualStyle (enum VisualStyle pVisualStyle) {
		HRESULT _hr = put_VisualStyle(pVisualStyle);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline enum VisualStyle IModelView::GetVisualStyle() {
		enum VisualStyle _result;
		HRESULT _hr = get_VisualStyle(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline HRESULT IModelView::ShowObjects (SAFEARRAY * objectIds) {
		HRESULT _hr = raw_ShowObjects(objectIds);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline int IModelView::GetRepresentedEntityId() {
		int _result = 0;
		HRESULT _hr = get_RepresentedEntityId(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline SAFEARRAY * IModelView::GetVisibleObjects() {
		SAFEARRAY * _result = 0;
		HRESULT _hr = raw_GetVisibleObjects(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline SAFEARRAY * IModelView::GetHiddenObjects() {
		SAFEARRAY * _result = 0;
		HRESULT _hr = raw_GetHiddenObjects(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IDispatchPtr IModelView::GetInterfaceByName (_bstr_t interfaceName) {
		IDispatch * _result = 0;
		HRESULT _hr = raw_GetInterfaceByName(interfaceName, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IDispatchPtr(_result, false);
	}

	// interface IView3DParams wrapper method implementations

	inline ICamera3DPtr IView3DParams::GetCamera() {
		struct ICamera3D * _result = 0;
		HRESULT _hr = get_Camera(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ICamera3DPtr(_result, false);
	}

	// interface ILevelViewParams wrapper method implementations

	inline int ILevelViewParams::GetLevelId() {
		int _result = 0;
		HRESULT _hr = get_LevelId(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	// interface IEvent wrapper method implementations

	inline enum EventType IEvent::GetEventType() {
		enum EventType _result;
		HRESULT _hr = raw_GetEventType(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	// interface IApplicationCloseEvent wrapper method implementations

	inline HRESULT IApplicationCloseEvent::Prevent() {
		HRESULT _hr = raw_Prevent();
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	// interface IProjectCloseEvent wrapper method implementations

	inline HRESULT IProjectCloseEvent::Prevent() {
		HRESULT _hr = raw_Prevent();
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	// interface IArc2D wrapper method implementations

	inline IPlacement2DPtr IArc2D::GetPlacement() {
		struct IPlacement2D * _result = 0;
		HRESULT _hr = raw_GetPlacement(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IPlacement2DPtr(_result, false);
	}

	inline double IArc2D::GetRadius() {
		double _result = 0;
		HRESULT _hr = raw_GetRadius(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double IArc2D::GetRadiusA() {
		double _result = 0;
		HRESULT _hr = raw_GetRadiusA(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double IArc2D::GetRadiusB() {
		double _result = 0;
		HRESULT _hr = raw_GetRadiusB(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double IArc2D::GetBeginAngle() {
		double _result = 0;
		HRESULT _hr = raw_GetBeginAngle(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double IArc2D::GetEndAngle() {
		double _result = 0;
		HRESULT _hr = raw_GetEndAngle(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double IArc2D::GetBeginGlobalAngle() {
		double _result = 0;
		HRESULT _hr = raw_GetBeginGlobalAngle(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double IArc2D::GetEndGlobalAngle() {
		double _result = 0;
		HRESULT _hr = raw_GetEndGlobalAngle(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline VARIANT_BOOL IArc2D::IsCircular() {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = raw_IsCircular(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline VARIANT_BOOL IArc2D::IsClockwise() {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = raw_IsClockwise(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline struct Point2D IArc2D::GetCenter() {
		struct Point2D _result;
		HRESULT _hr = raw_GetCenter(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	// interface IPolyCurve2D wrapper method implementations

	inline int IPolyCurve2D::GetSegmentCount() {
		int _result = 0;
		HRESULT _hr = raw_GetSegmentCount(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline ICurve2DPtr IPolyCurve2D::GetSegment (int index) {
		struct ICurve2D * _result = 0;
		HRESULT _hr = raw_GetSegment(index, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ICurve2DPtr(_result, false);
	}

	// interface ICurve2DCollection wrapper method implementations

	inline int ICurve2DCollection::GetCount() {
		int _result = 0;
		HRESULT _hr = get_Count(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline ICurve2DPtr ICurve2DCollection::Get (int index) {
		struct ICurve2D * _result = 0;
		HRESULT _hr = raw_Get(index, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ICurve2DPtr(_result, false);
	}

	// interface IArc3D wrapper method implementations

	inline IPlacement3DPtr IArc3D::GetPlacement() {
		struct IPlacement3D * _result = 0;
		HRESULT _hr = raw_GetPlacement(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IPlacement3DPtr(_result, false);
	}

	inline double IArc3D::GetRadius() {
		double _result = 0;
		HRESULT _hr = raw_GetRadius(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double IArc3D::GetRadiusA() {
		double _result = 0;
		HRESULT _hr = raw_GetRadiusA(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double IArc3D::GetRadiusB() {
		double _result = 0;
		HRESULT _hr = raw_GetRadiusB(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double IArc3D::GetBeginAngle() {
		double _result = 0;
		HRESULT _hr = raw_GetBeginAngle(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double IArc3D::GetEndAngle() {
		double _result = 0;
		HRESULT _hr = raw_GetEndAngle(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline struct Point3D IArc3D::GetCenter() {
		struct Point3D _result;
		HRESULT _hr = raw_GetCenter(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline VARIANT_BOOL IArc3D::IsCircular() {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = raw_IsCircular(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	// interface IPolyCurve3D wrapper method implementations

	inline int IPolyCurve3D::GetSegmentCount() {
		int _result = 0;
		HRESULT _hr = raw_GetSegmentCount(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline ICurve3DPtr IPolyCurve3D::GetSegment (int index) {
		struct ICurve3D * _result = 0;
		HRESULT _hr = raw_GetSegment(index, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ICurve3DPtr(_result, false);
	}

	// interface IBeamParams wrapper method implementations

	inline ICurve3DPtr IBeamParams::GetBaseline() {
		struct ICurve3D * _result = 0;
		HRESULT _hr = raw_GetBaseline(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ICurve3DPtr(_result, false);
	}

	inline int IBeamParams::GetStyleId() {
		int _result = 0;
		HRESULT _hr = get_StyleId(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IPlacement2DPtr IBeamParams::GetProfilePlacement() {
		struct IPlacement2D * _result = 0;
		HRESULT _hr = raw_GetProfilePlacement(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IPlacement2DPtr(_result, false);
	}

	inline IPlacement3DPtr IBeamParams::GetProfilePlacementOnBaseline (double param) {
		struct IPlacement3D * _result = 0;
		HRESULT _hr = raw_GetProfilePlacementOnBaseline(param, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IPlacement3DPtr(_result, false);
	}

	inline double IBeamParams::GetVerticalOffset() {
		double _result = 0;
		HRESULT _hr = get_VerticalOffset(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	// interface IColumnParams wrapper method implementations

	inline double IColumnParams::GetHeight() {
		double _result = 0;
		HRESULT _hr = get_Height(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline int IColumnParams::GetStyleId() {
		int _result = 0;
		HRESULT _hr = get_StyleId(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IPlacement2DPtr IColumnParams::GetProfilePlacement() {
		struct IPlacement2D * _result = 0;
		HRESULT _hr = raw_GetProfilePlacement(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IPlacement2DPtr(_result, false);
	}

	inline struct Point3D IColumnParams::GetPosition() {
		struct Point3D _result;
		HRESULT _hr = get_Position(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double IColumnParams::GetVerticalOffset() {
		double _result = 0;
		HRESULT _hr = get_VerticalOffset(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	// interface IFloorParams wrapper method implementations

	inline ICurve2DPtr IFloorParams::GetContour() {
		struct ICurve2D * _result = 0;
		HRESULT _hr = raw_GetContour(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ICurve2DPtr(_result, false);
	}

	inline double IFloorParams::GetThickness() {
		double _result = 0;
		HRESULT _hr = get_Thickness(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double IFloorParams::GetVerticalOffset() {
		double _result = 0;
		HRESULT _hr = get_VerticalOffset(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline SAFEARRAY * IFloorParams::GetDependentObjectIds() {
		SAFEARRAY * _result = 0;
		HRESULT _hr = raw_GetDependentObjectIds(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	// interface IWallContour wrapper method implementations

	inline ICurve2DPtr IWallContour::GetCenterLine() {
		struct ICurve2D * _result = 0;
		HRESULT _hr = raw_GetCenterLine(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ICurve2DPtr(_result, false);
	}

	inline ICurve2DPtr IWallContour::GetBaseline() {
		struct ICurve2D * _result = 0;
		HRESULT _hr = raw_GetBaseline(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ICurve2DPtr(_result, false);
	}

	inline ICurve2DPtr IWallContour::GetLeftCurve() {
		struct ICurve2D * _result = 0;
		HRESULT _hr = raw_GetLeftCurve(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ICurve2DPtr(_result, false);
	}

	inline ICurve2DPtr IWallContour::GetRightCurve() {
		struct ICurve2D * _result = 0;
		HRESULT _hr = raw_GetRightCurve(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ICurve2DPtr(_result, false);
	}

	inline ICurve2DPtr IWallContour::GetBeginCurve() {
		struct ICurve2D * _result = 0;
		HRESULT _hr = raw_GetBeginCurve(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ICurve2DPtr(_result, false);
	}

	inline ICurve2DPtr IWallContour::GetEndCurve() {
		struct ICurve2D * _result = 0;
		HRESULT _hr = raw_GetEndCurve(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ICurve2DPtr(_result, false);
	}

	inline ICurve2DPtr IWallContour::GetContour() {
		struct ICurve2D * _result = 0;
		HRESULT _hr = raw_GetContour(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ICurve2DPtr(_result, false);
	}

	// interface IWallParams wrapper method implementations

	inline IWallContourPtr IWallParams::GetContour() {
		struct IWallContour * _result = 0;
		HRESULT _hr = raw_GetContour(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IWallContourPtr(_result, false);
	}

	inline double IWallParams::GetHeight() {
		double _result = 0;
		HRESULT _hr = get_Height(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double IWallParams::GetThickness() {
		double _result = 0;
		HRESULT _hr = get_Thickness(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double IWallParams::GetVerticalOffset() {
		double _result = 0;
		HRESULT _hr = get_VerticalOffset(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline SAFEARRAY * IWallParams::GetDependentObjectIds() {
		SAFEARRAY * _result = 0;
		HRESULT _hr = raw_GetDependentObjectIds(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	// interface IWindowParams wrapper method implementations

	inline struct Point3D IWindowParams::GetPosition() {
		struct Point3D _result;
		HRESULT _hr = get_Position(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double IWindowParams::GetWidth() {
		double _result = 0;
		HRESULT _hr = get_Width(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double IWindowParams::GetHeight() {
		double _result = 0;
		HRESULT _hr = get_Height(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double IWindowParams::GetVerticalOffset() {
		double _result = 0;
		HRESULT _hr = get_VerticalOffset(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline SAFEARRAY * IWindowParams::GetAffectedObjectIds() {
		SAFEARRAY * _result = 0;
		HRESULT _hr = raw_GetAffectedObjectIds(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline ICurve2DPtr IWindowParams::CalculateProjection() {
		struct ICurve2D * _result = 0;
		HRESULT _hr = raw_CalculateProjection(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ICurve2DPtr(_result, false);
	}

	// interface IDoorParams wrapper method implementations

	inline struct Point3D IDoorParams::GetPosition() {
		struct Point3D _result;
		HRESULT _hr = get_Position(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double IDoorParams::GetWidth() {
		double _result = 0;
		HRESULT _hr = get_Width(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double IDoorParams::GetHeight() {
		double _result = 0;
		HRESULT _hr = get_Height(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double IDoorParams::GetVerticalOffset() {
		double _result = 0;
		HRESULT _hr = get_VerticalOffset(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline SAFEARRAY * IDoorParams::GetAffectedObjectIds() {
		SAFEARRAY * _result = 0;
		HRESULT _hr = raw_GetAffectedObjectIds(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline ICurve2DPtr IDoorParams::CalculateProjection() {
		struct ICurve2D * _result = 0;
		HRESULT _hr = raw_CalculateProjection(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ICurve2DPtr(_result, false);
	}

	// interface ILine3DParams wrapper method implementations

	inline ICurve3DPtr ILine3DParams::GetBaseline() {
		struct ICurve3D * _result = 0;
		HRESULT _hr = raw_GetBaseline(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ICurve3DPtr(_result, false);
	}

	inline double ILine3DParams::GetVerticalOffset() {
		double _result = 0;
		HRESULT _hr = get_VerticalOffset(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline struct Color ILine3DParams::GetColor() {
		struct Color _result;
		HRESULT _hr = get_Color(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline enum LineStyle ILine3DParams::GetStyle() {
		enum LineStyle _result;
		HRESULT _hr = get_Style(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	// interface IOpeningParams wrapper method implementations

	inline ICurve2DPtr IOpeningParams::GetContour() {
		struct ICurve2D * _result = 0;
		HRESULT _hr = raw_GetContour(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ICurve2DPtr(_result, false);
	}

	inline double IOpeningParams::GetThickness() {
		double _result = 0;
		HRESULT _hr = get_Thickness(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double IOpeningParams::GetVerticalOffset() {
		double _result = 0;
		HRESULT _hr = get_VerticalOffset(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline SAFEARRAY * IOpeningParams::GetAffectedObjectIds() {
		SAFEARRAY * _result = 0;
		HRESULT _hr = raw_GetAffectedObjectIds(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	// interface IObjectOnRoutePlacement wrapper method implementations

	inline int IObjectOnRoutePlacement::GetId() {
		int _result = 0;
		HRESULT _hr = get_Id(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double IObjectOnRoutePlacement::Getparameter() {
		double _result = 0;
		HRESULT _hr = get_parameter(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	// interface IFlowSegmentPlacement wrapper method implementations

	inline int IFlowSegmentPlacement::GetId() {
		int _result = 0;
		HRESULT _hr = get_Id(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline ICurve3DPtr IFlowSegmentPlacement::GetBaseline() {
		struct ICurve3D * _result = 0;
		HRESULT _hr = raw_GetBaseline(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ICurve3DPtr(_result, false);
	}

	// interface IRouteParams wrapper method implementations

	inline ICurve3DPtr IRouteParams::GetContour() {
		struct ICurve3D * _result = 0;
		HRESULT _hr = raw_GetContour(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ICurve3DPtr(_result, false);
	}

	inline int IRouteParams::GetSourceModelObjectId() {
		int _result = 0;
		HRESULT _hr = get_SourceModelObjectId(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline int IRouteParams::GetTargetModelObjectId() {
		int _result = 0;
		HRESULT _hr = get_TargetModelObjectId(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline int IRouteParams::GetSystemStyleId() {
		int _result = 0;
		HRESULT _hr = get_SystemStyleId(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline int IRouteParams::GetJointCount() {
		int _result = 0;
		HRESULT _hr = raw_GetJointCount(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline struct RouteJointParams IRouteParams::GetJointParams (int index) {
		struct RouteJointParams _result;
		HRESULT _hr = raw_GetJointParams(index, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline int IRouteParams::GetObjectOnRouteCount() {
		int _result = 0;
		HRESULT _hr = raw_GetObjectOnRouteCount(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IObjectOnRoutePlacementPtr IRouteParams::GetObjectOnRoutePlacement (int index) {
		struct IObjectOnRoutePlacement * _result = 0;
		HRESULT _hr = raw_GetObjectOnRoutePlacement(index, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IObjectOnRoutePlacementPtr(_result, false);
	}

	inline int IRouteParams::GetFlowSegmentCount() {
		int _result = 0;
		HRESULT _hr = raw_GetFlowSegmentCount(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IFlowSegmentPlacementPtr IRouteParams::GetFlowSegmentPlacement (int index) {
		struct IFlowSegmentPlacement * _result = 0;
		HRESULT _hr = raw_GetFlowSegmentPlacement(index, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IFlowSegmentPlacementPtr(_result, false);
	}

	inline int IRouteParams::GetSourcePortIndex() {
		int _result = 0;
		HRESULT _hr = get_SourcePortIndex(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline int IRouteParams::GetTargetPortIndex() {
		int _result = 0;
		HRESULT _hr = get_TargetPortIndex(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	// interface IScreenshotSettings wrapper method implementations

	inline void IScreenshotSettings::PutWidth (int pWidth) {
		HRESULT _hr = put_Width(pWidth);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline int IScreenshotSettings::GetWidth() {
		int _result = 0;
		HRESULT _hr = get_Width(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline void IScreenshotSettings::PutHeight (int pHeight) {
		HRESULT _hr = put_Height(pHeight);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline int IScreenshotSettings::GetHeight() {
		int _result = 0;
		HRESULT _hr = get_Height(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	// interface IScreenshotService wrapper method implementations

	inline IImagePtr IScreenshotService::MakeScreenshot (struct IScreenshotSettings * pSettings) {
		struct IImage * _result = 0;
		HRESULT _hr = raw_MakeScreenshot(pSettings, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IImagePtr(_result, false);
	}

	inline IScreenshotSettingsPtr IScreenshotService::CreateSettings() {
		struct IScreenshotSettings * _result = 0;
		HRESULT _hr = raw_CreateSettings(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IScreenshotSettingsPtr(_result, false);
	}

	// interface IRoofSlopes wrapper method implementations

	inline int IRoofSlopes::GetCount() {
		int _result = 0;
		HRESULT _hr = get_Count(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline enum RoofEdgeShape IRoofSlopes::GetRoofEdgeShape (int slopeIndex) {
		enum RoofEdgeShape _result;
		HRESULT _hr = raw_GetRoofEdgeShape(slopeIndex, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline HRESULT IRoofSlopes::SetRoofEdgeShape (int slopeIndex, enum RoofEdgeShape RoofEdgeShape) {
		HRESULT _hr = raw_SetRoofEdgeShape(slopeIndex, RoofEdgeShape);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline double IRoofSlopes::GetSlopeAngle (int slopeIndex) {
		double _result = 0;
		HRESULT _hr = raw_GetSlopeAngle(slopeIndex, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline HRESULT IRoofSlopes::SetSlopeAngle (int slopeIndex, double slopeAngle) {
		HRESULT _hr = raw_SetSlopeAngle(slopeIndex, slopeAngle);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline double IRoofSlopes::GetSlopeLevel (int slopeIndex) {
		double _result = 0;
		HRESULT _hr = raw_GetSlopeLevel(slopeIndex, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline HRESULT IRoofSlopes::SetSlopeLevel (int slopeIndex, double slopeLevel) {
		HRESULT _hr = raw_SetSlopeLevel(slopeIndex, slopeLevel);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline double IRoofSlopes::GetOverhang (int slopeIndex) {
		double _result = 0;
		HRESULT _hr = raw_GetOverhang(slopeIndex, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline HRESULT IRoofSlopes::SetOverhang (int slopeIndex, double overhang) {
		HRESULT _hr = raw_SetOverhang(slopeIndex, overhang);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	// interface IPortPipeParams wrapper method implementations

	inline enum PipeConnectionType IPortPipeParams::GetConnectionType() {
		enum PipeConnectionType _result;
		HRESULT _hr = get_ConnectionType(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double IPortPipeParams::GetNominalDiameter() {
		double _result = 0;
		HRESULT _hr = get_NominalDiameter(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	// interface IPortDuctParams wrapper method implementations

	inline enum DuctConnectionType IPortDuctParams::GetConnectionType() {
		enum DuctConnectionType _result;
		HRESULT _hr = get_ConnectionType(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline enum DuctProfile IPortDuctParams::GetDuctProfile() {
		enum DuctProfile _result;
		HRESULT _hr = get_DuctProfile(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double IPortDuctParams::GetNominalDiameter() {
		double _result = 0;
		HRESULT _hr = get_NominalDiameter(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double IPortDuctParams::GetNominalWidth() {
		double _result = 0;
		HRESULT _hr = get_NominalWidth(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline double IPortDuctParams::GetNominalHeight() {
		double _result = 0;
		HRESULT _hr = get_NominalHeight(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	// interface IMath wrapper method implementations

	inline ICurve3DPtr IMath::CreateLineSegment3D (struct Point3D startPoint, struct Point3D endPoint) {
		struct ICurve3D * _result = 0;
		HRESULT _hr = raw_CreateLineSegment3D(startPoint, endPoint, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ICurve3DPtr(_result, false);
	}

	inline ICurve3DPtr IMath::CreateArc3DByCenterStartEndPoints (struct Point3D centerPoint, struct Point3D startPoint, struct Point3D endPoint, VARIANT_BOOL clockwise) {
		struct ICurve3D * _result = 0;
		HRESULT _hr = raw_CreateArc3DByCenterStartEndPoints(centerPoint, startPoint, endPoint, clockwise, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ICurve3DPtr(_result, false);
	}

	inline ICurve3DPtr IMath::CreateArc3DByThreePoints (struct Point3D startPoint, struct Point3D intermediatePoint, struct Point3D endPoint) {
		struct ICurve3D * _result = 0;
		HRESULT _hr = raw_CreateArc3DByThreePoints(startPoint, intermediatePoint, endPoint, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ICurve3DPtr(_result, false);
	}

	inline ICurve3DPtr IMath::CreateCircle3D (struct Point3D centerPoint, struct Vector3D normalVector, double radius) {
		struct ICurve3D * _result = 0;
		HRESULT _hr = raw_CreateCircle3D(centerPoint, normalVector, radius, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ICurve3DPtr(_result, false);
	}

	inline ICurve3DPtr IMath::CreateCompositeCurve3D (SAFEARRAY * curves) {
		struct ICurve3D * _result = 0;
		HRESULT _hr = raw_CreateCompositeCurve3D(curves, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ICurve3DPtr(_result, false);
	}

	inline ICurve2DPtr IMath::CreateLineSegment2D (struct Point2D startPoint, struct Point2D endPoint) {
		struct ICurve2D * _result = 0;
		HRESULT _hr = raw_CreateLineSegment2D(startPoint, endPoint, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ICurve2DPtr(_result, false);
	}

	inline ICurve2DPtr IMath::CreateArc2DByCenterStartEndPoints (struct Point2D centerPoint, struct Point2D startPoint, struct Point2D endPoint, VARIANT_BOOL clockwise) {
		struct ICurve2D * _result = 0;
		HRESULT _hr = raw_CreateArc2DByCenterStartEndPoints(centerPoint, startPoint, endPoint, clockwise, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ICurve2DPtr(_result, false);
	}

	inline ICurve2DPtr IMath::CreateArc2DByThreePoints (struct Point2D startPoint, struct Point2D intermediatePoint, struct Point2D endPoint) {
		struct ICurve2D * _result = 0;
		HRESULT _hr = raw_CreateArc2DByThreePoints(startPoint, intermediatePoint, endPoint, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ICurve2DPtr(_result, false);
	}

	inline ICurve2DPtr IMath::CreateCircle2D (struct Point2D centerPoint, double radius) {
		struct ICurve2D * _result = 0;
		HRESULT _hr = raw_CreateCircle2D(centerPoint, radius, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ICurve2DPtr(_result, false);
	}

	inline ICurve2DPtr IMath::CreateCompositeCurve2D (SAFEARRAY * curves) {
		struct ICurve2D * _result = 0;
		HRESULT _hr = raw_CreateCompositeCurve2D(curves, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ICurve2DPtr(_result, false);
	}

	// interface _ISelectionEvents wrapper method implementations

	inline HRESULT _ISelectionEvents::OnModelSelectionChanged() {
		HRESULT _hr = raw_OnModelSelectionChanged();
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	// interface _IApplicationEvents wrapper method implementations

	inline HRESULT _IApplicationEvents::OnBeforeApplicationClose (struct IApplicationCloseEvent * pEvent) {
		HRESULT _hr = raw_OnBeforeApplicationClose(pEvent);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT _IApplicationEvents::OnBeforeProjectClose (struct IProjectCloseEvent * pEvent) {
		HRESULT _hr = raw_OnBeforeProjectClose(pEvent);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT _IApplicationEvents::OnProjectCreated() {
		HRESULT _hr = raw_OnProjectCreated();
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT _IApplicationEvents::OnProjectOpened (_bstr_t filePath_) {
		HRESULT _hr = raw_OnProjectOpened(filePath_);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT _IApplicationEvents::OnProjectSaved (_bstr_t filePath_) {
		HRESULT _hr = raw_OnProjectSaved(filePath_);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT _IApplicationEvents::OnProjectClosed() {
		HRESULT _hr = raw_OnProjectClosed();
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	// interface _IActionEvents wrapper method implementations

	inline HRESULT _IActionEvents::OnTriggered() {
		HRESULT _hr = raw_OnTriggered();
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT _IActionEvents::OnToggled (VARIANT_BOOL Checked) {
		HRESULT _hr = raw_OnToggled(Checked);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	// interface ISelection wrapper method implementations

	inline SAFEARRAY * ISelection::GetSelectedObjects() {
		SAFEARRAY * _result = 0;
		HRESULT _hr = raw_GetSelectedObjects(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline HRESULT ISelection::SetSelectedObjects (SAFEARRAY * objectIds) {
		HRESULT _hr = raw_SetSelectedObjects(objectIds);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	// interface IApplication wrapper method implementations

	inline HRESULT IApplication::Enable() {
		HRESULT _hr = raw_Enable();
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline HRESULT IApplication::Disable() {
		HRESULT _hr = raw_Disable();
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline void IApplication::PutEnabled (VARIANT_BOOL pEnabled) {
		HRESULT _hr = put_Enabled(pEnabled);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline VARIANT_BOOL IApplication::GetEnabled() {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = get_Enabled(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline int IApplication::GetMainWindowHandle() {
		int _result = 0;
		HRESULT _hr = raw_GetMainWindowHandle(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IViewPtr IApplication::GetActiveView() {
		struct IView * _result = 0;
		HRESULT _hr = get_ActiveView(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IViewPtr(_result, false);
	}

	inline IUIPtr IApplication::GetUI() {
		struct IUI * _result = 0;
		HRESULT _hr = get_UI(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IUIPtr(_result, false);
	}

	inline VARIANT_BOOL IApplication::HasProject() {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = raw_HasProject(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IProjectPtr IApplication::GetProject() {
		struct IProject * _result = 0;
		HRESULT _hr = get_Project(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IProjectPtr(_result, false);
	}

	inline ISelectionPtr IApplication::GetSelection() {
		struct ISelection * _result = 0;
		HRESULT _hr = get_Selection(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return ISelectionPtr(_result, false);
	}

	inline _bstr_t IApplication::GetCurrentLocale() {
		BSTR _result = 0;
		HRESULT _hr = raw_GetCurrentLocale(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline int IApplication::CreateProject() {
		int _result = 0;
		HRESULT _hr = raw_CreateProject(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline int IApplication::CreateProjectFromTemplate (_bstr_t fileName) {
		int _result = 0;
		HRESULT _hr = raw_CreateProjectFromTemplate(fileName, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline int IApplication::ImportIfcProject (_bstr_t fileName) {
		int _result = 0;
		HRESULT _hr = raw_ImportIfcProject(fileName, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline int IApplication::OpenProject (_bstr_t fileName) {
		int _result = 0;
		HRESULT _hr = raw_OpenProject(fileName, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline int IApplication::CloseProject (VARIANT_BOOL discardChanges) {
		int _result = 0;
		HRESULT _hr = raw_CloseProject(discardChanges, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline HRESULT IApplication::Quit() {
		HRESULT _hr = raw_Quit();
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _hr;
	}

	inline VARIANT_BOOL IApplication::GetVisible() {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = get_Visible(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline void IApplication::PutVisible (VARIANT_BOOL pVisible) {
		HRESULT _hr = put_Visible(pVisible);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline IIfcExportSettingsPtr IApplication::CreateIfcExportSettings() {
		struct IIfcExportSettings * _result = 0;
		HRESULT _hr = raw_CreateIfcExportSettings(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IIfcExportSettingsPtr(_result, false);
	}

	inline struct ProductVersion IApplication::GetVersion() {
		struct ProductVersion _result;
		HRESULT _hr = get_Version(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline _bstr_t IApplication::GetVersionS() {
		BSTR _result = 0;
		HRESULT _hr = get_VersionS(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline _bstr_t IApplication::GetLastError() {
		BSTR _result = 0;
		HRESULT _hr = get_LastError(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}

	inline void IApplication::PutLastError (_bstr_t pLastError) {
		HRESULT _hr = put_LastError(pLastError);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	}

	inline VARIANT_BOOL IApplication::GetHasLastError() {
		VARIANT_BOOL _result = 0;
		HRESULT _hr = get_HasLastError(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _result;
	}

	inline IViewPtr IApplication::OpenViewByEntity (int RepresentedEntityId) {
		struct IView * _result = 0;
		HRESULT _hr = raw_OpenViewByEntity(RepresentedEntityId, &_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IViewPtr(_result, false);
	}

	inline IMathPtr IApplication::GetMath() {
		struct IMath * _result = 0;
		HRESULT _hr = get_Math(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return IMathPtr(_result, false);
	}

	inline _bstr_t IApplication::GetProductName() {
		BSTR _result = 0;
		HRESULT _hr = get_ProductName(&_result);
		if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
		return _bstr_t(_result, false);
	}


    template <typename T>
    class EventHandler : public IDispatch {
    protected:
        DWORD m_dwCookie;
        LPCONNECTIONPOINT m_pConnPt;
        LPUNKNOWN m_pContainer;
        LONG m_refCount;

    public:
        EventHandler(LPUNKNOWN pObject);
        virtual ~EventHandler();
        int Advise();
        void Unadvise();

    protected:
        COM_DECLSPEC_NOTHROW ULONG STDMETHODCALLTYPE AddRef();
        COM_DECLSPEC_NOTHROW ULONG STDMETHODCALLTYPE Release();
        STDMETHOD(QueryInterface)(REFIID riid, _COM_Outptr_ void __RPC_FAR *__RPC_FAR *ppvObject);
        STDMETHOD(GetTypeInfoCount)(unsigned int*);
        STDMETHOD(GetTypeInfo)(unsigned int, LCID, ITypeInfo**);
        STDMETHOD(GetIDsOfNames)(REFIID, LPOLESTR*, unsigned int, LCID, DISPID*);
    };

    template <typename T>
    inline EventHandler<T>::EventHandler(LPUNKNOWN pObject) : m_dwCookie(0), m_pConnPt(nullptr), m_pContainer(pObject), m_refCount(1) {
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
        virtual void OnBeforeApplicationClose(IApplicationCloseEvent*) {}
        virtual void OnBeforeProjectClose(IProjectCloseEvent*) {}
        virtual void OnProjectClosed() {}
        virtual void OnProjectCreated() {}
        virtual void OnProjectOpened(const std::wstring&) {}
        virtual void OnProjectSaved(const std::wstring&) {}
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

    inline SelectionEventHandler::SelectionEventHandler(ISelection* pSelection) : EventHandler<_ISelectionEvents>(pSelection) {}

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
		const GUID Building = {0x165d15bc, 0xfd8d, 0x4bbb, {0xb7, 0x3c, 0x56, 0x95, 0x6d, 0x7c, 0xeb, 0xf1}};    
		const GUID Drawing = {0xa7dfe1e1, 0xbf2c, 0x4c4a, {0xba, 0x74, 0x3f, 0x15, 0x6b, 0x1b, 0xbf, 0x8f}};    
		const GUID DuctAccessoryCategory = {0x46c07d12, 0x8f76, 0x4537, {0xa4, 0x73, 0x08, 0xd5, 0x23, 0x95, 0xba, 0xba}};    
		const GUID DuctFittingCategory = {0x68eff079, 0x2b52, 0x4e05, {0xa5, 0x1b, 0x68, 0x75, 0xd1, 0xcd, 0xb9, 0xfc}};    
		const GUID ElectricDistributionBoardCategory = {0xd547f002, 0x4a74, 0x41bf, {0xb1, 0xf0, 0xed, 0x8f, 0x58, 0x46, 0x09, 0x8f}};    
		const GUID EquipmentCategory = {0x4cd3bc4c, 0x14da, 0x43ca, {0xbb, 0xc5, 0xd7, 0x67, 0x95, 0x66, 0xb8, 0xdd}};    
		const GUID FloorReinforcementStyleTemplate = {0x7da23934, 0x2cf8, 0x4a88, {0xa5, 0x97, 0x81, 0xdb, 0xdd, 0x4d, 0xe8, 0x5a}};    
		const GUID Group = {0xf9c7f77a, 0x5644, 0x4ed3, {0x85, 0xce, 0x9e, 0xa2, 0x18, 0x81, 0xd7, 0x6a}};    
		const GUID Insulation = {0x517a337a, 0x58d5, 0x46ff, {0x81, 0xb8, 0x65, 0xcf, 0x03, 0x89, 0xa1, 0x91}};    
		const GUID IsolatedFoundationReinforcementStyleTemplate = {0xdddaa6b5, 0x873b, 0x45e0, {0x81, 0x92, 0x59, 0xe2, 0xdf, 0xf6, 0xed, 0xa8}};    
		const GUID Layer = {0xca526024, 0x04a1, 0x40c7, {0x87, 0xfd, 0x2e, 0x95, 0xc7, 0x22, 0xcc, 0x50}};    
		const GUID LightingFixtureCategory = {0xc59fd4c5, 0x4050, 0x47a0, {0xb1, 0x1a, 0xf5, 0x2c, 0x47, 0x99, 0x47, 0x0c}};    
		const GUID MaterialLayer = {0x73c6bfe1, 0x2c3d, 0x4b16, {0xb8, 0xd8, 0x19, 0xd0, 0xeb, 0x4f, 0x64, 0xef}};    
		const GUID MechanicalEquipmentCategory = {0xd7e202ce, 0x791c, 0x4123, {0xad, 0xbe, 0x5f, 0x63, 0x57, 0xbf, 0x85, 0xe6}};    
		const GUID PipeAccessoryCategory = {0x17c36f59, 0x54dc, 0x4440, {0x8b, 0x78, 0x03, 0x4b, 0x0a, 0xdb, 0x87, 0x16}};    
		const GUID PipeFittingCategory = {0x8b5cf8f2, 0xa391, 0x4701, {0x8c, 0xb9, 0xd6, 0xa6, 0xba, 0x5e, 0xe4, 0x6f}};    
		const GUID PlumbingFixtureCategory = {0x10bc8911, 0x5931, 0x471a, {0x9c, 0x0e, 0x74, 0xad, 0x36, 0xa7, 0xee, 0x8a}};    
		const GUID Project = {0x9bd80f5a, 0x9448, 0x48de, {0xa9, 0xab, 0x93, 0x5a, 0x94, 0x6d, 0xab, 0x65}};    
		const GUID ReinforcementUnitStyleTemplate = {0x3ccb02f0, 0x9f3c, 0x4775, {0xa0, 0x1b, 0x79, 0xdc, 0x2d, 0xed, 0x8d, 0x5e}};    
		const GUID Schedule = {0x5cbf0016, 0x32bc, 0x4630, {0x99, 0xea, 0xc7, 0xcc, 0x94, 0xdd, 0xa8, 0xe3}};    
		const GUID Site = {0x56652d5b, 0x536e, 0x4ef6, {0xa1, 0xcd, 0x5a, 0xd6, 0x9b, 0xb0, 0x25, 0xab}};    
		const GUID Table = {0xed1f87a1, 0x5c9c, 0x4994, {0x96, 0x9d, 0x6d, 0x38, 0x54, 0x57, 0x11, 0x93}};    
		const GUID WallReinforcementStyleTemplate = {0x58607349, 0x9e1c, 0x493b, {0xbc, 0xe2, 0x6c, 0xa0, 0x3d, 0x9b, 0x1e, 0x44}};    
		const GUID WiringAccessoryCategory = {0x2c07d135, 0x8343, 0x418d, {0xa1, 0xc2, 0xea, 0x07, 0x4d, 0x98, 0xdb, 0x31}};    
		const GUID AngularDimension = {0x96788994, 0xb7fc, 0x41d7, {0x8a, 0x99, 0xd6, 0x74, 0x54, 0x3e, 0x92, 0x37}};    
		const GUID AssemblyInstance = {0x00799249, 0x1824, 0x4ebd, {0xbf, 0x93, 0x40, 0xbb, 0x92, 0xef, 0xa9, 0xe6}};    
		const GUID Axis = {0x4b41ccf8, 0xc969, 0x4c55, {0xa1, 0xf2, 0xcc, 0xed, 0x9c, 0x16, 0x4f, 0x07}};    
		const GUID Beam = {0x63478188, 0x7c88, 0x4a6d, {0xb8, 0x91, 0x97, 0x25, 0xf0, 0x4a, 0x5b, 0xc7}};    
		const GUID Column = {0xd9ee2442, 0xe807, 0x42fb, {0x8f, 0xe5, 0x9d, 0xcf, 0xe5, 0x43, 0x03, 0x5d}};    
		const GUID DiametralDimension = {0x2aabe3a4, 0xa29e, 0x4534, {0xa9, 0xf5, 0x0f, 0x07, 0x0f, 0xee, 0x24, 0x0c}};    
		const GUID Door = {0x1cfba99c, 0x01e7, 0x4078, {0xae, 0x1a, 0x3e, 0x2f, 0xf0, 0x67, 0x35, 0x99}};    
		const GUID DrawingAxis = {0x71892ce3, 0xa114, 0x4857, {0xb4, 0x77, 0x82, 0x85, 0x00, 0x65, 0x65, 0x49}};    
		const GUID DrawingCallout = {0xd1f09341, 0xe121, 0x4eaf, {0xa5, 0x97, 0xee, 0x71, 0x2b, 0xb1, 0xac, 0x12}};    
		const GUID DrawingElevationMark = {0x107e6d8b, 0xa68a, 0x43fd, {0xa3, 0xbf, 0xa2, 0x5d, 0x0a, 0x1c, 0x17, 0xf9}};    
		const GUID DrawingHatch = {0x4e3b2178, 0xee5b, 0x4943, {0xae, 0xb7, 0x64, 0x4a, 0x27, 0x29, 0x80, 0x06}};    
		const GUID DrawingLine = {0x681cabaf, 0x4469, 0x438e, {0x83, 0xd7, 0x1e, 0xfd, 0x66, 0x4e, 0xda, 0x6b}};    
		const GUID DrawingReferenceDrawing = {0x939595f1, 0xa6a7, 0x4ee7, {0x9a, 0x54, 0x27, 0x95, 0x0f, 0x20, 0x9e, 0x92}};    
		const GUID DrawingImage = {0x478b4ee8, 0xa87c, 0x4560, {0xba, 0x64, 0x0b, 0x33, 0x79, 0x1e, 0xdd, 0xbf}};    
		const GUID DrawingSection = {0x800081e3, 0x065b, 0x4ae1, {0x86, 0xf8, 0x3e, 0xa8, 0xeb, 0x83, 0x0f, 0xec}};    
		const GUID DrawingText = {0x688cce66, 0x411f, 0x44a2, {0xa5, 0xcc, 0x14, 0x9b, 0xdd, 0xe3, 0x16, 0x9c}};    
		const GUID Duct = {0x06cc88ee, 0x9a67, 0x4626, {0x9c, 0x34, 0xdd, 0xe0, 0x3c, 0x33, 0x1a, 0x74}};    
		const GUID DuctAccessory = {0x47d0d93f, 0x3c7b, 0x4269, {0xbf, 0x8a, 0xde, 0x24, 0x6e, 0x17, 0x24, 0xd0}};    
		const GUID DuctFitting = {0x77ffca60, 0xb20e, 0x49f0, {0xb4, 0x2f, 0x4f, 0xdc, 0x9b, 0x1c, 0x82, 0x5b}};    
		const GUID ElectricDistributionBoard = {0x96da9155, 0x43c1, 0x42b8, {0xbb, 0xa2, 0xb4, 0xf6, 0x1f, 0xa4, 0x3a, 0xcc}};    
		const GUID Element = {0xe1e3bd66, 0x2e13, 0x4fa4, {0xa9, 0xeb, 0x67, 0x7e, 0x03, 0x06, 0x7c, 0x2f}};    
		const GUID Elevation = {0x8a49a9a8, 0xa401, 0x4ab1, {0x80, 0x38, 0x92, 0x09, 0x35, 0x03, 0xc9, 0x7a}};    
		const GUID EmbeddedEntityView = {0xb58f3284, 0x8626, 0x47cd, {0x94, 0x2c, 0x60, 0x5a, 0xd6, 0x82, 0x36, 0xf0}};    
		const GUID EmbeddedLegend = {0x655d2b24, 0x2d22, 0x45af, {0xa5, 0x5b, 0xac, 0x70, 0x4d, 0xc1, 0xb8, 0x43}};    
		const GUID EmbeddedModelView = {0x4a09414c, 0x9003, 0x4faa, {0x9c, 0xba, 0xed, 0x84, 0xd0, 0xdf, 0x51, 0x1c}};    
		const GUID EmbeddedSchedule = {0xe67acda9, 0x4067, 0x441a, {0xb2, 0x48, 0xba, 0x2e, 0x0e, 0xd6, 0xb1, 0x4c}};    
		const GUID EmbeddedTable = {0x5d0422c1, 0x65ce, 0x4802, {0x92, 0x25, 0x38, 0x6e, 0x53, 0xd1, 0x80, 0xd1}};    
		const GUID Equipment = {0x5d2f3734, 0x5a49, 0x4504, {0x90, 0xb1, 0x06, 0x76, 0xf0, 0xf2, 0x5d, 0xa7}};    
		const GUID Floor = {0xf5bd8bd8, 0x39c1, 0x47f8, {0x84, 0x99, 0xf6, 0x73, 0xc5, 0x80, 0xdf, 0xbe}};    
		const GUID Hatch = {0x84b43087, 0xd4a4, 0x4cce, {0xb3, 0x4d, 0x40, 0xe2, 0x83, 0xd9, 0xe6, 0x91}};    
		const GUID Hole = {0xecef8f90, 0x0cf9, 0x4494, {0x98, 0xde, 0x91, 0x24, 0x2a, 0x2a, 0x9f, 0x5c}};    
		const GUID IfcObject = {0xf914251d, 0xd5fa, 0x48b2, {0xb9, 0x3b, 0x07, 0x4f, 0x44, 0x2c, 0xbf, 0x3b}};    
		const GUID IsolatedFoundation = {0x6063816c, 0x89ff, 0x4c8f, {0xa8, 0x14, 0x3b, 0xe6, 0xcb, 0x94, 0x12, 0x8e}};    
		const GUID Level = {0xc3ce17ff, 0x6f28, 0x411f, {0xb1, 0x8d, 0x74, 0xfe, 0x95, 0x7b, 0x2b, 0xa8}};    
		const GUID LightingFixture = {0x793d3f7c, 0x905d, 0x4d85, {0xa3, 0x51, 0xb1, 0x52, 0x24, 0x1d, 0xd2, 0xe7}};    
		const GUID Line3D = {0x02bbebe8, 0xe28b, 0x4ee5, {0x89, 0x16, 0x11, 0xb5, 0x14, 0xa3, 0x5d, 0xca}};    
		const GUID LinearDimension = {0xdc82ca1a, 0xa0c3, 0x4a1a, {0xae, 0xfb, 0xa7, 0xd7, 0x20, 0xdd, 0x3a, 0x09}};    
		const GUID ElectricalCircuitLine = {0x83de45e6, 0x4793, 0x49ec, {0x8b, 0x9e, 0x65, 0xa2, 0x43, 0x8f, 0x36, 0xde}};    
		const GUID ReferenceDrawing = {0xf6647dc9, 0xcfae, 0x4c6b, {0x93, 0x12, 0xcd, 0x6d, 0x80, 0x10, 0xc3, 0x40}};    
		const GUID Image = {0x857a042d, 0x7d3c, 0x4715, {0x9e, 0xbf, 0x95, 0xe2, 0xe9, 0x64, 0x8a, 0xdf}};    
		const GUID Model3D = {0x67a0b42c, 0x8c1e, 0x47e8, {0xb4, 0x6e, 0x78, 0xd8, 0xbb, 0x26, 0x0d, 0xe0}};    
		const GUID IfcModel = {0x6485ac11, 0x5b26, 0x4d77, {0x97, 0x88, 0x79, 0x36, 0xaf, 0x87, 0xc8, 0x5f}};    
		const GUID MechanicalEquipment = {0xde4420ce, 0x02b6, 0x4b12, {0x9c, 0xd7, 0x93, 0x22, 0x11, 0x8b, 0xe8, 0xfe}};    
		const GUID ModelText = {0xda557027, 0xf243, 0x4331, {0xbb, 0x5b, 0x85, 0x3a, 0xbc, 0x43, 0x7c, 0xd7}};    
		const GUID Opening = {0xfc443d5a, 0xb76c, 0x45e5, {0xb9, 0x1c, 0x52, 0x0e, 0xf0, 0x89, 0x61, 0x09}};    
		const GUID Pipe = {0x838cc9f6, 0xe3d8, 0x4132, {0xaf, 0x6f, 0xc5, 0x8d, 0xf0, 0xf8, 0xd0, 0x37}};    
		const GUID PipeAccessory = {0x41e2788a, 0x49ed, 0x487f, {0x9a, 0xe1, 0x55, 0xb6, 0xe0, 0x9a, 0xe6, 0xe5}};    
		const GUID PipeFitting = {0xd31dc2e3, 0x808e, 0x4987, {0x84, 0x81, 0x7f, 0x86, 0x66, 0x5a, 0x07, 0xfc}};    
		const GUID Plate = {0x62cf086e, 0x5a39, 0x4484, {0x84, 0x0c, 0xff, 0xa6, 0xa1, 0xc6, 0xe2, 0xb7}};    
		const GUID PlumbingFixture = {0xb8c7155a, 0xb462, 0x4ff5, {0xbc, 0x41, 0xc9, 0xc1, 0x7a, 0x9f, 0x48, 0xfa}};    
		const GUID RadialDimension = {0x377c2fda, 0x9411, 0x43ac, {0xa6, 0xc6, 0x0e, 0x3b, 0x52, 0x0b, 0xe7, 0x21}};    
		const GUID Railing = {0xa1aca786, 0x78a4, 0x4015, {0xb4, 0x12, 0x91, 0x50, 0xba, 0xad, 0x71, 0xa9}};    
		const GUID Ramp = {0xdebde004, 0xafcc, 0x4da8, {0x8d, 0xd0, 0x42, 0x23, 0xff, 0x83, 0x6a, 0xcd}};    
		const GUID Rebar = {0x9fabc932, 0x590f, 0x4068, {0x89, 0xa8, 0xee, 0x6e, 0xe3, 0xd7, 0xcb, 0xbf}};    
		const GUID Roof = {0xbac4470f, 0xd560, 0x4f57, {0xa4, 0x9e, 0xfa, 0xa5, 0xf6, 0xe5, 0xa2, 0x79}};    
		const GUID Room = {0xf1a805ff, 0x573d, 0xf46b, {0xff, 0xba, 0x57, 0xf4, 0xbc, 0xca, 0xa6, 0xed}};    
		const GUID Route = {0x8b323bee, 0x3882, 0x4744, {0x88, 0x38, 0x24, 0xf4, 0x5d, 0xf7, 0x14, 0xa9}};    
		const GUID RoutePoint = {0xce93e320, 0x7167, 0x4cd1, {0x92, 0xa8, 0x5e, 0x42, 0xd5, 0x46, 0x06, 0x6b}};    
		const GUID Section = {0x4166fd59, 0x64c0, 0x45ee, {0xae, 0x3b, 0x49, 0xfa, 0xe1, 0x25, 0x7e, 0xf1}};    
		const GUID Stair = {0x3f522f49, 0xaee2, 0x4d73, {0x98, 0x66, 0x9b, 0x07, 0xcf, 0x33, 0x6a, 0x69}};    
		const GUID Tag = {0xb5ff6d07, 0x84a7, 0x432f, {0xbe, 0x96, 0x73, 0xf5, 0xb9, 0x5d, 0x54, 0xf3}};    
		const GUID UndefinedObject = {0x97675473, 0xca62, 0x4ea4, {0xbc, 0x6e, 0xbb, 0x2c, 0xa5, 0x7b, 0x7e, 0x67}};    
		const GUID Wall = {0x4329112a, 0x6b65, 0x48d9, {0x9d, 0xa8, 0xab, 0xf1, 0xf8, 0xf3, 0x63, 0x27}};    
		const GUID WallFoundation = {0xd7dd0293, 0xdd65, 0x4229, {0xa6, 0x4c, 0x8b, 0x52, 0x8d, 0x4e, 0x22, 0x6f}};    
		const GUID Window = {0x2b02b353, 0x2ca5, 0x4566, {0x88, 0xbb, 0x91, 0x7e, 0xa8, 0x46, 0x01, 0x74}};    
		const GUID WiringAccessory = {0xb00d5c25, 0x92a8, 0x4409, {0xa3, 0xb7, 0x7c, 0x37, 0xed, 0x79, 0x2c, 0x06}};    
		const GUID Assembly = {0xcb825bf3, 0x15ae, 0x4190, {0x82, 0x1c, 0x8a, 0xd3, 0x14, 0x95, 0x1a, 0xda}};    
		const GUID BeamStyle = {0xcf2b8b04, 0xf595, 0x4432, {0x98, 0xf4, 0x82, 0x34, 0xc9, 0x5a, 0xdb, 0xdd}};    
		const GUID BuildingElementModel = {0x923bf334, 0x2e0a, 0x41a0, {0x9b, 0xf9, 0xdc, 0x59, 0x8c, 0x38, 0x58, 0x6f}};    
		const GUID ColumnStyle = {0xbe49a354, 0x19b7, 0x435a, {0x89, 0x57, 0x9e, 0xf8, 0x78, 0x26, 0x30, 0xc2}};    
		const GUID DisplayStyle = {0xedae3ec8, 0x2f1d, 0x4d76, {0x9a, 0xab, 0x1c, 0x5c, 0x12, 0xdf, 0xda, 0x7d}};    
		const GUID DoorStyle = {0x19d0649f, 0x582a, 0x488e, {0xa5, 0x2b, 0x58, 0x5c, 0x11, 0x51, 0xa5, 0xe4}};    
		const GUID DrawingLink = {0xe04d0118, 0x5c58, 0x4a7f, {0xbf, 0x9c, 0x3f, 0x72, 0x9d, 0xe1, 0xe5, 0x59}};    
		const GUID DuctAccessoryStyle = {0x6c671391, 0xbfea, 0x4e92, {0x97, 0x53, 0x88, 0x55, 0xc0, 0x56, 0x40, 0xa0}};    
		const GUID DuctFittingStyle = {0x6c6821a0, 0xebb9, 0x445b, {0x84, 0xa2, 0xed, 0x9e, 0xb0, 0x93, 0x8e, 0x4f}};    
		const GUID DuctStyle = {0xa999f05a, 0xd730, 0x42e7, {0xbf, 0xc8, 0xe4, 0x43, 0x3e, 0xba, 0xce, 0x78}};    
		const GUID ElectricalConductorStyle = {0xfa7f1ae9, 0xf4f4, 0x4f95, {0xb1, 0x08, 0xfe, 0xea, 0x4d, 0x7e, 0xfe, 0xb7}};    
		const GUID ElectricCircuitLineStyle = {0x33fb4b37, 0x83f9, 0x422a, {0x81, 0xd4, 0x64, 0x0a, 0x15, 0x2c, 0x61, 0x9e}};    
		const GUID ElectricDistributionBoardStyle = {0x861c0037, 0x7797, 0x43a9, {0x96, 0xe7, 0x83, 0x3a, 0x7a, 0x2c, 0x6e, 0xa4}};    
		const GUID ElementStyle = {0x514a3ae7, 0xf551, 0x4d0f, {0xb5, 0xba, 0x5d, 0x4f, 0x0e, 0xcf, 0x4e, 0x7a}};    
		const GUID EquipmentStyle = {0xa369ad70, 0xc1fe, 0x41dd, {0xaf, 0x3d, 0xbd, 0x65, 0x9e, 0xa5, 0xb3, 0x60}};    
		const GUID HatchPatternStyle = {0xc08a2259, 0x6612, 0x4cd4, {0x91, 0x9a, 0xa0, 0x98, 0x65, 0xcd, 0x6e, 0x3e}};    
		const GUID HoleStyle = {0x83085c7b, 0x16c4, 0x473e, {0x85, 0xbc, 0x9a, 0xaf, 0xa5, 0x04, 0xff, 0x7d}};    
		const GUID ImageLink = {0x6a18e669, 0xbdcf, 0x442a, {0xbc, 0x81, 0x63, 0xc1, 0x2d, 0xa7, 0x2a, 0xa2}};    
		const GUID LayeredMaterial = {0x0f0adba0, 0x5c06, 0x46c0, {0x9c, 0x8a, 0xb9, 0xd6, 0x9e, 0xf1, 0x25, 0x1f}};    
		const GUID LayoutStyle = {0x501768ff, 0xfe9e, 0x4fce, {0x83, 0x37, 0x22, 0xa8, 0x41, 0xac, 0x48, 0x68}};    
		const GUID LightingFixtureStyle = {0x1f85f676, 0xbb99, 0x4a6f, {0x9f, 0x72, 0x17, 0x89, 0xf2, 0xf7, 0xb3, 0x62}};    
		const GUID Material = {0x0abcb18f, 0x0aaf, 0x4509, {0xbf, 0x89, 0x5c, 0x5f, 0xad, 0x9d, 0x5d, 0x8b}};    
		const GUID MechanicalEquipmentStyle = {0xd43c7509, 0xa92c, 0x4e32, {0xbd, 0x2d, 0xba, 0x6d, 0xd8, 0xf5, 0xb7, 0xa1}};    
		const GUID ModelLink = {0xd769d1c4, 0x8c32, 0x40a8, {0xa7, 0x16, 0x68, 0xbc, 0x9b, 0x6b, 0x5d, 0x3c}};    
		const GUID PageFormat = {0x3603ef07, 0xe3a4, 0x477e, {0x9e, 0x72, 0x2c, 0x82, 0x25, 0xc0, 0xa3, 0x51}};    
		const GUID PipeAccessoryStyle = {0xa31cf7ca, 0xf17b, 0x422a, {0x88, 0x6a, 0x7a, 0x8c, 0x36, 0x2c, 0xd4, 0x9a}};    
		const GUID PipeFittingStyle = {0xb1359bdc, 0xf7ff, 0x43a4, {0xbc, 0xa0, 0x8d, 0x09, 0xbc, 0x97, 0x45, 0x37}};    
		const GUID PipeStyle = {0x9d6dffb9, 0x4828, 0x40d8, {0x85, 0x29, 0xbf, 0x5c, 0xd2, 0xb5, 0x8c, 0x4e}};    
		const GUID PlateStyle = {0x9b60d6ad, 0x3468, 0x478e, {0x94, 0xdf, 0xa5, 0x35, 0xc5, 0xae, 0xaa, 0x3e}};    
		const GUID PlumbingFixtureStyle = {0x344299f5, 0x7d7f, 0x43e2, {0xb0, 0xa2, 0x1d, 0xb8, 0xe0, 0x6e, 0x8a, 0xc8}};    
		const GUID Profile = {0x8734b5cd, 0x57fc, 0x409e, {0xae, 0xfe, 0x1f, 0xdc, 0x44, 0x9b, 0xcb, 0x5c}};    
		const GUID RebarStyle = {0x608edb78, 0x96f3, 0x40a6, {0xa0, 0xec, 0x71, 0x00, 0x01, 0x05, 0x58, 0x1b}};    
		const GUID ReinforcementGrade = {0xb50f63fa, 0x7f3a, 0x4762, {0x8a, 0xd9, 0x32, 0x4a, 0xfc, 0x7f, 0xe2, 0xe8}};    
		const GUID ReinforcementStyle = {0x03a52558, 0x573f, 0x46c9, {0xbe, 0xa5, 0x47, 0x60, 0xeb, 0x7f, 0xa4, 0x85}};    
		const GUID ReinforcementUnitStyle = {0x7ee13bd6, 0x7c0a, 0x47d3, {0xad, 0xce, 0x35, 0xb8, 0xe0, 0xda, 0xe2, 0x8a}};    
		const GUID Scale = {0x17cabdc4, 0xb683, 0x484f, {0x88, 0x58, 0x21, 0x45, 0x68, 0x8a, 0xe7, 0xf5}};    
		const GUID SystemStyle = {0xe65c5fad, 0xd4d3, 0x4f43, {0xbd, 0x01, 0xb2, 0x8d, 0x0e, 0xb9, 0x55, 0x71}};    
		const GUID TagStyle = {0x43f26eac, 0x02b0, 0x4639, {0x84, 0x47, 0xde, 0xee, 0x54, 0xfa, 0x1f, 0xf6}};    
		const GUID TextStyle = {0xf22ba8c7, 0xa75d, 0x43f4, {0xbd, 0xce, 0x69, 0x67, 0xae, 0xac, 0x61, 0x18}};    
		const GUID Topic = {0xeafcc366, 0x1483, 0x44d5, {0x88, 0x1f, 0xb4, 0x68, 0x8d, 0x30, 0x6d, 0xa5}};    
		const GUID UndefinedStyle = {0xdf67fd2f, 0xbbd3, 0x4810, {0xa1, 0x32, 0x14, 0x51, 0x76, 0x9d, 0x5e, 0x51}};    
		const GUID WindowStyle = {0xfac43446, 0x031c, 0x413e, {0x99, 0x93, 0x6e, 0x9c, 0xf9, 0xf2, 0x30, 0x6a}};    
		const GUID WiringAccessoryStyle = {0xa6e0ba72, 0xacbd, 0x4423, {0x9a, 0xfc, 0x04, 0xd8, 0x4a, 0x09, 0x21, 0x1a}};    
		const GUID IfcLink = {0x9bf0d3c4, 0x4ca7, 0x45e1, {0x8e, 0xa3, 0xdf, 0xbc, 0x67, 0x5c, 0xed, 0xea}};
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


#pragma pack(pop)


#define EXPORT_PLUGIN(PLUGIN) extern "C" __declspec(dllexport) Renga::IPlugin* createPlugin() { return new PLUGIN(); }