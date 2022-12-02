#include "Menu.h"
#include "StateMgr.h"

void Menu::Initialize()
{
	g_Menu[0] = new INFO;
	g_Menu[1] = new INFO;
	g_Cursor = new INFO;

	g_Menu[0]->x = 35;
	g_Menu[0]->y = 5;
	g_Menu[0]->shape = "START";

	g_Menu[1]->x = 35;
	g_Menu[1]->y = BufferHeight-5;
	g_Menu[1]->shape = "EXIT";

	g_Cursor->x = g_Menu[0]->x;
	g_Cursor->y = g_Menu[0]->y+5;
	g_Cursor->shape = "└╠░┼?";

	cursorIndex = 0;

	menuImg[0] = "  бсбс        бсбс  ";
	menuImg[1] = " бсбрбс      бсбрбс ";
	menuImg[2] = "  бс  бсбсбсбс  бс  ";
	menuImg[3] = "  бс  б█ д╡ б█  бс  ";
	menuImg[4] = " бс              бс ";
	menuImg[5] = "  бс            бс  ";
	menuImg[6] = "  бс            бс  ";
	menuImg[7] = " бс              бс ";
	menuImg[8] = "бс                бс";
}

void Menu::Progress()
{
	dwKey = KeyMgr::GetInst()->GetKey();

	if (dwKey & KEY_UP)
	{
		menuImg[0] = "  бсбс        бсбс  ";
		menuImg[1] = " бсбрбс      бсбрбс ";
		menuImg[2] = "  бс  бсбсбсбс  бс  ";
		menuImg[3] = "  бс  б█ д╡ б█  бс  ";
		menuImg[4] = " бс              бс ";
		menuImg[5] = "  бс            бс  ";
		menuImg[6] = "  бс            бс  ";
		menuImg[7] = " бс              бс ";
		menuImg[8] = "бс                бс";
		g_Cursor->y = g_Menu[0]->y+5;
		cursorIndex = 0;
	}

	if (dwKey & KEY_DOWN)
	{
		menuImg[0] = "  бсбс        бсбс  ";
		menuImg[1] = " бсбрбс      бсбрбс ";
		menuImg[2] = "  бс  бсбсбсбс  бс  ";
		menuImg[3] = "  бс            бс  ";
		menuImg[4] = " бс              бс ";
		menuImg[5] = "  бс  б█ д╡ б█  бс  ";
		menuImg[6] = "  бс            бс  ";
		menuImg[7] = " бс              бс ";
		menuImg[8] = "бс                бс";
		g_Cursor->y = g_Menu[1]->y-5;
		cursorIndex = 1;
	}

	if (dwKey & KEY_RETURN)
	{
		switch (cursorIndex)
		{
		case 0:
			StateMgr::GetInst()->SetState(STAGE);
			break;
		case 1:
			StateMgr::GetInst()->SetState(EXIT);
			break;
		default:
			break;
		}


	}
}

void Menu::Render()
{
	for (int i = 0; i < 9; i++)
	{
		DoubleBuffer::GetInst()->WriteBuffer(30,15+i,menuImg[i],7);
	}
	DoubleBuffer::GetInst()->WriteBuffer(g_Menu[0]->x, g_Menu[0]->y, g_Menu[0]->shape, ╚Є╗Ў);
	DoubleBuffer::GetInst()->WriteBuffer(g_Menu[1]->x, g_Menu[1]->y, g_Menu[1]->shape, ╚Є╗Ў);
	DoubleBuffer::GetInst()->WriteBuffer(g_Cursor->x, g_Cursor->y, g_Cursor->shape, ╚Є╗Ў);
}

void Menu::Release()
{
}

Menu::Menu()
{

}


Menu::~Menu()
{
	delete g_Menu[0];
	delete g_Menu[1];
	delete g_Cursor;
}
