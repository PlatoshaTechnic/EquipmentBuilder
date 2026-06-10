local params = Style.GetParameterValues()
local dimensions = params.dimensions
local solid = CreateRightCircularCone(dimensions.sd/2, dimensions.sh)
local geometry = ModelGeometry()
geometry:AddSolid(solid)
Style.SetDetailedGeometry(geometry)