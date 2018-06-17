#include "tcycedit.h"

RsGlobalType &RsGlobal = *(RsGlobalType*)ADDR(0x8F4360, 0x9B48D8);

uint8 &CTimer::m_UserPause = *(uint8*)ADDR(0x95CD7C, 0xA10B36);
uint8 &CTimer::m_CodePause = *(uint8*)ADDR(0x95CDB1, 0xA10B76);
//WRAPPER void CTimer::Stop(void) { EAXJMP(0x4AD480); }
//WRAPPER void CTimer::Update(void) { EAXJMP(0x4ACF70); }

int8  &CClock::ms_nGameClockHours = *(int8*)ADDR(0x95CDA6, 0xA10B6B);
int8  &CClock::ms_nGameClockMinutes = *(int8*)ADDR(0x95CDC8, 0xA10B92);
int16 &CClock::ms_nGameClockSeconds = *(int16*)ADDR(0x95CC7C, 0xA10A3C);

float &CWeather::InterpolationValue = *(float*)ADDR(0x8F2520, 0x9787D8);
int16 &CWeather::OldWeatherType = *(int16*)ADDR(0x95CCEC, 0xA10AAA);
int16 &CWeather::NewWeatherType = *(int16*)ADDR(0x95CC70, 0xA10A2E);

WRAPPER void CFileMgr::SetDir(const char *path) { EAXJMP(ADDR(0x479020, 0x48E030)); }

WRAPPER void CCoronas::DoSunAndMoon(void){ EAXJMP(ADDR(0x4FA380, 0x542210)); }
WRAPPER void CCoronas::Update(void){ EAXJMP(ADDR(0x4F8EC0, 0x544130)); }

WRAPPER CPad *CPad::GetPad(int id) { EAXJMP(ADDR(0x492F60, 0x4AB060)); }

WRAPPER bool CControllerConfigManager::GetIsKeyboardKeyDown(RsKeyCodes key) { EAXJMP(ADDR(0x58D2A0, 0x617E10)); }
WRAPPER bool CControllerConfigManager::GetIsKeyboardKeyJustDown(RsKeyCodes key) { EAXJMP(ADDR(0x58D8A0, 0x617430)); }

WRAPPER void CSprite2d::Draw(CRect const &, CRGBA const &) { EAXJMP(ADDR(0x51ED50, 0x578710)); }
WRAPPER void CSprite2d::DrawRect(CRect const &,CRGBA const &) { EAXJMP(ADDR(0x51F970, 0x577B00)); }

//WRAPPER void CFont::Initialise(void)                                 { EAXJMP(ADDR(0x500A40, 0x552310)); }
//WRAPPER void CFont::Shutdown(void)                                   { EAXJMP(ADDR(0x500BA0, 0x5522E0)); }
//WRAPPER void CFont::InitPerFrame(void)                               { EAXJMP(ADDR(0x500BE0, 0x0)); }
//WRAPPER void CFont::PrintChar(float,float,short)                     { EAXJMP(ADDR(0x500C30, 0x0)); }
WRAPPER void CFont::PrintString(float,float,uint16 *)                { EAXJMP(ADDR(0x500F50, 0x551040)); }
//WRAPPER void CFont::PrintString(float,float,uint16 *,uint16 *,float) { EAXJMP(ADDR(0x501730, 0x0)); }
//WRAPPER void CFont::ParseToken(uint16 *,uint16 *)                    { EAXJMP(ADDR(0x5019A0, 0x0)); }
//WRAPPER void CFont::DrawFonts(void)                                  { EAXJMP(ADDR(0x501B50, 0x0)); }
WRAPPER void CFont::SetScale(float,float)                            { EAXJMP(ADDR(0x501B80, 0x550230)); }
WRAPPER void CFont::SetColor(CRGBA*)                                 { EAXJMP(ADDR(0x501BD0, 0x550170)); }
WRAPPER void CFont::SetJustifyOff(void)                              { EAXJMP(ADDR(0x501C80, 0x550140)); }
WRAPPER void CFont::SetCentreOn(void)                                { EAXJMP(ADDR(0x501C90, 0x550120)); }
WRAPPER void CFont::SetCentreOff(void)                               { EAXJMP(ADDR(0x501CB0, 0x550110)); }
//WRAPPER void CFont::SetCentreSize(float)                             { EAXJMP(ADDR(0x501CD0, 0x0)); }
WRAPPER void CFont::SetBackgroundOff(void)                           { EAXJMP(ADDR(0x501CF0, 0x5500D0)); }
WRAPPER void CFont::SetBackGroundOnlyTextOff(void)                   { EAXJMP(ADDR(0x501D40, 0x550080)); }
WRAPPER void CFont::SetRightJustifyOn(void)                          { EAXJMP(ADDR(0x501D50, 0x550060)); }
WRAPPER void CFont::SetPropOff(void)                                 { EAXJMP(ADDR(0x501D90, 0x550030)); }
WRAPPER void CFont::SetPropOn(void)                                  { EAXJMP(ADDR(0x501DA0, 0x550020)); }
WRAPPER void CFont::SetFontStyle(short)                              { EAXJMP(ADDR(0x501DB0, 0x54FFE0)); }
WRAPPER void CFont::SetRightJustifyWrap(float)                       { EAXJMP(ADDR(0x501DC0, 0x54FFD0)); }
//WRAPPER void CFont::SetDropShadowPosition(short)                     { EAXJMP(ADDR(0x501E70, 0x0)); }
//WRAPPER double CFont::GetStringWidth(uint16 *str, bool spc)          { EAXJMP(ADDR(0x5018A0, 0x0)); }

WRAPPER void AsciiToUnicode(char const *,uint16 *) { EAXJMP(ADDR(0x5009C0, 0x552500)); }
