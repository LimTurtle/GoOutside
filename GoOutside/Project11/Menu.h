#pragma once
#include "StateObj.h"
class Menu : public StateObj
{
private:
	INFO* g_Menu[2];
	INFO* g_Cursor;
	int cursorIndex;
	const char*menuImg[9];
public:
	virtual void Initialize();
	virtual void Progress();
	virtual void Render();
	virtual void Release();
public:
	Menu();
	~Menu();
};