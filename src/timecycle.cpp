#include "tcycedit.h"

int gtaversion = -1;

#define NUMHOURS 24

#ifdef GTAIII
#define NUMWEATHERS 4
#else
#define NUMWEATHERS 7
#endif

class CTimeCycle {
public:
#ifdef GTAIII
	static int32 (*m_nAmbientRed)[NUMWEATHERS];
	static int32 (*m_nAmbientGreen)[NUMWEATHERS];
	static int32 (*m_nAmbientBlue)[NUMWEATHERS];
	static int32 (*m_nDirectionalRed)[NUMWEATHERS];
	static int32 (*m_nDirectionalGreen)[NUMWEATHERS];
	static int32 (*m_nDirectionalBlue)[NUMWEATHERS];
	static int32 (*m_nSkyTopRed)[NUMWEATHERS];
	static int32 (*m_nSkyTopGreen)[NUMWEATHERS];
	static int32 (*m_nSkyTopBlue)[NUMWEATHERS];
	static int32 (*m_nSkyBottomRed)[NUMWEATHERS];
	static int32 (*m_nSkyBottomGreen)[NUMWEATHERS];
	static int32 (*m_nSkyBottomBlue)[NUMWEATHERS];
	static int32 (*m_nSunCoreRed)[NUMWEATHERS];
	static int32 (*m_nSunCoreGreen)[NUMWEATHERS];
	static int32 (*m_nSunCoreBlue)[NUMWEATHERS];
	static int32 (*m_nSunCoronaRed)[NUMWEATHERS];
	static int32 (*m_nSunCoronaGreen)[NUMWEATHERS];
	static int32 (*m_nSunCoronaBlue)[NUMWEATHERS];
	static float (*m_fSunSize)[NUMWEATHERS];
	static float (*m_fSpriteSize)[NUMWEATHERS];
	static float (*m_fSpriteBrightness)[NUMWEATHERS];
	static int16 (*m_nShadowStrength)[NUMWEATHERS];
	static int16 (*m_nLightShadowStrength)[NUMWEATHERS];
	static int16 (*m_nTreeShadowStrength)[NUMWEATHERS];
	static float (*m_fFogStart)[NUMWEATHERS];
	static float (*m_fFarClip)[NUMWEATHERS];
	static float (*m_fLightsOnGroundBrightness)[NUMWEATHERS];
	static int32 (*m_nLowCloudsRed)[NUMWEATHERS];
	static int32 (*m_nLowCloudsGreen)[NUMWEATHERS];
	static int32 (*m_nLowCloudsBlue)[NUMWEATHERS];
	static int32 (*m_nFluffyCloudsTopRed)[NUMWEATHERS];
	static int32 (*m_nFluffyCloudsTopGreen)[NUMWEATHERS];
	static int32 (*m_nFluffyCloudsTopBlue)[NUMWEATHERS];
	static int32 (*m_nFluffyCloudsBottomRed)[NUMWEATHERS];
	static int32 (*m_nFluffyCloudsBottomGreen)[NUMWEATHERS];
	static int32 (*m_nFluffyCloudsBottomBlue)[NUMWEATHERS];
	static float (*m_fBlurRed)[NUMWEATHERS];
	static float (*m_fBlurGreen)[NUMWEATHERS];
	static float (*m_fBlurBlue)[NUMWEATHERS];
	static float (*m_fBlurAlpha)[NUMWEATHERS];
#else
	static uint8 (*m_nAmbientRed)[NUMWEATHERS];
	static uint8 (*m_nAmbientGreen)[NUMWEATHERS];
	static uint8 (*m_nAmbientBlue)[NUMWEATHERS];
	static uint8 (*m_nAmbientRed_Obj)[NUMWEATHERS];
	static uint8 (*m_nAmbientGreen_Obj)[NUMWEATHERS];
	static uint8 (*m_nAmbientBlue_Obj)[NUMWEATHERS];
	static uint8 (*m_nAmbientRed_Bl)[NUMWEATHERS];
	static uint8 (*m_nAmbientGreen_Bl)[NUMWEATHERS];
	static uint8 (*m_nAmbientBlue_Bl)[NUMWEATHERS];
	static uint8 (*m_nAmbientRed_Obj_Bl)[NUMWEATHERS];
	static uint8 (*m_nAmbientGreen_Obj_Bl)[NUMWEATHERS];
	static uint8 (*m_nAmbientBlue_Obj_Bl)[NUMWEATHERS];

	static uint8 (*m_nDirectionalRed)[NUMWEATHERS];
	static uint8 (*m_nDirectionalGreen)[NUMWEATHERS];
	static uint8 (*m_nDirectionalBlue)[NUMWEATHERS];
	static uint8 (*m_nSkyTopRed)[NUMWEATHERS];
	static uint8 (*m_nSkyTopGreen)[NUMWEATHERS];
	static uint8 (*m_nSkyTopBlue)[NUMWEATHERS];
	static uint8 (*m_nSkyBottomRed)[NUMWEATHERS];
	static uint8 (*m_nSkyBottomGreen)[NUMWEATHERS];
	static uint8 (*m_nSkyBottomBlue)[NUMWEATHERS];
	static uint8 (*m_nSunCoreRed)[NUMWEATHERS];
	static uint8 (*m_nSunCoreGreen)[NUMWEATHERS];
	static uint8 (*m_nSunCoreBlue)[NUMWEATHERS];
	static uint8 (*m_nSunCoronaRed)[NUMWEATHERS];
	static uint8 (*m_nSunCoronaGreen)[NUMWEATHERS];
	static uint8 (*m_nSunCoronaBlue)[NUMWEATHERS];

	static uint8 (*m_fSunSize)[NUMWEATHERS];
	static uint8 (*m_fSpriteSize)[NUMWEATHERS];
	static uint8 (*m_fSpriteBrightness)[NUMWEATHERS];
	static uint8 (*m_nShadowStrength)[NUMWEATHERS];
	static uint8 (*m_nLightShadowStrength)[NUMWEATHERS];
	static uint8 (*m_nPoleShadowStrength)[NUMWEATHERS];
	static int16 (*m_fFogStart)[NUMWEATHERS];
	static int16 (*m_fFarClip)[NUMWEATHERS];
	static uint8 (*m_fLightsOnGroundBrightness)[NUMWEATHERS];

	static uint8 (*m_nLowCloudsRed)[NUMWEATHERS];
	static uint8 (*m_nLowCloudsGreen)[NUMWEATHERS];
	static uint8 (*m_nLowCloudsBlue)[NUMWEATHERS];
	static uint8 (*m_nFluffyCloudsTopRed)[NUMWEATHERS];
	static uint8 (*m_nFluffyCloudsTopGreen)[NUMWEATHERS];
	static uint8 (*m_nFluffyCloudsTopBlue)[NUMWEATHERS];
	static uint8 (*m_nFluffyCloudsBottomRed)[NUMWEATHERS];
	static uint8 (*m_nFluffyCloudsBottomGreen)[NUMWEATHERS];
	static uint8 (*m_nFluffyCloudsBottomBlue)[NUMWEATHERS];

	static uint8 (*m_fBlurRed)[NUMWEATHERS];
	static uint8 (*m_fBlurGreen)[NUMWEATHERS];
	static uint8 (*m_fBlurBlue)[NUMWEATHERS];

