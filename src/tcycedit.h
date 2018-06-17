#define _CRT_SECURE_NO_WARNINGS

#include <windows.h>
#include <stdio.h>
#include <stdint.h>
#include <assert.h>
#include "MemoryMgr.h"

typedef uint8_t uint8;
typedef uint16_t uint16;
typedef uint32_t uint32;
typedef int8_t int8;
typedef int16_t int16;
typedef int32_t int32;
#define nil NULL

#ifdef GTAIII
#define ADDR(_addrIII_10, _addrVC_10)	(_addrIII_10)
#else
#define ADDR(_addrIII_10, _addrVC_10)	(_addrVC_10)
#endif

struct RsInputDevice
{
	int inputDeviceType;
	int used;
	void *inputEventHandler;
};

struct RsGlobalType
{
	const char *appName;
	int width;
	int height;
	int maximumWidth;
	int maximumHeight;
	int maxFPS;
	int quit;
	void *ps;
	RsInputDevice keyboard;
	RsInputDevice mouse;
	RsInputDevice pad;
};
extern RsGlobalType &RsGlobal;


class CFileMgr
{
public:
	static void SetDir(const char *path);
};

class CTimer
{
public:
	static uint8 &m_UserPause;
	static uint8 &m_CodePause;
	static void Stop(void);
	static void Update(void);
};

class CClock
{
public:
	static int8  &ms_nGameClockHours;
	static int8  &ms_nGameClockMinutes;
	static int16 &ms_nGameClockSeconds;
};

class CCoronas
{
public:
	static void DoSunAndMoon(void);
	static void Update(void);
};

class CWeather
{
public:
	static float &InterpolationValue;
	static int16 &OldWeatherType;
	static int16 &NewWeatherType;
};

class CRGBA
{
public:
	uint8 r, g, b, a;
	CRGBA(uint8 r, uint8 g, uint8 b, uint8 a) : r(r), g(g), b(b), a(a) {}
};

class CRect
{
public:
	float left, top, right, bottom;
	CRect(float l, float t, float r, float b) : left(l), top(t), right(r), bottom(b) {}
};

class CSprite2d
{
public:
	static void Draw(CRect const &,CRGBA const &);
	static void DrawRect(CRect const &,CRGBA const &);
};

class CFont
{
public:
	enum {
#ifdef GTAIII
		REGULAR,
		PAGER,
		PRICEDOWN
#else
		RAGEITALIC,
		PAGER,
		PRICEDOWN
#endif
	};
	// everything that is in my IDB
	static void Initialise(void);
	static void Shutdown(void);
	static void InitPerFrame(void);
	static void PrintChar(float,float,short);
	static void PrintString(float,float,uint16 *);
	static void PrintString(float,float,uint16 *,uint16 *,float);
	static void ParseToken(uint16 *,uint16 *);
	static void DrawFonts(void);
	static void SetScale(float,float);
	static void SetColor(CRGBA*);
	static void SetJustifyOff(void);
	static void SetCentreOn(void);
	static void SetCentreOff(void);
	static void SetCentreSize(float);
	static void SetBackgroundOff(void);
	static void SetBackGroundOnlyTextOff(void);
	static void SetRightJustifyOn(void);
	static void SetPropOff(void);
	static void SetPropOn(void);
	static void SetFontStyle(short);
	static void SetRightJustifyWrap(float);
	static void SetDropShadowPosition(short);
	static double GetStringWidth(uint16 *str, bool spc);
};

void AsciiToUnicode(char const *, uint16 *);

struct CControllerState
{
	int16 LEFTSTICKX;
	int16 LEFTSTICKY;
	int16 RIGHTSTICKX;
	int16 RIGHTSTICKY;
	int16 LEFTSHOULDER1;
	int16 LEFTSHOULDER2;
	int16 RIGHTSHOULDER1;
	int16 RIGHTSHOULDER2;
	int16 DPADUP;
	int16 DPADDOWN;
	int16 DPADLEFT;
	int16 DPADRIGHT;
	int16 START;
	int16 SELECT;
	int16 SQUARE;
	int16 TRIANGLE;
	int16 CROSS;
	int16 CIRCLE;
	int16 LEFTSHOCK;
	int16 RIGHTSHOCK;
	int16 NETWORK_TALK;
};

