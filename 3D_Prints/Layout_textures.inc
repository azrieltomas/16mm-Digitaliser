#include "metals.inc"
#declare Motor_material = material { 
	texture { Brushed_Aluminum
	}
}

#declare Bracket1_material = material { 
	texture { 
		pigment { color Black }
	finish {
	ambient 0.35
brilliance 2
diffuse 0.3
metallic
specular 0.80
roughness 1/20
reflection 0.1	}
	}
}

#declare Bracket2_material = material { 
	texture { 
		pigment { color Black }
	finish {
	ambient 0.35
brilliance 2
diffuse 0.3
metallic
specular 0.80
roughness 1/20
reflection 0.1	}
	}
}

#declare DrivingWheel_material = material { 
	texture { 
		pigment { color Black }
	finish {
	ambient 0.35
brilliance 2
diffuse 0.3
metallic
specular 0.80
roughness 1/20
reflection 0.1	}
	}
}

#declare MainHolder002_material = material { 
	texture { 
		pigment { color Black }
	finish {
	ambient 0.35
brilliance 2
diffuse 0.3
metallic
specular 0.80
roughness 1/20
reflection 0.1	}
	}
}

#include "metals.inc"
#declare Reel_material = material { 
	texture { Bronze_Metal
	}
}

#declare Horseshoe_material = material { 
	texture { 
		pigment { color Black }
	finish {
	ambient 0.35
brilliance 2
diffuse 0.3
metallic
specular 0.80
roughness 1/20
reflection 0.1	}
	}
}

#include "metals.inc"
#declare Lamp_material = material { 
	texture { Brushed_Aluminum
	}
}

#include "metals.inc"
#declare TapeHead_material = material { 
	texture { Brushed_Aluminum
	}
}

#include "metals.inc"
#declare Reel001_material = material { 
	texture { Bronze_Metal
	finish {
	crand 0.5	}
	}
}

#declare Guide_material = material { 
	texture { 
		pigment { color Black }
	finish {
	ambient 0.35
brilliance 2
diffuse 0.3
metallic
specular 0.80
roughness 1/20
reflection 0.1	}
	}
}

#declare Guide001_material = material { 
	texture { 
		pigment { color Black }
	finish {
	ambient 0.35
brilliance 2
diffuse 0.3
metallic
specular 0.80
roughness 1/20
reflection 0.1	}
	}
}

#declare Base_material = material { 
	texture { 
		pigment { wood turbulence 0.02 octaves 4 lambda 3 scale 0.175  rotate <2, 3, 0> color_map { [0.0 color rgb <1.30, 0.99, 0.64>] [0.5 color rgb <0.75, 0.39, 0.17>] [0.7 color rgb <0.75, 0.39, 0.17>] [1.0 color rgb <1.30, 0.99, 0.64>]} }
	}
	scale <5.0, 5.0, 5.0>
}

#include "glass.inc"
#declare Film_material = material { M_Glass3
	texture { 
		pigment { Col_Glass_Winebottle }
	}
	interior {
	I_Glass_Dispersion1
	}
}