	static uint8 (*m_nWaterRed)[NUMWEATHERS];
	static uint8 (*m_nWaterGreen)[NUMWEATHERS];
	static uint8 (*m_nWaterBlue)[NUMWEATHERS];
	static uint8 (*m_nWaterAlpha)[NUMWEATHERS];
#endif

	static void Initialise(void);
	static void Update(void);
	static bool Save(void);
};
WRAPPER void CTimeCycle::Initialise(void) { EAXJMP(ADDR(0x4ABAE0, 0x4D05E0)); }
WRAPPER void CTimeCycle::Update(void) { EAXJMP(ADDR(0x4ABF40, 0x4CEA40)); }

#ifdef GTAIII
int32 (*CTimeCycle::m_nAmbientRed)[NUMWEATHERS] = (int(*)[NUMWEATHERS])0x86AF78;
int32 (*CTimeCycle::m_nAmbientGreen)[NUMWEATHERS] = (int(*)[NUMWEATHERS])0x665308;
int32 (*CTimeCycle::m_nAmbientBlue)[NUMWEATHERS] = (int(*)[NUMWEATHERS])0x72CF88;
int32 (*CTimeCycle::m_nDirectionalRed)[NUMWEATHERS] = (int(*)[NUMWEATHERS])0x6FAB78;
int32 (*CTimeCycle::m_nDirectionalGreen)[NUMWEATHERS] = (int(*)[NUMWEATHERS])0x6F4528;
int32 (*CTimeCycle::m_nDirectionalBlue)[NUMWEATHERS] = (int(*)[NUMWEATHERS])0x83CE58;
int32 (*CTimeCycle::m_nSkyTopRed)[NUMWEATHERS] = (int(*)[NUMWEATHERS])0x87FB90;
int32 (*CTimeCycle::m_nSkyTopGreen)[NUMWEATHERS] = (int(*)[NUMWEATHERS])0x8460A8;
int32 (*CTimeCycle::m_nSkyTopBlue)[NUMWEATHERS] = (int(*)[NUMWEATHERS])0x87B158;
int32 (*CTimeCycle::m_nSkyBottomRed)[NUMWEATHERS] = (int(*)[NUMWEATHERS])0x6FA960;
int32 (*CTimeCycle::m_nSkyBottomGreen)[NUMWEATHERS] = (int(*)[NUMWEATHERS])0x70D6A8;
int32 (*CTimeCycle::m_nSkyBottomBlue)[NUMWEATHERS] = (int(*)[NUMWEATHERS])0x83D288;
int32 (*CTimeCycle::m_nSunCoreRed)[NUMWEATHERS] = (int(*)[NUMWEATHERS])0x878360;
int32 (*CTimeCycle::m_nSunCoreGreen)[NUMWEATHERS] = (int(*)[NUMWEATHERS])0x6EE088;
int32 (*CTimeCycle::m_nSunCoreBlue)[NUMWEATHERS] = (int(*)[NUMWEATHERS])0x773A68;
int32 (*CTimeCycle::m_nSunCoronaRed)[NUMWEATHERS] = (int(*)[NUMWEATHERS])0x664B60;
int32 (*CTimeCycle::m_nSunCoronaGreen)[NUMWEATHERS] = (int(*)[NUMWEATHERS])0x6F01E0;
int32 (*CTimeCycle::m_nSunCoronaBlue)[NUMWEATHERS] = (int(*)[NUMWEATHERS])0x6E6340;
float (*CTimeCycle::m_fSunSize)[NUMWEATHERS] = (float(*)[NUMWEATHERS])0x733510;
float (*CTimeCycle::m_fSpriteSize)[NUMWEATHERS] = (float(*)[NUMWEATHERS])0x87F820;
float (*CTimeCycle::m_fSpriteBrightness)[NUMWEATHERS] = (float(*)[NUMWEATHERS])0x6E96F0;
int16 (*CTimeCycle::m_nShadowStrength)[NUMWEATHERS] = (short(*)[NUMWEATHERS])0x83CFD8;
int16 (*CTimeCycle::m_nLightShadowStrength)[NUMWEATHERS] = (short(*)[NUMWEATHERS])0x72B0F8;
int16 (*CTimeCycle::m_nTreeShadowStrength)[NUMWEATHERS] = (short(*)[NUMWEATHERS])0x733450;
float (*CTimeCycle::m_fFogStart)[NUMWEATHERS] = (float(*)[NUMWEATHERS])0x8806C8;
float (*CTimeCycle::m_fFarClip)[NUMWEATHERS] = (float(*)[NUMWEATHERS])0x8804E0;
float (*CTimeCycle::m_fLightsOnGroundBrightness)[NUMWEATHERS] = (float(*)[NUMWEATHERS])0x83D108;
int32 (*CTimeCycle::m_nLowCloudsRed)[NUMWEATHERS] = (int(*)[NUMWEATHERS])0x726770;
int32 (*CTimeCycle::m_nLowCloudsGreen)[NUMWEATHERS] = (int(*)[NUMWEATHERS])0x87BF08;
int32 (*CTimeCycle::m_nLowCloudsBlue)[NUMWEATHERS] = (int(*)[NUMWEATHERS])0x87FA10;
int32 (*CTimeCycle::m_nFluffyCloudsTopRed)[NUMWEATHERS] = (int(*)[NUMWEATHERS])0x70F2B0;
int32 (*CTimeCycle::m_nFluffyCloudsTopGreen)[NUMWEATHERS] = (int(*)[NUMWEATHERS])0x72D288;
int32 (*CTimeCycle::m_nFluffyCloudsTopBlue)[NUMWEATHERS] = (int(*)[NUMWEATHERS])0x86B108;
int32 (*CTimeCycle::m_nFluffyCloudsBottomRed)[NUMWEATHERS] = (int(*)[NUMWEATHERS])0x6E8DA8;
int32 (*CTimeCycle::m_nFluffyCloudsBottomGreen)[NUMWEATHERS] = (int(*)[NUMWEATHERS])0x715AA8;
int32 (*CTimeCycle::m_nFluffyCloudsBottomBlue)[NUMWEATHERS] = (int(*)[NUMWEATHERS])0x6EE2D0;
float (*CTimeCycle::m_fBlurRed)[NUMWEATHERS] = (float(*)[NUMWEATHERS])0x87C7E0;
float (*CTimeCycle::m_fBlurGreen)[NUMWEATHERS] = (float(*)[NUMWEATHERS])0x774C10;
float (*CTimeCycle::m_fBlurBlue)[NUMWEATHERS] = (float(*)[NUMWEATHERS])0x8784E0;
float (*CTimeCycle::m_fBlurAlpha)[NUMWEATHERS] = (float(*)[NUMWEATHERS])0x733690;
#else
uint8 (*CTimeCycle::m_nAmbientRed)[NUMWEATHERS] = (uint8(*)[NUMWEATHERS])0x9388C8;
uint8 (*CTimeCycle::m_nAmbientGreen)[NUMWEATHERS] = (uint8(*)[NUMWEATHERS])0x78D508;
uint8 (*CTimeCycle::m_nAmbientBlue)[NUMWEATHERS] = (uint8(*)[NUMWEATHERS])0x813D48;
uint8 (*CTimeCycle::m_nAmbientRed_Obj)[NUMWEATHERS] = (uint8(*)[NUMWEATHERS])0x7D53B0;
uint8 (*CTimeCycle::m_nAmbientGreen_Obj)[NUMWEATHERS] = (uint8(*)[NUMWEATHERS])0x7D9370;
uint8 (*CTimeCycle::m_nAmbientBlue_Obj)[NUMWEATHERS] = (uint8(*)[NUMWEATHERS])0x94C038;
uint8 (*CTimeCycle::m_nAmbientRed_Bl)[NUMWEATHERS] = (uint8(*)[NUMWEATHERS])0x78D5B0;
uint8 (*CTimeCycle::m_nAmbientGreen_Bl)[NUMWEATHERS] = (uint8(*)[NUMWEATHERS])0x861430;
uint8 (*CTimeCycle::m_nAmbientBlue_Bl)[NUMWEATHERS] = (uint8(*)[NUMWEATHERS])0x811740;
uint8 (*CTimeCycle::m_nAmbientRed_Obj_Bl)[NUMWEATHERS] = (uint8(*)[NUMWEATHERS])0x7D9418;
uint8 (*CTimeCycle::m_nAmbientGreen_Obj_Bl)[NUMWEATHERS] = (uint8(*)[NUMWEATHERS])0x818FC0;
uint8 (*CTimeCycle::m_nAmbientBlue_Obj_Bl)[NUMWEATHERS] = (uint8(*)[NUMWEATHERS])0x813B68;

