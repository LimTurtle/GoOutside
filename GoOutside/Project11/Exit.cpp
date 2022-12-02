#include "Exit.h"
#include "StateMgr.h"


void Exit::Initialize()
{
}

void Exit::Progress()
{
	dwKey = KeyMgr::GetInst()->GetKey();
	if (dwKey & KEY_RETURN)
	{
	}
}

void Exit::Render()
{
	DoubleBuffer::GetInst()->WriteBuffer(20, 10, "Exit", 7);
}

void Exit::Release()
{
}

Exit::Exit()
{
}


Exit::~Exit()
{
}
