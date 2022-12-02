#include "Map.h"


Map*Map::pInst = nullptr;

void Map::NextStage()
{
	_NextStage++;
}

void Map::Initialize()
{
	_NextStage = 0;
	moreJump = new Item;
}

void Map::SelectedMap(int _mapNum)
{
	mapNum = _mapNum;
}



void Map::Render()
{
	shape = new char;
	for (int y = 0; y < BufferHeight; y++)
	{
		for (int x = 0; x < BufferWidth/2; x++)
		{
			switch (GetValue(x,y))
			{
			case 0:
				shape = "";
				color = 7;
				break;
			case 1:
				shape = "□";
				color = 7;
				break;
			case 2:
				shape = "┌";
				color = 11;
				break;
			case 3:
				shape = "┐";
				color = 11;
				break;
			case 4:
				shape = "└";
				color = 11;
				break;
			case 5:
				shape = "┘";
				color = 11;
				break;
			case 6:
				shape = "─";
				color = 11;
				break;
			case 7:
				shape = "│";
				color = 11;
				break;
			case 8:
				shape = "▦";
				color = 3;
				break;
			case 9:
				shape = "▲";
				color = 12;
			
			default:
				break;
			}
			DoubleBuffer::GetInst()->WriteBuffer(x*2, y, shape, color);
		}

		
	}
	switch (_NextStage)
	{
	case 0:
		DoubleBuffer::GetInst()->WriteBuffer(2, 34, " 방향키로 이동합니다. ", 7);
		break;
	case 1:
		DoubleBuffer::GetInst()->WriteBuffer(2, 34, " 스페이스바로 점프가 가능합니다.", 7);
		break;
	case 2:
		DoubleBuffer::GetInst()->WriteBuffer(2, 34, " 빨간 물체에 닿을 시, 처음 위치로 돌아갑니다.", 7);
		break;
	case 4:
		moreJump->Progress();
	default:
		break;
	}
}

int Map::GetValue(int x, int y)
{
	int num;

	switch (mapNum)
	{
	case 0:
		num = map01_1[y][x];
		break;
	case 1:
		num = map02_1[y][x];
		break;
	case 2:
		num = map03_1[y][x];
		break;
	case 3:
		num = map04_1[y][x];
		break;
	case 4:
		num = map05_1[y][x];
		break;
	default:
		break;
	}
	return num;
}



Map::Map()
{

}


Map::~Map()
{
	delete shape;
}