uint8 (*CTimeCycle::m_nDirectionalRed)[NUMWEATHERS] = (uint8(*)[NUMWEATHERS])0x7E45E0;
uint8 (*CTimeCycle::m_nDirectionalGreen)[NUMWEATHERS] = (uint8(*)[NUMWEATHERS])0x7DDDF8;
uint8 (*CTimeCycle::m_nDirectionalBlue)[NUMWEATHERS] = (uint8(*)[NUMWEATHERS])0x92D1B8;
uint8 (*CTimeCycle::m_nSkyTopRed)[NUMWEATHERS] = (uint8(*)[NUMWEATHERS])0x94BE98;
uint8 (*CTimeCycle::m_nSkyTopGreen)[NUMWEATHERS] = (uint8(*)[NUMWEATHERS])0x933A58;
uint8 (*CTimeCycle::m_nSkyTopBlue)[NUMWEATHERS] = (uint8(*)[NUMWEATHERS])0x94A170;
uint8 (*CTimeCycle::m_nSkyBottomRed)[NUMWEATHERS] = (uint8(*)[NUMWEATHERS])0x7E44A0;
uint8 (*CTimeCycle::m_nSkyBottomGreen)[NUMWEATHERS] = (uint8(*)[NUMWEATHERS])0x7E9CD0;
uint8 (*CTimeCycle::m_nSkyBottomBlue)[NUMWEATHERS] = (uint8(*)[NUMWEATHERS])0x92D420;
uint8 (*CTimeCycle::m_nSunCoreRed)[NUMWEATHERS] = (uint8(*)[NUMWEATHERS])0x944098;
uint8 (*CTimeCycle::m_nSunCoreGreen)[NUMWEATHERS] = (uint8(*)[NUMWEATHERS])0x7D94C0;
uint8 (*CTimeCycle::m_nSunCoreBlue)[NUMWEATHERS] = (uint8(*)[NUMWEATHERS])0x8614F8;
uint8 (*CTimeCycle::m_nSunCoronaRed)[NUMWEATHERS] = (uint8(*)[NUMWEATHERS])0x78CCD8;
uint8 (*CTimeCycle::m_nSunCoronaGreen)[NUMWEATHERS] = (uint8(*)[NUMWEATHERS])0x7DBC08;
uint8 (*CTimeCycle::m_nSunCoronaBlue)[NUMWEATHERS] = (uint8(*)[NUMWEATHERS])0x7D1818;

uint8 (*CTimeCycle::m_fSunSize)[NUMWEATHERS] = (uint8(*)[NUMWEATHERS])0x818720;
uint8 (*CTimeCycle::m_fSpriteSize)[NUMWEATHERS] = (uint8(*)[NUMWEATHERS])0x94B848;
uint8 (*CTimeCycle::m_fSpriteBrightness)[NUMWEATHERS] = (uint8(*)[NUMWEATHERS])0x7D5308;
uint8 (*CTimeCycle::m_nShadowStrength)[NUMWEATHERS] = (uint8(*)[NUMWEATHERS])0x92D260;
uint8 (*CTimeCycle::m_nLightShadowStrength)[NUMWEATHERS] = (uint8(*)[NUMWEATHERS])0x811828;
uint8 (*CTimeCycle::m_nPoleShadowStrength)[NUMWEATHERS] = (uint8(*)[NUMWEATHERS])0x812090;
int16 (*CTimeCycle::m_fFogStart)[NUMWEATHERS] = (int16(*)[NUMWEATHERS])0x94D638;
int16 (*CTimeCycle::m_fFarClip)[NUMWEATHERS] = (int16(*)[NUMWEATHERS])0x94D4E8;
uint8 (*CTimeCycle::m_fLightsOnGroundBrightness)[NUMWEATHERS] = (uint8(*)[NUMWEATHERS])0x92D378;

uint8 (*CTimeCycle::m_nLowCloudsRed)[NUMWEATHERS] = (uint8(*)[NUMWEATHERS])0x8100C0;
uint8 (*CTimeCycle::m_nLowCloudsGreen)[NUMWEATHERS] = (uint8(*)[NUMWEATHERS])0x94AEA0;
uint8 (*CTimeCycle::m_nLowCloudsBlue)[NUMWEATHERS] = (uint8(*)[NUMWEATHERS])0x94BDF0;
uint8 (*CTimeCycle::m_nFluffyCloudsTopRed)[NUMWEATHERS] = (uint8(*)[NUMWEATHERS])0x7F3C80;
uint8 (*CTimeCycle::m_nFluffyCloudsTopGreen)[NUMWEATHERS] = (uint8(*)[NUMWEATHERS])0x813F70;
uint8 (*CTimeCycle::m_nFluffyCloudsTopBlue)[NUMWEATHERS] = (uint8(*)[NUMWEATHERS])0x938980;
uint8 (*CTimeCycle::m_nFluffyCloudsBottomRed)[NUMWEATHERS] = (uint8(*)[NUMWEATHERS])0x7D3D98;
uint8 (*CTimeCycle::m_nFluffyCloudsBottomGreen)[NUMWEATHERS] = (uint8(*)[NUMWEATHERS])0x7FFE38;
uint8 (*CTimeCycle::m_nFluffyCloudsBottomBlue)[NUMWEATHERS] = (uint8(*)[NUMWEATHERS])0x7D9630;

uint8 (*CTimeCycle::m_fBlurRed)[NUMWEATHERS] = (uint8(*)[NUMWEATHERS])0x94B790;
uint8 (*CTimeCycle::m_fBlurGreen)[NUMWEATHERS] = (uint8(*)[NUMWEATHERS])0x8621A0;
uint8 (*CTimeCycle::m_fBlurBlue)[NUMWEATHERS] = (uint8(*)[NUMWEATHERS])0x945728;

uint8 (*CTimeCycle::m_nWaterRed)[NUMWEATHERS] = (uint8(*)[NUMWEATHERS])0x7E5560;
uint8 (*CTimeCycle::m_nWaterGreen)[NUMWEATHERS] = (uint8(*)[NUMWEATHERS])0x7DE148;
uint8 (*CTimeCycle::m_nWaterBlue)[NUMWEATHERS] = (uint8(*)[NUMWEATHERS])0x862248;
uint8 (*CTimeCycle::m_nWaterAlpha)[NUMWEATHERS] = (uint8(*)[NUMWEATHERS])0x7DDAE0;
#endif

