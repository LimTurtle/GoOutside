#include "Player.h"
#include "Map.h"
#include "StateMgr.h"
#include "CollisionMgr.h"

void Player::Initialize()
{
	SetInfo(9, 2,true);
	info.dir = RIGHT;
	SetInfo("(¡¬£ß/)", "(¤·¤µ¤·)", "    ¤·¤·  ");
	info.cx = strlen("(¡¬£ß/)");
	info.cy = 3;
	info.jump = false;
	info.isGrounded = false;
	info.jump_act = false;
	info.playerJumpHeight = 0;
	_mapNum = 0;
	life = 3;
}

void Player::Progress()
{
	dwKey = KeyMgr::GetInst()->GetKey();
	//if (dwKey & KEY_UP)
	//{
	//	info.dir = UP;
	//	SetInfo("(¡¬£ß/)", "(      )", "  ¨¬¨¬    ");
	//	info.y--;
	//}
	//if (dwKey & KEY_DOWN)
	//{
	//	info.dir = DOWN;
	//	SetInfo("(¡¬£ß/)", "(¤·¤µ¤·)", "  ¤·¤·    ");
	//	info.y++;
	//}
	if (dwKey & KEY_RIGHT)
	{
		info.dir = RIGHT;
		SetInfo("(¡¬£ß/)", "(¤·¤µ¤·)", "    ¤·¤·  ");
		info.x++;

		//for (int y = 0; y < info.cy; y++)
		//{
		//	if (Map::GetInst()->GetValue((info.x + info.cx) / 2, info.y + y) == 1)
		//	{
		//		info.x--;
		//	}
		//}

	}
	if (dwKey & KEY_LEFT)
	{

		info.dir = LEFT;
		SetInfo("(¡¬£ß/)", "(¤·¤µ¤·)", "¤·¤·      ");
		info.x--;
		
		//for (int y = 0; y < info.cy; y++)
		//{
		//	if (Map::GetInst()->GetValue((info.x) / 2, info.y + y) == 1)
		//	{
		//		info.x++;
		//	}
		//}
	}
	for (int i = 0; i < info.cx; i++)
	{
		if (Map::GetInst()->GetValue((info.x + i)/2, info.y + 3) == 1)
		{
			info.jump_act = true;
			info.isGrounded = true;
			break;
		}
		else
		{
			info.isGrounded = false;
		}
	}
	if (dwKey & KEY_SPACE)
	{
		if (info.jump_act)
		{

			info.jump = true;
			info.isGrounded = false;
			info.playerJumpHeight = 0;
			info.jump_act = false;
		}
	}

	
	if (info.isGrounded)
	{
		
	}
	else
	{
		if (info.jump)
		{
			info.y--;
			info.playerJumpHeight++;
			if (info.playerJumpHeight > 4)
			{
				info.jump = false;
				info.playerJumpHeight = 0;
			}
		}
		else
		{
			info.y++;
		}
	}

	if (info.x < 0)
	{
		info.x++;
	}
	if (info.x + info.cx >= BufferWidth)
	{
		info.x--;
	}


	for (int y = 0; y < info.cy; y++)
	{
		for (int x = 0; x < info.cx; x++)
		{
			if (Map::GetInst()->GetValue((info.x + x) / 2, info.y+y) == 8)
			{
				_mapNum++;
				Map::GetInst()->SelectedMap(_mapNum);
				Map::GetInst()->NextStage();
				SetInfo(9, 2, true);
				info.dir = RIGHT;
				info.jump = false;
				info.isGrounded = false;
				info.jump_act = false;
				info.playerJumpHeight = 0;
				break;
			}

			if (Map::GetInst()->GetValue((info.x + x) / 2, info.y + y) == 9)
			{
				if (life < 1)
				{
					StateMgr::GetInst()->SetState(EXIT);
				}
				SetInfo(9, 2, true);
				life--;
				info.dir = RIGHT;
				info.jump = false;
				info.isGrounded = false;
				info.jump_act = false;
				info.playerJumpHeight = 0;
			}
		}
	}
}

void Player::Render()
{
	for (int i = 0; i < CharSize; i++)
	{
		DoubleBuffer::GetInst()->WriteBuffer(info.x, info.y+i, info.BigShape[i], 14);
	}

	for (int i = 0; i < life; i++)
	{
		DoubleBuffer::GetInst()->WriteBuffer(BufferWidth-10+i*2,BufferHeight-2, "¢¾", 12);
	}
}

void Player::Release()
{
}



Player::Player()
{

}


Player::~Player()
{
}
