local params = Style.GetParameterValues()
local dimensions = params.dimensions
local k = dimensions.sk
local solid1 = CreateRightCircularCone(3*k, 2*k)
local solid2 = CreateRightCircularCylinder(1.5*k, 3*k)
local solidf = Unite(solid1, solid2)
local geometry = ModelGeometry()
geometry:AddSolid(solidf)
Style.SetDetailedGeometry(geometry)