#ifdef GTAIII
const char *header = "// Amb     Dir          Sky top			Sky bot		SunCore 		SunCorona   SunSz  SprSz	SprBght Shdw LightShd  TreeShd FarClp  FogSt	LightOnGround LowCloudsRGB TopCloudRGB BottomCloudRGB		BlurRGBA\n";
const char *weatherNames[] = { "SUNNY", "CLOUDY", "RAINY", "FOGGY" };
#else
const char *header = "// Amb     Amb_Obj    Amb_bl     Amb_Obj_bl	Dir          Sky top			Sky bot		SunCore 		SunCorona   SunSz  SprSz	SprBght Shdw LightShd  PoleShd 	FarClp 	 FogSt 	LightOnGround	LowCloudsRGB TopCloudRGB BottomCloudRGB		BlurRGB					WaterRGBA\n";
const char *weatherNames[] = { "SUNNY", "CLOUDY", "RAINY", "FOGGY", "EXTRASUNNY", "RAINY", "EXTRACOLOURS"};
const char *extracolornames[] = {
	"Extra Colour 1  --------MALIBU CLUB---------------------------------------------------------------------------CLUB-----------------------------------------------CLUB-----------------------------",
	"Extra Colour 2  ---------Strip Club --------",
	"Extra Colour 3------------Hotel------------",
	"Extra Colour 4----------Bank---------------",
	"Extra Colour 5-------------Police HQ-------------",
	"Extra Colour 6------------------Mall---------------------",
	"Extra Colour 7-------------------Rifle Range---------------------------",
	"Extra Colour 8-------------------Mansion------------------------",
	"Extra Colour 9----------------------dirtring-------------------",
	"Extra Colour 10--------------Blood ring------------",
	"Extra Colour 11-----------------Hot ring",
	"Extra Colour 12--------concerthall",
	"Extra Colour 13------auntie poulets",
	"Extra Colour 14------------intro at docks",
	"Extra Colour 15------biker bar",
	"Extra Colour 16----------the intro cafe dark room",
	"Extra Colour 17----------studio---------",
	"Extra Colour 18",
	"Extra Colour 19",
	"Extra Colour 20",
	"Extra Colour 21",
	"Extra Colour 22",
	"Extra Colour 23",
	"Extra Colour 24",
};
#endif
const char *timeNames[] = { "Midnight", "1AM", "2AM", "3AM", "4AM", "5AM", "6AM", "7AM", "8AM", "9AM", "10AM", "11AM", "Midday",
"1PM", "2PM", "3PM", "4PM", "5PM", "6PM", "7PM", "8PM", "9PM", "10PM", "11PM" };

bool
CTimeCycle::Save(void)
{
	FILE *f;
	CFileMgr::SetDir("");
	if(f = fopen("DATA\\timecyc.dat", "w"), f == nil)
		return false;
	for(int w = 0; w < NUMWEATHERS; w++){
		fprintf(f, "//\n/////////////////////////////////////////// %s\n//\n", weatherNames[w]);
		for(int h = 0; h < 24; h++){
#ifdef GTAIII
			if((h % 12) == 0) fprintf(f, header);
			fprintf(f, "// %s\n", timeNames[h]);
#else
			if(w == 6){	// Extra colours
				if(h == 0){
					fprintf(f, "// These colours do not belong to a weather type but can be set by the level designers for interiors.\n");
					fprintf(f, header);
					fprintf(f, "// %s\n", extracolornames[h]);
				}else
					fprintf(f, "//\n// %s\n", extracolornames[h]);
			}else{
				if((h % 12) == 0) fprintf(f, header);
				fprintf(f, "// %s\n", timeNames[h]);
			}
#endif
			fprintf(f,
#ifdef GTAIII
				"%d %d %d\t%d %d %d\t%d %d %d\t%d %d %d\t"
				"%d %d %d\t%d %d %d\t%.1f\t%.1f\t%.1f\t%d\t%d\t%d\t%.1f\t%.1f\t%.1f\t"
				"%d %d %d\t%d %d %d\t%d %d %d\t%d %d %d %d\n",
#else
				"%d %d %d\t%d %d %d\t%d %d %d\t%d %d %d\t%d %d %d\t%d %d %d\t%d %d %d\t"
				"%d %d %d\t%d %d %d\t%.1f\t%.1f\t%.1f\t%d\t%d\t%d\t%.1f\t%.1f\t%.1f\t"
				"%d %d %d\t%d %d %d\t%d %d %d\t%d %d %d\t%d %d %d %d\n",
#endif
			       CTimeCycle::m_nAmbientRed[h][w],
			       CTimeCycle::m_nAmbientGreen[h][w],
			       CTimeCycle::m_nAmbientBlue[h][w],
#ifdef GTAVC
			       CTimeCycle::m_nAmbientRed_Obj[h][w],
			       CTimeCycle::m_nAmbientGreen_Obj[h][w],
			       CTimeCycle::m_nAmbientBlue_Obj[h][w],

			       CTimeCycle::m_nAmbientRed_Bl[h][w],
			       CTimeCycle::m_nAmbientGreen_Bl[h][w],
			       CTimeCycle::m_nAmbientBlue_Bl[h][w],
			       CTimeCycle::m_nAmbientRed_Obj_Bl[h][w],
			       CTimeCycle::m_nAmbientGreen_Obj_Bl[h][w],
			       CTimeCycle::m_nAmbientBlue_Obj_Bl[h][w],
#endif
			       CTimeCycle::m_nDirectionalRed[h][w],
			       CTimeCycle::m_nDirectionalGreen[h][w],
			       CTimeCycle::m_nDirectionalBlue[h][w],

			       CTimeCycle::m_nSkyTopRed[h][w],
			       CTimeCycle::m_nSkyTopGreen[h][w],
			       CTimeCycle::m_nSkyTopBlue[h][w],
			       CTimeCycle::m_nSkyBottomRed[h][w],
			       CTimeCycle::m_nSkyBottomGreen[h][w],
			       CTimeCycle::m_nSkyBottomBlue[h][w],
			       CTimeCycle::m_nSunCoreRed[h][w],
			       CTimeCycle::m_nSunCoreGreen[h][w],
			       CTimeCycle::m_nSunCoreBlue[h][w],
			       CTimeCycle::m_nSunCoronaRed[h][w],
			       CTimeCycle::m_nSunCoronaGreen[h][w],
			       CTimeCycle::m_nSunCoronaBlue[h][w],
#ifdef GTAIII
			       CTimeCycle::m_fSunSize[h][w],
			       CTimeCycle::m_fSpriteSize[h][w],
			       CTimeCycle::m_fSpriteBrightness[h][w],
#else
			       CTimeCycle::m_fSunSize[h][w]/10.0f,
			       CTimeCycle::m_fSpriteSize[h][w]/10.0f,
			       CTimeCycle::m_fSpriteBrightness[h][w]/10.0f,
#endif
			       CTimeCycle::m_nShadowStrength[h][w],
			       CTimeCycle::m_nLightShadowStrength[h][w],
#ifdef GTAIII
			       CTimeCycle::m_nTreeShadowStrength[h][w],
			       CTimeCycle::m_fFarClip[h][w],
			       CTimeCycle::m_fFogStart[h][w],
			       CTimeCycle::m_fLightsOnGroundBrightness[h][w],
#else
			       CTimeCycle::m_nPoleShadowStrength[h][w],
			       (float)CTimeCycle::m_fFarClip[h][w],
			       (float)CTimeCycle::m_fFogStart[h][w],
			       CTimeCycle::m_fLightsOnGroundBrightness[h][w]/10.0f,
#endif
			       CTimeCycle::m_nLowCloudsRed[h][w],
			       CTimeCycle::m_nLowCloudsGreen[h][w],
			       CTimeCycle::m_nLowCloudsBlue[h][w],
			       CTimeCycle::m_nFluffyCloudsTopRed[h][w],
			       CTimeCycle::m_nFluffyCloudsTopGreen[h][w],
			       CTimeCycle::m_nFluffyCloudsTopBlue[h][w],
			       CTimeCycle::m_nFluffyCloudsBottomRed[h][w],
			       CTimeCycle::m_nFluffyCloudsBottomGreen[h][w],
			       CTimeCycle::m_nFluffyCloudsBottomBlue[h][w],
			       (int)CTimeCycle::m_fBlurRed[h][w],
			       (int)CTimeCycle::m_fBlurGreen[h][w],
			       (int)CTimeCycle::m_fBlurBlue[h][w],
#ifdef GTAIII
			       (int)CTimeCycle::m_fBlurAlpha[h][w]
#else
				CTimeCycle::m_nWaterRed[h][w],
				CTimeCycle::m_nWaterGreen[h][w],
				CTimeCycle::m_nWaterBlue[h][w],
				CTimeCycle::m_nWaterAlpha[h][w]
#endif
			);
		}
	}
	fclose(f);
	return true;
}

