local params = Style.GetParameterValues()
local dimensions = params.dimensions
local solid = CreateBlock(dimensions.sx, dimensions.sy, dimensions.sz)
local geometry = ModelGeometry()
geometry:AddSolid(solid)
Style.SetDetailedGeometry(geometry)