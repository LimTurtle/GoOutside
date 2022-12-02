#include "KeyMgr.h"

KeyMgr*KeyMgr::pInst = nullptr;

void KeyMgr::CheckKey()
{
	dKey = 0;

	if (GetAsyncKeyState(VK_UP)&0x8000)
	{
		dKey |= KEY_UP;
	}

	if (GetAsyncKeyState(VK_DOWN) & 0x8000)
	{
		dKey |= KEY_DOWN;
	}
	if (GetAsyncKeyState(VK_LEFT) & 0x8000)
	{
		dKey |= KEY_LEFT;
	}
	if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
	{
		dKey |= KEY_RIGHT;
	}
	if (GetAsyncKeyState(VK_SPACE) & 0x8000)
	{
		dKey |= KEY_SPACE;
	}
	if (GetAsyncKeyState(VK_RETURN) & 0x8000)
	{
		dKey |= KEY_RETURN;
	}
}

KeyMgr::KeyMgr()
{
}


KeyMgr::~KeyMgr()
{
}
