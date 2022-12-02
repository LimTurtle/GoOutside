#pragma once
#include "MainGame.h"

void main()
{
	DWORD dwTime = GetTickCount();
	srand((unsigned)time(NULL));
	MainGame game;
	game.Initialize();

	while (true)
	{
		if (dwTime + 70< GetTickCount())
		{
			dwTime = GetTickCount();
			game.Progress();
			game.Render();
		}
	}
}