enum Commands
{
	IGNORED,
	HOUR,
	WEATHER,
#ifdef GTAIII
	AMB,
#else
	AMB,
	AMB_OBJ,
	AMB_BL,
	AMB_OBJ_BL,
#endif
	DIRECT,
	SKYTOP,
	SKYBOT,
	SUNCORE,
	SUNCORONA,
	SUNSZ,
	SPRSZ,
	SPRBGHT,
	SHADOW,
	LIGHTSHD,
	TREESHD,
	FARCLIP,
	FOGSTART,
	LIGHTONGROUND,
	LOWCLOUDS,
	TOPCLOUD,
	BOTTOMCLOUD,
	BLUR,
#ifdef GTAVC
	WATER,
#endif
	LOAD,
	SAVE,
	NOTHING,

	NUMCOMMANDS,

	NUMVISIBLE = 9
};

const char *commandStrings[] = {
	"ignored",
	"HOUR",         // int
	"WEATHER",      // int
#ifdef GTAIII
	"AMBIENT",      // RGB
#else
	"AMB",          // RGB
	"AMB OBJ",      // RGB
	"AMB BL",       // RGB
	"AMB OBJ BL",   // RGB
#endif
	"DIRECTIONAL",  // RGB
	"SKY TOP",      // RGB
	"SKY BOTTOM",   // RGB
	"SUN CORE",     // RGB
	"SUN CORONA",   // RGB
	"SUN SIZE",     // float in III, *10 in VC
	"SPRITE SIZE",  // float in III, *10 in VC
	"SPRITE BGHT",  // float in III, *10 in VC
	"SHADOW",       // int
	"LIGHT SHD",    // int
#ifdef GTAIII
	"TREE SHD",     // int
#else
	"POLE SHD",     // int
#endif
	"FAR CLIP",     // float in III, short in VC
	"FOG START",    // float in III, short in VC
	"LIGHT GROUND", // float in III, *10 in VC
	"LOW CLOUDS",   // RGB
	"TOP CLOUD",    // RGB
	"BOTTOM CLOUD", // RGB
	"BLUR",         // RGBA in III, RGB in VC
#ifdef GTAVC
	"WATER",        // RGBA
#endif
	"LOAD FILE",
	"SAVE FILE",
	"",
};

class CWeatherEdit
{
	static bool m_bEditOn;
	static int  m_currentCommand;
	static int  m_channelSelect;
	static int  m_maxSelect;
	static char m_text[200];
	static CRGBA m_color;
public:
	static void Update(void);
	static void Draw(void);
};
bool CWeatherEdit::m_bEditOn = false;
int  CWeatherEdit::m_currentCommand = 1;
int  CWeatherEdit::m_channelSelect = 0;
int  CWeatherEdit::m_maxSelect = 3;
char CWeatherEdit:: m_text[200];
CRGBA CWeatherEdit::m_color(255, 255, 255, 255);

#define SPEED1DOWN (pad->NewState.LEFTSHOULDER1 || KEYDOWN(rsLSHIFT) || KEYDOWN(rsRSHIFT))
#define SPEED2DOWN (pad->NewState.LEFTSHOULDER2 || KEYDOWN(rsLCTRL) || KEYDOWN(rsRCTRL))

void (*CGame__Process_orig)(void);