struct CMouseControllerState
{
	uint8 lmb;
	uint8 rmb;
	uint8 mmb;
	uint8 wheelUp;
	uint8 wheelDown;
	uint8 bmx1;
	uint8 bmx2;
	float X;
	float Y;
};

enum RsKeyCodes
{
	rsESC = 0x3E8,
	rsF1 = 0x3E9,
	rsF2 = 0x3EA,
	rsF3 = 0x3EB,
	rsF4 = 0x3EC,
	rsF5 = 0x3ED,
	rsF6 = 0x3EE,
	rsF7 = 0x3EF,
	rsF8 = 0x3F0,
	rsF9 = 0x3F1,
	rsF10 = 0x3F2,
	rsF11 = 0x3F3,
	rsF12 = 0x3F4,
	rsINSERT = 0x3F5,
	rsDEL = 0x3F6,
	rsHOME = 0x3F7,
	rsEND = 0x3F8,
	rsPGUP = 0x3F9,
	rsPGDN = 0x3FA,
	rsUP = 0x3FB,
	rsDOWN = 0x3FC,
	rsLEFT = 0x3FD,
	rsRIGHT = 0x3FE,
	rsDIV = 0x3FF,
	rsMUL = 0x400,
	rsADD = 0x401,
	rsSUB = 0x402,
	rsEXTDEL = 0x403,
	rsEXT_END = 0x404,
	rsEXTDOWN = 0x405,
	rsEXTPGDN = 0x406,
	rsEXTLEFT = 0x407,
	rsNUM5 = 0x408,
	rsNUMLOCK = 0x409,
	rsEXTRIGHT = 0x40A,
	rsEXTHOME = 0x40B,
	rsEXTUP = 0x40C,
	rsEXTPGUP = 0x40D,
	rsEXTINSERT = 0x40E,
	rsENTER = 0x40F,
	rsSCROLL = 0x410,
	rsPAUSE = 0x411,
	rsBACK = 0x412,
	rsTAB = 0x413,
	rsCAPSLOCK = 0x414,
	rsEXTENTER = 0x415,
	rsLSHIFT = 0x416,
	rsRSHIFT = 0x417,
	rsSHIFT = 0x418,
	rsLCTRL = 0x419,
	rsRCTRL = 0x41A,
	rsLMENU = 0x41B,
	rsRMENU = 0x41C,
	rsLWIN = 0x41D,
	rsRWIN = 0x41E,
	rsAPPS = 0x41F,
	rsNULL = 0x420,
};

class CPad
{
public:
	CControllerState NewState;
	CControllerState OldState;
	CControllerState PCTempKeyState;
	CControllerState PCTempJoyState;
	CControllerState PCTempMouseState;
	char Phase;
	char gap_d3[1];
	short Mode;
	short ShakeDur;
	char ShakeFreq;
	char bHornHistory[5];
	char iCurrHornHistory;
	char DisablePlayerControls;
	char JustOutOfFrontEnd;
	char bApplyBrakes;
	char field_e2[12];
	char gap_ee[2];
	int LastTimeTouched;
	int AverageWeapon;
	int AverageEntries;

	static short *NewKeyState;	// 312
	static short *OldKeyState;	// 312
	static CMouseControllerState &NewMouseControllerState;
	static CMouseControllerState &OldMouseControllerState;
	static bool &m_bMapPadOneToPadTwo;

	static CPad *GetPad(int);
};
static_assert(sizeof(CPad) == 0xFC, "CPad: wrong size");

class CControllerConfigManager
{
public:
	bool GetIsKeyboardKeyDown(RsKeyCodes key);
	bool GetIsKeyboardKeyJustDown(RsKeyCodes key);
};

#define JUSTDOWN(b) (pad->NewState.b && !pad->OldState.b)
#define KEYJUSTDOWN(k) ctrldummy->GetIsKeyboardKeyJustDown(k)
#define KEYDOWN(k) ctrldummy->GetIsKeyboardKeyDown(k)
#define CTRLJUSTDOWN(key) \
	       ((KEYDOWN(rsLCTRL) || KEYDOWN(rsRCTRL)) && KEYJUSTDOWN((RsKeyCodes)key) || \
	        (KEYJUSTDOWN(rsLCTRL) || KEYJUSTDOWN(rsRCTRL)) && KEYDOWN((RsKeyCodes)key))
#define CTRLDOWN(key) ((KEYDOWN(rsLCTRL) || KEYDOWN(rsRCTRL)) && KEYDOWN((RsKeyCodes)key))
