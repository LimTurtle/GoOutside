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
	g_Cursor->shape = "�̰�?";

	cursorIndex = 0;

	menuImg[0] = "  ���        ���  ";
	menuImg[1] = " ����      ���� ";
	menuImg[2] = "  ��  �����  ��  ";
	menuImg[3] = "  ��  �� �� ��  ��  ";
	menuImg[4] = " ��              �� ";
	menuImg[5] = "  ��            ��  ";
	menuImg[6] = "  ��            ��  ";
	menuImg[7] = " ��              �� ";
	menuImg[8] = "��                ��";
}

void Menu::Progress()
{
	dwKey = KeyMgr::GetInst()->GetKey();

	if (dwKey & KEY_UP)
	{
		menuImg[0] = "  ���        ���  ";
		menuImg[1] = " ����      ���� ";
		menuImg[2] = "  ��  �����  ��  ";
		menuImg[3] = "  ��  �� �� ��  ��  ";
		menuImg[4] = " ��              �� ";
		menuImg[5] = "  ��            ��  ";
		menuImg[6] = "  ��            ��  ";
		menuImg[7] = " ��              �� ";
		menuImg[8] = "��                ��";
		g_Cursor->y = g_Menu[0]->y+5;
		cursorIndex = 0;
	}

	if (dwKey & KEY_DOWN)
	{
		menuImg[0] = "  ���        ���  ";
		menuImg[1] = " ����      ���� ";
		menuImg[2] = "  ��  �����  ��  ";
		menuImg[3] = "  ��            ��  ";
		menuImg[4] = " ��              �� ";
		menuImg[5] = "  ��  �� �� ��  ��  ";
		menuImg[6] = "  ��            ��  ";
		menuImg[7] = " ��              �� ";
		menuImg[8] = "��                ��";
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
	DoubleBuffer::GetInst()->WriteBuffer(g_Menu[0]->x, g_Menu[0]->y, g_Menu[0]->shape, ���);
	DoubleBuffer::GetInst()->WriteBuffer(g_Menu[1]->x, g_Menu[1]->y, g_Menu[1]->shape, ���);
	DoubleBuffer::GetInst()->WriteBuffer(g_Cursor->x, g_Cursor->y, g_Cursor->shape, ���);
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
