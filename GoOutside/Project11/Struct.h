#pragma once

typedef struct Info
{
	const char*shape;
	const char*BigShape[CharSize];
	int x;
	int y;
	bool act;
	int cx;
	int cy;

	bool jump_act;
	bool jump;
	bool isGrounded;
	int playerJumpHeight;

	Direct dir;
}INFO;