void
CWeatherEdit::Update(void)
{
	// i'm too lazy to insert a check in CGame::Process() so do some hackery here....
	uint8 userpause = CTimer::m_UserPause;
	CTimer::m_UserPause |= m_bEditOn << 1;	// set bit 1 so we can see whether the variable has been modified
	CGame__Process_orig();
	if(CTimer::m_UserPause & (m_bEditOn << 1))	// if it's still set, restore
		CTimer::m_UserPause = userpause;

	CPad *pad = CPad::GetPad(1);
	CControllerConfigManager *ctrldummy = nil;

	// toggle mode
	if(JUSTDOWN(TRIANGLE) && pad->NewState.CROSS ||
	   JUSTDOWN(CROSS) && pad->NewState.TRIANGLE ||
	   (KEYJUSTDOWN(rsLCTRL) || KEYJUSTDOWN(rsRCTRL)) && KEYDOWN(rsTAB) ||
	   KEYJUSTDOWN(rsTAB) && (KEYDOWN(rsLCTRL) || KEYDOWN(rsRCTRL))){
		m_bEditOn = !m_bEditOn;
		// Init
		if(m_bEditOn){
			CWeather::NewWeatherType = CWeather::OldWeatherType;
			CWeather::InterpolationValue = 0.0f;
			CClock::ms_nGameClockMinutes = 0;
			CClock::ms_nGameClockSeconds = 0;
		}
	}
	if(!m_bEditOn)
		return;

	// select menu entry
	if(JUSTDOWN(DPADUP) || KEYJUSTDOWN(rsUP)){
		m_currentCommand--;
		if(m_currentCommand <= 0) m_currentCommand = NUMCOMMANDS-1;
	}
	if(JUSTDOWN(DPADDOWN) || KEYJUSTDOWN(rsDOWN)){
		m_currentCommand++;
		if(m_currentCommand >= NUMCOMMANDS) m_currentCommand = 1;
	}

	bool channels = false;
	int h = CClock::ms_nGameClockHours;
	int w = CWeather::OldWeatherType;
#ifdef GTAIII
	int proxycolor[4];
	int *pcolor[4];
	float finc, clamp = 100000.0f;
	float *floatp;
#else
	uint8 *pcolor[4];
	uint8 *bytep;
#endif
	int16 *intp;
	int iinc;

	m_color = CRGBA(0, 0, 0, 0);
	m_text[0] = '\0';
	switch(m_currentCommand){
	case HOUR:
		if(JUSTDOWN(DPADLEFT) || KEYJUSTDOWN(rsLEFT)){
			CClock::ms_nGameClockHours--;
			if(CClock::ms_nGameClockHours < 0) CClock::ms_nGameClockHours = 23;
		}
		if(JUSTDOWN(DPADRIGHT) || KEYJUSTDOWN(rsRIGHT)){
			CClock::ms_nGameClockHours++;
			if(CClock::ms_nGameClockHours >= 24) CClock::ms_nGameClockHours = 0;
		}
		sprintf(m_text, "%d", CClock::ms_nGameClockHours);
		break;
	case WEATHER:
		if(JUSTDOWN(DPADLEFT) || KEYJUSTDOWN(rsLEFT)){
			CWeather::OldWeatherType--;
			if(CWeather::OldWeatherType < 0) CWeather::OldWeatherType = NUMWEATHERS-1;
		}
		if(JUSTDOWN(DPADRIGHT) || KEYJUSTDOWN(rsRIGHT)){
			CWeather::OldWeatherType++;
			if(CWeather::OldWeatherType >= NUMWEATHERS) CWeather::OldWeatherType = 0;
		}
		CWeather::NewWeatherType = CWeather::OldWeatherType;
		sprintf(m_text, "%s", weatherNames[CWeather::OldWeatherType]);
		break;

	// RGB
	case AMB:
		pcolor[0] = &CTimeCycle::m_nAmbientRed[h][w];
		pcolor[1] = &CTimeCycle::m_nAmbientGreen[h][w];
		pcolor[2] = &CTimeCycle::m_nAmbientBlue[h][w];
		goto rgb;
#ifdef GTAVC
	case AMB_OBJ:
		pcolor[0] = &CTimeCycle::m_nAmbientRed_Obj[h][w];
		pcolor[1] = &CTimeCycle::m_nAmbientGreen_Obj[h][w];
		pcolor[2] = &CTimeCycle::m_nAmbientBlue_Obj[h][w];
		goto rgb;
	case AMB_BL:
		pcolor[0] = &CTimeCycle::m_nAmbientRed_Bl[h][w];
		pcolor[1] = &CTimeCycle::m_nAmbientGreen_Bl[h][w];
		pcolor[2] = &CTimeCycle::m_nAmbientBlue_Bl[h][w];
		goto rgb;
	case AMB_OBJ_BL:
		pcolor[0] = &CTimeCycle::m_nAmbientRed_Obj_Bl[h][w];
		pcolor[1] = &CTimeCycle::m_nAmbientGreen_Obj_Bl[h][w];
		pcolor[2] = &CTimeCycle::m_nAmbientBlue_Obj_Bl[h][w];
		goto rgb;
#endif
	case DIRECT:
		pcolor[0] = &CTimeCycle::m_nDirectionalRed[h][w];
		pcolor[1] = &CTimeCycle::m_nDirectionalGreen[h][w];
		pcolor[2] = &CTimeCycle::m_nDirectionalBlue[h][w];
		goto rgb;
	case SKYTOP:
		pcolor[0] = &CTimeCycle::m_nSkyTopRed[h][w];
		pcolor[1] = &CTimeCycle::m_nSkyTopGreen[h][w];
		pcolor[2] = &CTimeCycle::m_nSkyTopBlue[h][w];
		goto rgb;
	case SKYBOT:
		pcolor[0] = &CTimeCycle::m_nSkyBottomRed[h][w];
		pcolor[1] = &CTimeCycle::m_nSkyBottomGreen[h][w];
		pcolor[2] = &CTimeCycle::m_nSkyBottomBlue[h][w];
		goto rgb;
	case SUNCORE:
		pcolor[0] = &CTimeCycle::m_nSunCoreRed[h][w];
		pcolor[1] = &CTimeCycle::m_nSunCoreGreen[h][w];
		pcolor[2] = &CTimeCycle::m_nSunCoreBlue[h][w];
		goto rgb;
	case SUNCORONA:
		pcolor[0] = &CTimeCycle::m_nSunCoronaRed[h][w];
		pcolor[1] = &CTimeCycle::m_nSunCoronaGreen[h][w];
		pcolor[2] = &CTimeCycle::m_nSunCoronaBlue[h][w];
		goto rgb;
	case LOWCLOUDS:
		pcolor[0] = &CTimeCycle::m_nLowCloudsRed[h][w];
		pcolor[1] = &CTimeCycle::m_nLowCloudsGreen[h][w];
		pcolor[2] = &CTimeCycle::m_nLowCloudsBlue[h][w];
		goto rgb;
	case TOPCLOUD:
		pcolor[0] = &CTimeCycle::m_nFluffyCloudsTopRed[h][w];
		pcolor[1] = &CTimeCycle::m_nFluffyCloudsTopGreen[h][w];
		pcolor[2] = &CTimeCycle::m_nFluffyCloudsTopBlue[h][w];
		goto rgb;
	case BOTTOMCLOUD:
		pcolor[0] = &CTimeCycle::m_nFluffyCloudsBottomRed[h][w];
		pcolor[1] = &CTimeCycle::m_nFluffyCloudsBottomGreen[h][w];
		pcolor[2] = &CTimeCycle::m_nFluffyCloudsBottomBlue[h][w];
		goto rgb;
#ifdef GTAVC
	case BLUR:
		pcolor[0] = &CTimeCycle::m_fBlurRed[h][w];
		pcolor[1] = &CTimeCycle::m_fBlurGreen[h][w];
		pcolor[2] = &CTimeCycle::m_fBlurBlue[h][w];
		goto rgb;
#endif
	rgb:
		m_maxSelect = 3;
		goto channels;

	// RGBA
#ifdef GTAIII
	case BLUR:
		// first convert to int, write back later
		proxycolor[0] = (int)CTimeCycle::m_fBlurRed[h][w];
		proxycolor[1] = (int)CTimeCycle::m_fBlurGreen[h][w];
		proxycolor[2] = (int)CTimeCycle::m_fBlurBlue[h][w];
		proxycolor[3] = (int)CTimeCycle::m_fBlurAlpha[h][w];

		pcolor[0] = &proxycolor[0];
		pcolor[1] = &proxycolor[1];
		pcolor[2] = &proxycolor[2];
		pcolor[3] = &proxycolor[3];
		m_maxSelect = 4;
		goto channels;
#else
	case WATER:
		pcolor[0] = &CTimeCycle::m_nWaterRed[h][w];
		pcolor[1] = &CTimeCycle::m_nWaterGreen[h][w];
		pcolor[2] = &CTimeCycle::m_nWaterBlue[h][w];
		pcolor[3] = &CTimeCycle::m_nWaterAlpha[h][w];
		m_maxSelect = 4;
		goto channels;
#endif
	channels:
		if(m_channelSelect >= m_maxSelect) m_channelSelect = m_maxSelect-1;
		if(JUSTDOWN(DPADLEFT) || KEYJUSTDOWN(rsLEFT)){
			m_channelSelect--;
			if(m_channelSelect < 0) m_channelSelect = m_maxSelect-1;
		}
		if(JUSTDOWN(DPADRIGHT) || KEYJUSTDOWN(rsRIGHT)){
			m_channelSelect++;
			if(m_channelSelect >= m_maxSelect) m_channelSelect = 0;
		}

		iinc = SPEED1DOWN ? 2 : 1;
		// If R1 is being held, only increment once per button press
		if((pad->NewState.SQUARE && (!pad->NewState.RIGHTSHOULDER1 || !pad->OldState.SQUARE)) ||
		   KEYJUSTDOWN(rsPGUP) || KEYDOWN(rsPGUP) && !KEYDOWN((RsKeyCodes)' ')){
			(*pcolor[m_channelSelect]) += iinc;
			if(*pcolor[m_channelSelect] > 255) *pcolor[m_channelSelect] = 255;
		}
		if((pad->NewState.CROSS && (!pad->NewState.RIGHTSHOULDER1 || !pad->OldState.CROSS)) ||
		   KEYJUSTDOWN(rsPGDN) || KEYDOWN(rsPGDN) && !KEYDOWN((RsKeyCodes)' ')){
			(*pcolor[m_channelSelect]) -= iinc;
			if(*pcolor[m_channelSelect] < 0) *pcolor[m_channelSelect] = 0;
		}

		// format nicely
		char tmp[10], *p;
		p = m_text;
		for(int i = 0; i < m_maxSelect; i++){
#ifdef GTAIII
			sprintf(tmp, i == m_channelSelect ? ">%d" : " %d", *pcolor[i]);
#else
			// gah, we're missing characters in the font X(
			sprintf(tmp, i == m_channelSelect ? "=%d" : " %d", *pcolor[i]);
#endif
//			sprintf(p, "%s%5s", i ? " " : "", tmp);
			sprintf(p, "%5s", tmp);
			while(*p) p++;
		}
		m_color.r = *pcolor[0];
		m_color.g = *pcolor[1];
		m_color.b = *pcolor[2];
		m_color.a = 0xFF;
		break;

	// float
#ifdef GTAIII
	case SUNSZ:
		floatp = &CTimeCycle::m_fSunSize[h][w];
		goto handlefloat;
	case SPRSZ:
		floatp = &CTimeCycle::m_fSpriteSize[h][w];
		goto handlefloat;
	case SPRBGHT:
		floatp = &CTimeCycle::m_fSpriteBrightness[h][w];
		clamp = 1.0f;
		goto handlefloat;
	case FARCLIP:
		floatp = &CTimeCycle::m_fFarClip[h][w];
		goto handlefloat;
	case FOGSTART:
		floatp = &CTimeCycle::m_fFogStart[h][w];
		goto handlefloat;
	case LIGHTONGROUND:
		floatp = &CTimeCycle::m_fLightsOnGroundBrightness[h][w];
	handlefloat:
		finc = 1.0f;
		if(SPEED1DOWN)
			finc = 0.5f;
		if(SPEED2DOWN)
			finc = 0.1f;
		if(SPEED1DOWN && SPEED2DOWN)
			finc = 10.0f;
		// If R1 is being held, only increment once per button press
		if((pad->NewState.SQUARE && (!pad->NewState.RIGHTSHOULDER1 || !pad->OldState.SQUARE)) ||
		   KEYJUSTDOWN(rsPGUP) || KEYDOWN(rsPGUP) && !KEYDOWN((RsKeyCodes)' ')){
			*floatp += finc;
			if(*floatp > clamp) *floatp = clamp;
		}
		if((pad->NewState.CROSS && (!pad->NewState.RIGHTSHOULDER1 || !pad->OldState.CROSS)) ||
		   KEYJUSTDOWN(rsPGDN) || KEYDOWN(rsPGDN) && !KEYDOWN((RsKeyCodes)' ')){
			*floatp -= finc;
			if(*floatp < 0.0f) *floatp = 0.0f;
		}
		sprintf(m_text, "%.4f", *floatp);
		break;
#else
	case SUNSZ:
		bytep = &CTimeCycle::m_fSunSize[h][w];
		goto handlescaled;
	case SPRSZ:
		bytep = &CTimeCycle::m_fSpriteSize[h][w];
		goto handlescaled;
	case SPRBGHT:
		bytep = &CTimeCycle::m_fSpriteBrightness[h][w];
		goto handlescaled;
	case LIGHTONGROUND:
		bytep = &CTimeCycle::m_fLightsOnGroundBrightness[h][w];
		goto handlescaled;
	handlescaled:
		iinc = SPEED1DOWN ? 2 : 1;
		// If R1 is being held, only increment once per button press
		if((pad->NewState.SQUARE && (!pad->NewState.RIGHTSHOULDER1 || !pad->OldState.SQUARE)) ||
		   KEYJUSTDOWN(rsPGUP) || KEYDOWN(rsPGUP) && !KEYDOWN((RsKeyCodes)' ')){
			*bytep += iinc;
		}
		if((pad->NewState.CROSS && (!pad->NewState.RIGHTSHOULDER1 || !pad->OldState.CROSS)) ||
		   KEYJUSTDOWN(rsPGDN) || KEYDOWN(rsPGDN) && !KEYDOWN((RsKeyCodes)' ')){
			*bytep -= iinc;
		}
		sprintf(m_text, "%.2f", *bytep / 10.0f);
		break;
#endif


	// integer (short)
#ifdef GTAIII
	case SHADOW:
		intp = &CTimeCycle::m_nShadowStrength[h][w];
		goto handleint;
	case LIGHTSHD:
		intp = &CTimeCycle::m_nLightShadowStrength[h][w];
		goto handleint;
	case TREESHD:
		intp = &CTimeCycle::m_nTreeShadowStrength[h][w];
		goto handleint;
	handleint:
		iinc = SPEED1DOWN ? 2 : 1;
		// If R1 is being held, only increment once per button press
		if((pad->NewState.SQUARE && (!pad->NewState.RIGHTSHOULDER1 || !pad->OldState.SQUARE)) ||
		   KEYJUSTDOWN(rsPGUP) || KEYDOWN(rsPGUP) && !KEYDOWN((RsKeyCodes)' ')){
			*intp += iinc;
			if(*intp > 255) *intp = 255;
		}
		if((pad->NewState.CROSS && (!pad->NewState.RIGHTSHOULDER1 || !pad->OldState.CROSS)) ||
		   KEYJUSTDOWN(rsPGDN) || KEYDOWN(rsPGDN) && !KEYDOWN((RsKeyCodes)' ')){
			*intp -= iinc;
			if(*intp < 0) *intp = 0;
		}
		sprintf(m_text, "%d", *intp);
		break;
#else
	case FARCLIP:
		intp = &CTimeCycle::m_fFarClip[h][w];
		goto handleshort;
	case FOGSTART:
		intp = &CTimeCycle::m_fFogStart[h][w];
		goto handleshort;
	handleshort:
		iinc = SPEED1DOWN ? 2 : 1;
		// If R1 is being held, only increment once per button press
		if((pad->NewState.SQUARE && (!pad->NewState.RIGHTSHOULDER1 || !pad->OldState.SQUARE)) ||
		   KEYJUSTDOWN(rsPGUP) || KEYDOWN(rsPGUP) && !KEYDOWN((RsKeyCodes)' ')){
			*intp += iinc;
			if(*intp >= 0x7FFF) *intp = 0x7FFF;
		}
		if((pad->NewState.CROSS && (!pad->NewState.RIGHTSHOULDER1 || !pad->OldState.CROSS)) ||
		   KEYJUSTDOWN(rsPGDN) || KEYDOWN(rsPGDN) && !KEYDOWN((RsKeyCodes)' ')){
			*intp -= iinc;
			if(*intp < 0) *intp = 0;
		}
		sprintf(m_text, "%d", *intp);
		break;

	case SHADOW:
		bytep = &CTimeCycle::m_nShadowStrength[h][w];
		goto handlebyte;
	case LIGHTSHD:
		bytep = &CTimeCycle::m_nLightShadowStrength[h][w];
		goto handlebyte;
	case TREESHD:
		bytep = &CTimeCycle::m_nPoleShadowStrength[h][w];
		goto handlebyte;
	handlebyte:
		iinc = SPEED1DOWN ? 2 : 1;
		// If R1 is being held, only increment once per button press
		if((pad->NewState.SQUARE && (!pad->NewState.RIGHTSHOULDER1 || !pad->OldState.SQUARE)) ||
		   KEYJUSTDOWN(rsPGUP) || KEYDOWN(rsPGUP) && !KEYDOWN((RsKeyCodes)' ')){
			*bytep += iinc;
		}
		if((pad->NewState.CROSS && (!pad->NewState.RIGHTSHOULDER1 || !pad->OldState.CROSS)) ||
		   KEYJUSTDOWN(rsPGDN) || KEYDOWN(rsPGDN) && !KEYDOWN((RsKeyCodes)' ')){
			*bytep -= iinc;
		}
		sprintf(m_text, "%d", *bytep);
		break;
#endif

	case LOAD:
		if(JUSTDOWN(SQUARE) || KEYJUSTDOWN(rsEXTENTER)){
			CTimeCycle::Initialise();
			sprintf(m_text, "TIMECYC.DAT LOADED");
		}
		break;

	case SAVE:
		if(JUSTDOWN(SQUARE) || KEYJUSTDOWN(rsEXTENTER))
			sprintf(m_text, "TIMECYC.DAT %s SAVED", CTimeCycle::Save() ? "" : "NOT");
		break;
	}

#ifdef GTAIII
	if(m_currentCommand == BLUR){
		m_color.r = (*pcolor[3]*m_color.r)/255;
		m_color.g = (*pcolor[3]*m_color.g)/255;
		m_color.b = (*pcolor[3]*m_color.b)/255;
		// convert back to float
		CTimeCycle::m_fBlurRed[h][w]   = (float)proxycolor[0];
		CTimeCycle::m_fBlurGreen[h][w] = (float)proxycolor[1];
		CTimeCycle::m_fBlurBlue[h][w]  = (float)proxycolor[2];
		CTimeCycle::m_fBlurAlpha[h][w] = (float)proxycolor[3];
	}
#endif

	CTimeCycle::Update();
	CCoronas::DoSunAndMoon();
	CCoronas::Update();
}

