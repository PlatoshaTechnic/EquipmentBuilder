local params = Style.GetParameterValues()
local dimensions = params.dimensions
local solid = CreateSphere(dimensions.sd/2)
local geometry = ModelGeometry()
geometry:AddSolid(solid)
Style.SetDetailedGeometry(geometry)