//char &font_prop = *(char*)0x8F3199;
//char &font_style = *(char*)0x8F31B0;

#ifdef GTAIII
CRGBA activeEntry(0x9C, 0x5B, 0x28, 0xFF);
CRGBA inactiveEntry(0xC1, 0xA4, 0x78, 0xFF);
#else
CRGBA activeEntry(0x19, 0x82, 0x46, 0xFF);
CRGBA inactiveEntry(0xFF, 0x96, 0xE1, 0xFF);
#endif

void
CWeatherEdit::Draw(void)
{
	char buf[200];
	uint16 unibuf[200];
	float scx = RsGlobal.maximumWidth/640.0f;
	float scy = RsGlobal.maximumHeight/448.0f;

	CFont::SetBackgroundOff();
//	CFont::SetScale(scx*0.8f, scy*1.35f);
	CFont::SetScale(scx*0.7f, scy*0.7f);
	CFont::SetRightJustifyWrap(0.0f);
	CFont::SetBackGroundOnlyTextOff();

	AsciiToUnicode(m_text, unibuf);
	CFont::SetJustifyOff();
	CFont::SetCentreOn();
	CFont::SetPropOff();
	CFont::SetFontStyle(CFont::PRICEDOWN);

	CFont::SetColor(&CRGBA(0, 0, 0, 255));
	CFont::PrintString(scx*(320+2), scy*(400+2), unibuf);
	CFont::SetColor(&CRGBA(255, 255, 255, 255));
	CFont::PrintString(scx*320, scy*400, unibuf);

	CFont::SetCentreOff();
	CFont::SetRightJustifyOn();
#ifdef GTAIII
	CFont::SetFontStyle(CFont::REGULAR);
#else
	CFont::SetFontStyle(CFont::PAGER);
#endif
	CFont::SetPropOn();
	CFont::SetScale(scx*0.7f, scy*0.7f);
	int linespacing = 16;
	int x = 620;
	int y = 20;
	for(int i = 0; i < NUMVISIBLE; i++){
		int cmd = i + m_currentCommand - NUMVISIBLE/2;
		if(cmd >= NUMCOMMANDS) cmd -= NUMCOMMANDS-1;
		if(cmd <= 0)           cmd += NUMCOMMANDS-1;

		sprintf(buf, "%s", commandStrings[cmd]);
		AsciiToUnicode(buf, unibuf);
		CFont::SetColor(&CRGBA(0, 0, 0, 255));
		CFont::PrintString(scx*(x+2), scy*(y+2), unibuf);
		CFont::SetColor(cmd == m_currentCommand ? &activeEntry : &inactiveEntry);
		CFont::PrintString(scx*x, scy*y, unibuf);
		y += linespacing;
	}

	CSprite2d::DrawRect(CRect(scx*580, scy*388, scx*620, scy*428), m_color);
}

void __declspec(naked)
elseifEditOn(void)
{
	_asm{
#ifdef GTAIII
		cmp	CWeatherEdit::m_bEditOn, 0
		jz	jmpelse
		call	CWeatherEdit::Draw
		push	48E425h
		retn
	jmpelse:
		push	48E420h		// else: draw HUD
		retn
#else
		cmp	CWeatherEdit::m_bEditOn, 0
		jz	jmpelse
		call	CWeatherEdit::Draw
		push	4A64D5h
		retn
	jmpelse:
		push	4A64D0h		// else: draw HUD
		retn
#endif
	}
}

void
timecyclehooks(void)
{
#ifdef GTAIII
	InterceptCall(&CGame__Process_orig, CWeatherEdit::Update, 0x48E49B);
	// short jump into nearby nops (0x48E464), then jump out from there for 'else if(CWeatherEdit::ms_bEditOn)'
	Patch<uint8>(0x48E416+1, 0x4c);
	InjectHook(0x48E464, elseifEditOn, PATCH_JUMP);
#else
	InterceptCall(&CGame__Process_orig, CWeatherEdit::Update, 0x4A5DA0);
	// short jump into nearby nops, then jump out from there for 'else if(CWeatherEdit::ms_bEditOn)'
	Patch<uint8>(0x4A64C5+1, 0x3b);
	InjectHook(0x4A6502, elseifEditOn, PATCH_JUMP);
#endif
}

BOOL WINAPI
DllMain(HINSTANCE hInst, DWORD reason, LPVOID)
{
	if(reason == DLL_PROCESS_ATTACH){
		AddressByVersion<addr>(0, 0, 0, 0, 0, 0);
#ifdef GTAIII
		if(gtaversion == III_10)
#else
		if(gtaversion == VC_10)
#endif
			timecyclehooks();
	}

	return TRUE;
}
