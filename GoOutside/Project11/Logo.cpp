#include "Logo.h"
#include "StateMgr.h"


void Logo::Initialize()
{
	aniNum = 0;
}

void Logo::Progress()
{
	switch (aniNum)
	{
	case 0:
		AniImg00();
		break;
	case 1:
		AniImg01();
		break;
	case 2:
		AniImg02();
		break;
	case 3:
		AniImg03();
		break;
	case 4:
		AniImg04();
		break;
	case 5:
		AniImg05();
		break;
	case 6:
		AniImg06();
		break;
	case 7:
		AniImg07();
		break;
	case 8:
		AniImg08();
		break;
	case 9:
		AniImg09();
		break;
	case 10:
		AniImg10();
		break;
	case 11:
		AniImg11();
		break;
	case 12:
		AniImg12();
		break;
	case 13:
		AniImg13();
		break;
	case 14:
		AniImg14();
		break;
	case 15:
		AniImg15();
		break;
	case 16:
		AniImg16();
		break;
	case 17:
		AniImg17();
		break;
	case 18:
		AniImg18();
		break;
	case 19:
		AniImg19();
		break;
	case 20:
		AniImg20();
		break;
	case 21:
		AniImg21();
		break;
	case 22:
		AniImg22();
		break;
	case 23:
		AniImg23();
		break;
	case 24:
		AniImg24();
		break;
	case 25:
		AniImg25();
		break;
	case 26:
		AniImg26();
		break;
	case 27:
		AniImg27();
		break;
	case 28:
		AniImg28();
		break;
	default:
		AniImg29();
		break;
	}
	aniNum++;

	dwKey = KeyMgr::GetInst()->GetKey();
	if (dwKey & KEY_RETURN)
	{
		StateMgr::GetInst()->SetState(MENU);
	}
}

void Logo::Render()
{
	for (int j = 0; j < 25; j++)
	{
		DoubleBuffer::GetInst()->WriteBuffer(0, 5 + j, logoImg[j], 7);
	}
}

void Logo::Release()
{
}

void Logo::AniImg00()
{
	logoImg[0] = "                                                                            ";
	logoImg[1] = "                                                                            ";
	logoImg[2] = "                                                                            ";
	logoImg[3] = "                                                                            ";
	logoImg[4] = "                                                                            ";
	logoImg[5] = "                                                                            ";
	logoImg[6] = "                                                                            ";
	logoImg[7] = "                                                                            ";
	logoImg[8] = "                                                                            ";
	logoImg[9] = "                                                                            ";
	logoImg[10] = "                                                                           ";
	logoImg[11] = "                                                                           ";
	logoImg[12] = "                                                                           ";
	logoImg[13] = "                                                                           ";
	logoImg[14] = "                                                                            ";
	logoImg[15] = "                                                                            ";
	logoImg[16] = "                                                                            ";
	logoImg[17] = "                                                                            ";
	logoImg[18] = "                                                                            ";
	logoImg[19] = "                                                                            ";
	logoImg[20] = "                                                                            ";
	logoImg[21] = "                                                                            ";
	logoImg[22] = "                                                                            ";
	logoImg[23] = "                                                                            ";
	logoImg[24] = "                                                                            ";
}

void Logo::AniImg01()
{
	logoImg[0] = "                                                                            ";
	logoImg[1] = "                                                                            ";
	logoImg[2] = "                                                                            ";
	logoImg[3] = "                                                                            ";
	logoImg[4] = "                                                                            ";
	logoImg[5] = "                                                                            ";
	logoImg[6] = "                                                                            ";
	logoImg[7] = "                                                                            ";
	logoImg[8] = "                                                                            ";
	logoImg[9] = "                                                                            ";
	logoImg[10] = "                                                                           ";
	logoImg[11] = "                                                                           ";
	logoImg[12] = "                                                                           ";
	logoImg[13] = "                                                                           ";
	logoImg[14] = "                                                                            ";
	logoImg[15] = "                                                                            ";
	logoImg[16] = "                                                                            ";
	logoImg[17] = "                                                                            ";
	logoImg[18] = "                                                                            ";
	logoImg[19] = "                                                                            ";
	logoImg[20] = "                                                                            ";
	logoImg[21] = "                                                                            ";
	logoImg[22] = "                                                                            ";
	logoImg[23] = "                                                                            ";
	logoImg[24] = "                                                                            ";
}

void Logo::AniImg02()
{
	logoImg[0] = "                                                                            ";
	logoImg[1] = "                                                                            ";
	logoImg[2] = "                                                                            ";
	logoImg[3] = "                                                                            ";
	logoImg[4] = "                                                                            ";
	logoImg[5] = "                                                                            ";
	logoImg[6] = "                                                                            ";
	logoImg[7] = "                                                                            ";
	logoImg[8] = "                                                                            ";
	logoImg[9] = "                                                                            ";
	logoImg[10] = "                                                                           ";
	logoImg[11] = "                                                                           ";
	logoImg[12] = "                                                                           ";
	logoImg[13] = "                                                                           ";
	logoImg[14] = "                                                                            ";
	logoImg[15] = "                                                                            ";
	logoImg[16] = "                                                                            ";
	logoImg[17] = "                                                                            ";
	logoImg[18] = "                                                                            ";
	logoImg[19] = "                                                                            ";
	logoImg[20] = "                                                                            ";
	logoImg[21] = "                                                                            ";
	logoImg[22] = "                                                                            ";
	logoImg[23] = "                                                                            ";
	logoImg[24] = "                                                                            ";
}

void Logo::AniImg03()
{
	logoImg[0] = "                                                                            ";
	logoImg[1] = "                                                                            ";
	logoImg[2] = "                                                                            ";
	logoImg[3] = "                                                                            ";
	logoImg[4] = "                                                                            ";
	logoImg[5] = "                                                                            ";
	logoImg[6] = "                                                                            ";
	logoImg[7] = "                                                                            ";
	logoImg[8] = "                                                                            ";
	logoImg[9] = "                                                                            ";
	logoImg[10] = "                                                                            ";
	logoImg[11] = "                                                                            ";
	logoImg[12] = "                                                                            ";
	logoImg[13] = "                                                                            ";
	logoImg[14] = "                                                                            ";
	logoImg[15] = "                                                                            ";
	logoImg[16] = "                                                                            ";
	logoImg[17] = "                                                                            ";
	logoImg[18] = "                                                                            ";
	logoImg[19] = "                                                                            ";
	logoImg[20] = "                                                                            ";
	logoImg[21] = "                                                                            ";
	logoImg[22] = "                                                                            ";
	logoImg[23] = "                      ﹥﹥        ﹥﹥                                      ";
	logoImg[24] = "                     ﹥﹤﹥      ﹥﹤﹥                                     ";
}

void Logo::AniImg04()
{
	logoImg[0] = "                                                                            ";
	logoImg[1] = "                                                                            ";
	logoImg[2] = "                                                                            ";
	logoImg[3] = "                                                                            ";
	logoImg[4] = "                                                                            ";
	logoImg[5] = "                                                                            ";
	logoImg[6] = "                                                                            ";
	logoImg[7] = "                                                                            ";
	logoImg[8] = "                                                                            ";
	logoImg[9] = "                                                                            ";
	logoImg[10] = "                                                                            ";
	logoImg[11] = "                                                                            ";
	logoImg[12] = "                                                                            ";
	logoImg[13] = "                                                                            ";
	logoImg[14] = "                                                                            ";
	logoImg[15] = "                                                                            ";
	logoImg[16] = "                                                                            ";
	logoImg[17] = "                                                                            ";
	logoImg[18] = "                                                                            ";
	logoImg[19] = "                                                                            ";
	logoImg[20] = "                                                                            ";
	logoImg[21] = "                      ﹥﹥        ﹥﹥                                      ";
	logoImg[22] = "                     ﹥﹤﹥      ﹥﹤﹥                                     ";
	logoImg[23] = "                      ﹥  ﹥﹥﹥﹥  ﹥                                      ";
	logoImg[24] = "                      ﹥            ﹥                                      ";
}

void Logo::AniImg05()
{
	logoImg[0] = "                                                                            ";
	logoImg[1] = "                                                                            ";
	logoImg[2] = "                                                                            ";
	logoImg[3] = "                                                                            ";
	logoImg[4] = "                                                                            ";
	logoImg[5] = "                                                                            ";
	logoImg[6] = "                                                                            ";
	logoImg[7] = "                                                                            ";
	logoImg[8] = "                                                                            ";
	logoImg[9] = "                                                                            ";
	logoImg[10] = "                                                                            ";
	logoImg[11] = "                                                                            ";
	logoImg[12] = "                                                                            ";
	logoImg[13] = "                                                                            ";
	logoImg[14] = "                                                                            ";
	logoImg[15] = "                                                                            ";
	logoImg[16] = "                                                                            ";
	logoImg[17] = "                                                                            ";
	logoImg[18] = "                                                                            ";
	logoImg[19] = "                                                                            ";
	logoImg[20] = "                      ﹥﹥        ﹥﹥                                      ";
	logoImg[21] = "                     ﹥﹤﹥      ﹥﹤﹥                                     ";
	logoImg[22] = "                      ﹥  ﹥﹥﹥﹥  ﹥                                      ";
	logoImg[23] = "                      ﹥            ﹥                                      ";
	logoImg[24] = "                     ﹥   式 今 式   ﹥                                     ";
}

void Logo::AniImg06()
{
	logoImg[0] = "                                                                            ";
	logoImg[1] = "                                                                            ";
	logoImg[2] = "                                                                            ";
	logoImg[3] = "                                                                            ";
	logoImg[4] = "                                                                            ";
	logoImg[5] = "                                                                            ";
	logoImg[6] = "                                                                            ";
	logoImg[7] = "                                                                            ";
	logoImg[8] = "                                                                            ";
	logoImg[9] = "                                                                            ";
	logoImg[10] = "                                                                            ";
	logoImg[11] = "                                                                            ";
	logoImg[12] = "                                                                            ";
	logoImg[13] = "                                                                            ";
	logoImg[14] = "                                                                            ";
	logoImg[15] = "                                                                            ";
	logoImg[16] = "                                                                            ";
	logoImg[17] = "                                                                            ";
	logoImg[18] = "                                                                            ";
	logoImg[19] = "                                                                            ";
	logoImg[20] = "                      ﹥﹥        ﹥﹥                                      ";
	logoImg[21] = "                     ﹥﹤﹥      ﹥﹤﹥                                     ";
	logoImg[22] = "                      ﹥  ﹥﹥﹥﹥  ﹥                                      ";
	logoImg[23] = "                      ﹥            ﹥                                      ";
	logoImg[24] = "                     ﹥   式 今 式   ﹥                                     ";
}

void Logo::AniImg07()
{
	logoImg[0] = "                                                                            ";
	logoImg[1] = "                                                                            ";
	logoImg[2] = "                                                                            ";
	logoImg[3] = "                                                                            ";
	logoImg[4] = "                                                                            ";
	logoImg[5] = "                                                                            ";
	logoImg[6] = "                                                                            ";
	logoImg[7] = "                                                                            ";
	logoImg[8] = "                                                                            ";
	logoImg[9] = "                                                                            ";
	logoImg[10] = "                                                                            ";
	logoImg[11] = "                                                                            ";
	logoImg[12] = "                                                                            ";
	logoImg[13] = "                                                                            ";
	logoImg[14] = "                                                                            ";
	logoImg[15] = "                                                                            ";
	logoImg[16] = "                                                                            ";
	logoImg[17] = "                                                                            ";
	logoImg[18] = "                                                                            ";
	logoImg[19] = "                                                                            ";
	logoImg[20] = "                      ﹥﹥        ﹥﹥                                      ";
	logoImg[21] = "                     ﹥﹤﹥      ﹥﹤﹥                                     ";
	logoImg[22] = "                      ﹥  ﹥﹥﹥﹥  ﹥                                      ";
	logoImg[23] = "                      ﹥            ﹥                                      ";
	logoImg[24] = "                     ﹥   ∞ 今 ∞   ﹥                                     ";
}

void Logo::AniImg08()
{
	logoImg[0] = "                                                                            ";
	logoImg[1] = "                                                                            ";
	logoImg[2] = "                                                                            ";
	logoImg[3] = "                                                                            ";
	logoImg[4] = "                                                                            ";
	logoImg[5] = "                                                                            ";
	logoImg[6] = "                                                                            ";
	logoImg[7] = "                                                                            ";
	logoImg[8] = "                                                                            ";
	logoImg[9] = "                                                                            ";
	logoImg[10] = "                                                                            ";
	logoImg[11] = "                                                                            ";
	logoImg[12] = "                                                                            ";
	logoImg[13] = "                                                                            ";
	logoImg[14] = "                                                                            ";
	logoImg[15] = "                                                                            ";
	logoImg[16] = "                                                                            ";
	logoImg[17] = "                                                                            ";
	logoImg[18] = "                                                                            ";
	logoImg[19] = "                                                                            ";
	logoImg[20] = "                      ﹥﹥        ﹥﹥                                      ";
	logoImg[21] = "                     ﹥﹤﹥      ﹥﹤﹥                                     ";
	logoImg[22] = "                      ﹥  ﹥﹥﹥﹥  ﹥                                      ";
	logoImg[23] = "                      ﹥            ﹥                                      ";
	logoImg[24] = "                     ﹥   式 今 式   ﹥                                     ";
}

void Logo::AniImg09()
{
	logoImg[0] = "                                                                            ";
	logoImg[1] = "                                                                            ";
	logoImg[2] = "                                                                            ";
	logoImg[3] = "                                                                            ";
	logoImg[4] = "                                                                            ";
	logoImg[5] = "                                                                            ";
	logoImg[6] = "                                                                            ";
	logoImg[7] = "                                                                            ";
	logoImg[8] = "                                                                            ";
	logoImg[9] = "                                                                            ";
	logoImg[10] = "                                                                            ";
	logoImg[11] = "                                                                            ";
	logoImg[12] = "                                                                            ";
	logoImg[13] = "                                                                            ";
	logoImg[14] = "                                                                            ";
	logoImg[15] = "                                                                            ";
	logoImg[16] = "                                                                            ";
	logoImg[17] = "                                                                            ";
	logoImg[18] = "                                                                            ";
	logoImg[19] = "                                                                            ";
	logoImg[20] = "                      ﹥﹥        ﹥﹥                                      ";
	logoImg[21] = "                     ﹥﹤﹥      ﹥﹤﹥                                     ";
	logoImg[22] = "                      ﹥  ﹥﹥﹥﹥  ﹥                                      ";
	logoImg[23] = "                      ﹥            ﹥                                      ";
	logoImg[24] = "                     ﹥   ∞ 今 ∞   ﹥                                     ";
}

void Logo::AniImg10()
{
	logoImg[0] = "                                                                            ";
	logoImg[1] = "                                                                            ";
	logoImg[2] = "                                                                            ";
	logoImg[3] = "                                                                            ";
	logoImg[4] = "                                                                            ";
	logoImg[5] = "                                                                            ";
	logoImg[6] = "                                                                            ";
	logoImg[7] = "                                                                            ";
	logoImg[8] = "                                                                            ";
	logoImg[9] = "                                                                            ";
	logoImg[10] = "                                                                            ";
	logoImg[11] = "                                                                            ";
	logoImg[12] = "                                                                            ";
	logoImg[13] = "                                                                            ";
	logoImg[14] = "                                                                            ";
	logoImg[15] = "                                                                            ";
	logoImg[16] = "                                                                            ";
	logoImg[17] = "                                                                            ";
	logoImg[18] = "                                                                            ";
	logoImg[19] = "                                                                            ";
	logoImg[20] = "                      ﹥﹥        ﹥﹥                                      ";
	logoImg[21] = "                     ﹥﹤﹥      ﹥﹤﹥                                     ";
	logoImg[22] = "                      ﹥  ﹥﹥﹥﹥  ﹥                                      ";
	logoImg[23] = "                      ﹥            ﹥                                      ";
	logoImg[24] = "                     ﹥   ∞ 今 ∞   ﹥                                     ";
}

void Logo::AniImg11()
{
	logoImg[0] = "                                                                            ";
	logoImg[1] = "                                                                            ";
	logoImg[2] = "                                                                            ";
	logoImg[3] = "                                                                            ";
	logoImg[4] = "                                                                            ";
	logoImg[5] = "                                                                            ";
	logoImg[6] = "                                                                            ";
	logoImg[7] = "                                                                            ";
	logoImg[8] = "                                                                            ";
	logoImg[9] = "                                                                            ";
	logoImg[10] = "                                                                            ";
	logoImg[11] = "                                                                            ";
	logoImg[12] = "                                                                            ";
	logoImg[13] = "                                                                            ";
	logoImg[14] = "                                                                            ";
	logoImg[15] = "                                                                            ";
	logoImg[16] = "                                                                            ";
	logoImg[17] = "                                                                            ";
	logoImg[18] = "                                                                            ";
	logoImg[19] = "                                                                            ";
	logoImg[20] = "                      ﹥﹥        ﹥﹥                                      ";
	logoImg[21] = "                     ﹥﹤﹥      ﹥﹤﹥                                     ";
	logoImg[22] = "                      ﹥  ﹥﹥﹥﹥  ﹥                                      ";
	logoImg[23] = "                      ﹥            ﹥                                      ";
	logoImg[24] = "                     ﹥   ∞ 今 ∞   ﹥                                     ";
}

void Logo::AniImg12()
{
	logoImg[0] = "                                                                            ";
	logoImg[1] = "                                                                            ";
	logoImg[2] = "                                                                            ";
	logoImg[3] = "                                                                            ";
	logoImg[4] = "                                                                            ";
	logoImg[5] = "                                                                            ";
	logoImg[6] = "                                                                            ";
	logoImg[7] = "                                                                            ";
	logoImg[8] = "                                                                            ";
	logoImg[9] = "                                                                            ";
	logoImg[10] = "                                                                            ";
	logoImg[11] = "                                                                            ";
	logoImg[12] = "                                                                            ";
	logoImg[13] = "                                                                            ";
	logoImg[14] = "                                                                            ";
	logoImg[15] = "                                                                            ";
	logoImg[16] = "                                                                            ";
	logoImg[17] = "                                                                            ";
	logoImg[18] = "                                                                            ";
	logoImg[19] = "                                                                            ";
	logoImg[20] = "                                                                            ";
	logoImg[21] = "                                                                            ";
	logoImg[22] = "                                                                            ";
	logoImg[23] = "式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式";
	logoImg[24] = "                                                                            ";
}

void Logo::AniImg13()
{
	logoImg[0] = "                                                                            ";
	logoImg[1] = "                                                                            ";
	logoImg[2] = "                                                                            ";
	logoImg[3] = "                                                                            ";
	logoImg[4] = "                                                                            ";
	logoImg[5] = "                                                                            ";
	logoImg[6] = "                                                                            ";
	logoImg[7] = "                                                                            ";
	logoImg[8] = "                                                                            ";
	logoImg[9] = "                                                                            ";
	logoImg[10] = "                                                                            ";
	logoImg[11] = "                                                                            ";
	logoImg[12] = "                                                                            ";
	logoImg[13] = "                                                                            ";
	logoImg[14] = "                                                                            ";
	logoImg[15] = "                                                                            ";
	logoImg[16] = "                                                                            ";
	logoImg[17] = "                                                                            ";
	logoImg[18] = "                                                                            ";
	logoImg[19] = "                                                                            ";
	logoImg[20] = "式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式";
	logoImg[21] = "                                                                            ";
	logoImg[22] = "                                                                            ";
	logoImg[23] = "                                                                            ";
	logoImg[24] = "                                                                            ";
}

void Logo::AniImg14()
{
	logoImg[0] = "                                                                            ";
	logoImg[1] = "                                                                            ";
	logoImg[2] = "                                                                            ";
	logoImg[3] = "                                                                            ";
	logoImg[4] = "                                                                            ";
	logoImg[5] = "                                                                            ";
	logoImg[6] = "                                                                            ";
	logoImg[7] = "                                                                            ";
	logoImg[8] = "                                                                            ";
	logoImg[9] = "                                                                            ";
	logoImg[10] = "                                                                            ";
	logoImg[11] = "                                                                            ";
	logoImg[12] = "                                                                            ";
	logoImg[13] = "                                                                            ";
	logoImg[14] = "                                                                            ";
	logoImg[15] = "                                                                            ";
	logoImg[16] = "                                                                            ";
	logoImg[17] = "式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式";
	logoImg[18] = "                                                                            ";
	logoImg[19] = "                                                                            ";
	logoImg[20] = "                                                                            ";
	logoImg[21] = "                                                                            ";
	logoImg[22] = "                                                                            ";
	logoImg[23] = "                                                                            ";
	logoImg[24] = "                                                                            ";
}

void Logo::AniImg15()
{
	logoImg[0] = "                                                                            ";
	logoImg[1] = "                                                                            ";
	logoImg[2] = "                                                                            ";
	logoImg[3] = "                                                                            ";
	logoImg[4] = "                                                                            ";
	logoImg[5] = "                                                                            ";
	logoImg[6] = "                                                                            ";
	logoImg[7] = "                                                                            ";
	logoImg[8] = "                                                                            ";
	logoImg[9] = "                                                                            ";
	logoImg[10] = "                                                                           ";
	logoImg[11] = "                                                                           ";
	logoImg[12] = "                                                                           ";
	logoImg[13] = "                                                                           ";
	logoImg[14] = "忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖";
	logoImg[15] = "                                                                            ";
	logoImg[16] = "                                                                            ";
	logoImg[17] = "                                                                            ";
	logoImg[18] = "                                                                            ";
	logoImg[19] = "                                                                            ";
	logoImg[20] = "                                                                            ";
	logoImg[21] = "                                                                            ";
	logoImg[22] = "                                                                            ";
	logoImg[23] = "                                                                            ";
	logoImg[24] = "                                                                            ";
}

void Logo::AniImg16()
{
	logoImg[0] = "                                                                            ";
	logoImg[1] = "                                                                            ";
	logoImg[2] = "                                                                            ";
	logoImg[3] = "                                                                            ";
	logoImg[4] = "                                                                            ";
	logoImg[5] = "                                                                            ";
	logoImg[6] = "                                                                            ";
	logoImg[7] = "                                                                            ";
	logoImg[8] = "                                                                            ";
	logoImg[9] = "                                                                            ";
	logoImg[10] = "                                                                            ";
	logoImg[11] = "  忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖  ";
	logoImg[12] = "  弛                                                                    弛  ";
	logoImg[13] = "  弛                                                                    弛  ";
	logoImg[14] = "   弛                                                                  弛   ";
	logoImg[15] = "    弛                                                                弛    ";
	logoImg[16] = "     弛                                                              弛     ";
	logoImg[17] = "      弛                                                            弛      ";
	logoImg[18] = "       弛                                                          弛       ";
	logoImg[19] = "        弛                                                        弛        ";
	logoImg[20] = "         弛                                                      弛         ";
	logoImg[21] = "          弛                                                    弛          ";
	logoImg[22] = "           弛                                                  弛           ";
	logoImg[23] = "            弛                                                弛            ";
	logoImg[24] = "             戌式式式式式式式式式式式式式式式式式式式式式式式戎             ";
}

void Logo::AniImg17()
{
	logoImg[0] = "                                                                            ";
	logoImg[1] = "                                                                            ";
	logoImg[2] = "                                                                            ";
	logoImg[3] = "                                                                            ";
	logoImg[4] = "                                                                            ";
	logoImg[5] = "                                                                            ";
	logoImg[6] = "                                                                            ";
	logoImg[7] = "                                                                            ";
	logoImg[8] = "            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖";
	logoImg[9] = "            弛                                                            弛";
	logoImg[10] = "            弛                                                            弛";
	logoImg[11] = "            弛                                                            弛";
	logoImg[12] = "            弛                                                            弛";
	logoImg[13] = "            弛                                                            弛";
	logoImg[14] = "             弛                                                          弛 ";
	logoImg[15] = "             弛                                                          弛 ";
	logoImg[16] = "             弛                                                          弛 ";
	logoImg[17] = "             弛                                                          弛 ";
	logoImg[18] = "             弛                                                          弛 ";
	logoImg[19] = "              弛                                                        弛  ";
	logoImg[20] = "               弛                                                      弛   ";
	logoImg[21] = "               戌式式式式式式式式式式式式式式式式式式式式式式式式式式式戎   ";
	logoImg[22] = "                      ﹥                  ﹥                                ";
	logoImg[23] = "                     ﹥                 ﹥                                  ";
	logoImg[24] = "                    ﹥                ﹥                                    ";
}

void Logo::AniImg18()
{
	logoImg[0] = "                                                                            ";
	logoImg[1] = "                                                                            ";
	logoImg[2] = "                                                                            ";
	logoImg[3] = "                                                                            ";
	logoImg[4] = "            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖";
	logoImg[5] = "            弛                                                            弛";
	logoImg[6] = "            弛                                                            弛";
	logoImg[7] = "            弛                                                            弛";
	logoImg[8] = "            弛                                                            弛";
	logoImg[9] = "            弛                                                            弛";
	logoImg[10] = "            弛                                                            弛";
	logoImg[11] = "            弛                                                            弛";
	logoImg[12] = "            弛                                                            弛";
	logoImg[13] = "            弛                                                            弛";
	logoImg[14] = "            弛                                                            弛";
	logoImg[15] = "            弛                                                            弛";
	logoImg[16] = "            弛                                                            弛";
	logoImg[17] = "            弛                                                            弛";
	logoImg[18] = "            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎";
	logoImg[19] = "                      ﹥            ﹥  ﹥﹥                                ";
	logoImg[20] = "                     ﹥   ≡ 今 ≒   ﹥﹥  ﹥                               ";
	logoImg[21] = "                      ﹥            ﹥﹥   ﹥                               ";
	logoImg[22] = "                      ﹥                  ﹥                                ";
	logoImg[23] = "                     ﹥                 ﹥                                  ";
	logoImg[24] = "                    ﹥                ﹥                                    ";
}

void Logo::AniImg19()
{
	logoImg[0] = "                                                                            ";
	logoImg[1] = "            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖";
	logoImg[2] = "            弛                                                            弛";
	logoImg[3] = "            弛                                                            弛";
	logoImg[4] = "            弛                                                            弛";
	logoImg[5] = "            弛                                                            弛";
	logoImg[6] = "            弛                                                            弛";
	logoImg[7] = "            弛                                                            弛";
	logoImg[8] = "            弛                                                            弛";
	logoImg[9] = "            弛                                                            弛";
	logoImg[10] = "            弛                                                            弛";
	logoImg[11] = "            弛                                                            弛";
	logoImg[12] = "            弛                                                            弛";
	logoImg[13] = "            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎";
	logoImg[14] = "                                         弛                                 ";
	logoImg[15] = "                                         弛                                 ";
	logoImg[16] = "                      ﹥﹥        ﹥﹥   弛                                 ";
	logoImg[17] = "                     ﹥﹤﹥      ﹥﹤﹥  弛                                 ";
	logoImg[18] = "                      ﹥  ﹥﹥﹥﹥  ﹥   弛                                 ";
	logoImg[19] = "                      ﹥            ﹥  ﹥﹥                                ";
	logoImg[20] = "                     ﹥   ≡ 今 ≒   ﹥﹥  ﹥                               ";
	logoImg[21] = "                      ﹥            ﹥﹥ 弛﹥                               ";
	logoImg[22] = "                      ﹥                  ﹥                                ";
	logoImg[23] = "                     ﹥                 ﹥                                  ";
	logoImg[24] = "                    ﹥                ﹥                                    ";
}

void Logo::AniImg20()
{
	logoImg[0] = "                                                                            ";
	logoImg[1] = "            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖";
	logoImg[2] = "            弛                                                            弛";
	logoImg[3] = "            弛       ﹥﹥﹥                                               弛";
	logoImg[4] = "            弛     ﹥                                                     弛";
	logoImg[5] = "            弛     ﹥   ﹥﹥                                              弛";
	logoImg[6] = "            弛       ﹥﹥﹥                                               弛";
	logoImg[7] = "            弛                                                            弛";
	logoImg[8] = "            弛                                                            弛";
	logoImg[9] = "            弛                                                            弛";
	logoImg[10] = "            弛                                                            弛";
	logoImg[11] = "            弛                                                            弛";
	logoImg[12] = "            弛                                                            弛";
	logoImg[13] = "            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎";
	logoImg[14] = "                                         弛                                 ";
	logoImg[15] = "                                         弛                                 ";
	logoImg[16] = "                      ﹥﹥        ﹥﹥   弛                                 ";
	logoImg[17] = "                     ﹥﹤﹥      ﹥﹤﹥  弛                                 ";
	logoImg[18] = "                      ﹥  ﹥﹥﹥﹥  ﹥   弛                                 ";
	logoImg[19] = "                      ﹥            ﹥  ﹥﹥                                ";
	logoImg[20] = "                     ﹥   ≡ 今 ≒   ﹥﹥  ﹥                               ";
	logoImg[21] = "                      ﹥            ﹥﹥ 弛﹥                               ";
	logoImg[22] = "                      ﹥                  ﹥                                ";
	logoImg[23] = "                     ﹥                 ﹥                                  ";
	logoImg[24] = "                    ﹥                ﹥                                    ";
}

void Logo::AniImg21()
{
	logoImg[0] = "                                                                            ";
	logoImg[1] = "            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖";
	logoImg[2] = "            弛                                                            弛";
	logoImg[3] = "            弛       ﹥﹥﹥                                               弛";
	logoImg[4] = "            弛     ﹥           ﹥﹥                                      弛";
	logoImg[5] = "            弛     ﹥   ﹥﹥   ﹥  ﹥                                     弛";
	logoImg[6] = "            弛       ﹥﹥﹥     ﹥﹥                                      弛";
	logoImg[7] = "            弛                                                            弛";
	logoImg[8] = "            弛                                                            弛";
	logoImg[9] = "            弛                                                            弛";
	logoImg[10] = "            弛                                                            弛";
	logoImg[11] = "            弛                                                            弛";
	logoImg[12] = "            弛                                                            弛";
	logoImg[13] = "            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎";
	logoImg[14] = "                                         弛                                 ";
	logoImg[15] = "                                         弛                                 ";
	logoImg[16] = "                      ﹥﹥        ﹥﹥   弛                                 ";
	logoImg[17] = "                     ﹥﹤﹥      ﹥﹤﹥  弛                                 ";
	logoImg[18] = "                      ﹥  ﹥﹥﹥﹥  ﹥   弛                                 ";
	logoImg[19] = "                      ﹥            ﹥  ﹥﹥                                ";
	logoImg[20] = "                     ﹥   ≡ 今 ≒   ﹥﹥  ﹥                               ";
	logoImg[21] = "                      ﹥            ﹥﹥ 弛﹥                               ";
	logoImg[22] = "                      ﹥                  ﹥                                ";
	logoImg[23] = "                     ﹥                 ﹥                                  ";
	logoImg[24] = "                    ﹥                ﹥                                    ";
}

void Logo::AniImg22()
{
	logoImg[0] = "                                                                            ";
	logoImg[1] = "            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖";
	logoImg[2] = "            弛                                                            弛";
	logoImg[3] = "            弛       ﹥﹥﹥                                               弛";
	logoImg[4] = "            弛     ﹥           ﹥﹥                                      弛";
	logoImg[5] = "            弛     ﹥   ﹥﹥   ﹥  ﹥                                     弛";
	logoImg[6] = "            弛       ﹥﹥﹥     ﹥﹥                                      弛";
	logoImg[7] = "            弛                                                            弛";
	logoImg[8] = "            弛        ﹥﹥﹥                                              弛";
	logoImg[9] = "            弛       ﹥    ﹥                                             弛";
	logoImg[10] = "            弛       ﹥    ﹥                                             弛";
	logoImg[11] = "            弛        ﹥﹥﹥                                              弛";
	logoImg[12] = "            弛                                                            弛";
	logoImg[13] = "            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎";
	logoImg[14] = "                                         弛                                 ";
	logoImg[15] = "                                         弛                                 ";
	logoImg[16] = "                      ﹥﹥        ﹥﹥   弛                                 ";
	logoImg[17] = "                     ﹥﹤﹥      ﹥﹤﹥  弛                                 ";
	logoImg[18] = "                      ﹥  ﹥﹥﹥﹥  ﹥   弛                                 ";
	logoImg[19] = "                      ﹥            ﹥  ﹥﹥                                ";
	logoImg[20] = "                     ﹥   ≡ 今 ≒   ﹥﹥  ﹥                               ";
	logoImg[21] = "                      ﹥            ﹥﹥ 弛﹥                               ";
	logoImg[22] = "                      ﹥                  ﹥                                ";
	logoImg[23] = "                     ﹥                 ﹥                                  ";
	logoImg[24] = "                    ﹥                ﹥                                    ";
}

void Logo::AniImg23()
{
	logoImg[0] = "                                                                            ";
	logoImg[1] = "            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖";
	logoImg[2] = "            弛                                                            弛";
	logoImg[3] = "            弛       ﹥﹥﹥                                               弛";
	logoImg[4] = "            弛     ﹥           ﹥﹥                                      弛";
	logoImg[5] = "            弛     ﹥   ﹥﹥   ﹥  ﹥                                     弛";
	logoImg[6] = "            弛       ﹥﹥﹥     ﹥﹥                                      弛";
	logoImg[7] = "            弛                                                            弛";
	logoImg[8] = "            弛        ﹥﹥﹥                                              弛";
	logoImg[9] = "            弛       ﹥    ﹥  ﹥   ﹥                                    弛";
	logoImg[10] = "            弛       ﹥    ﹥  ﹥   ﹥                                    弛";
	logoImg[11] = "            弛        ﹥﹥﹥    ﹥﹥﹥                                    弛";
	logoImg[12] = "            弛                                                            弛";
	logoImg[13] = "            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎";
	logoImg[14] = "                                         弛                                 ";
	logoImg[15] = "                                         弛                                 ";
	logoImg[16] = "                      ﹥﹥        ﹥﹥   弛                                 ";
	logoImg[17] = "                     ﹥﹤﹥      ﹥﹤﹥  弛                                 ";
	logoImg[18] = "                      ﹥  ﹥﹥﹥﹥  ﹥   弛                                 ";
	logoImg[19] = "                      ﹥            ﹥  ﹥﹥                                ";
	logoImg[20] = "                     ﹥   ≡ 今 ≒   ﹥﹥  ﹥                               ";
	logoImg[21] = "                      ﹥            ﹥﹥ 弛﹥                               ";
	logoImg[22] = "                      ﹥                  ﹥                                ";
	logoImg[23] = "                     ﹥                 ﹥                                  ";
	logoImg[24] = "                    ﹥                ﹥                                    ";
}

void Logo::AniImg24()
{
	logoImg[0] = "                                                                            ";
	logoImg[1] = "            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖";
	logoImg[2] = "            弛                                                            弛";
	logoImg[3] = "            弛       ﹥﹥﹥                                               弛";
	logoImg[4] = "            弛     ﹥           ﹥﹥                                      弛";
	logoImg[5] = "            弛     ﹥   ﹥﹥   ﹥  ﹥                                     弛";
	logoImg[6] = "            弛       ﹥﹥﹥     ﹥﹥                                      弛";
	logoImg[7] = "            弛                                                            弛";
	logoImg[8] = "            弛        ﹥﹥﹥              ﹥                              弛";
	logoImg[9] = "            弛       ﹥    ﹥  ﹥   ﹥  ﹥﹥﹥                            弛";
	logoImg[10] = "            弛       ﹥    ﹥  ﹥   ﹥    ﹥                              弛";
	logoImg[11] = "            弛        ﹥﹥﹥    ﹥﹥﹥    ﹥﹥                            弛";
	logoImg[12] = "            弛                                                            弛";
	logoImg[13] = "            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎";
	logoImg[14] = "                                         弛                                 ";
	logoImg[15] = "                                         弛                                 ";
	logoImg[16] = "                      ﹥﹥        ﹥﹥   弛                                 ";
	logoImg[17] = "                     ﹥﹤﹥      ﹥﹤﹥  弛                                 ";
	logoImg[18] = "                      ﹥  ﹥﹥﹥﹥  ﹥   弛                                 ";
	logoImg[19] = "                      ﹥            ﹥  ﹥﹥                                ";
	logoImg[20] = "                     ﹥   ≡ 今 ≒   ﹥﹥  ﹥                               ";
	logoImg[21] = "                      ﹥            ﹥﹥ 弛﹥                               ";
	logoImg[22] = "                      ﹥                  ﹥                                ";
	logoImg[23] = "                     ﹥                 ﹥                                  ";
	logoImg[24] = "                    ﹥                ﹥                                    ";
}

void Logo::AniImg25()
{
	logoImg[0] = "                                                                            ";
	logoImg[1] = "            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖";
	logoImg[2] = "            弛                                                            弛";
	logoImg[3] = "            弛       ﹥﹥﹥                                               弛";
	logoImg[4] = "            弛     ﹥           ﹥﹥                                      弛";
	logoImg[5] = "            弛     ﹥   ﹥﹥   ﹥  ﹥                                     弛";
	logoImg[6] = "            弛       ﹥﹥﹥     ﹥﹥                                      弛";
	logoImg[7] = "            弛                                                            弛";
	logoImg[8] = "            弛        ﹥﹥﹥              ﹥     ﹥﹥                     弛";
	logoImg[9] = "            弛       ﹥    ﹥  ﹥   ﹥  ﹥﹥﹥  ﹥                        弛";
	logoImg[10] = "            弛       ﹥    ﹥  ﹥   ﹥    ﹥     ﹥﹥                     弛";
	logoImg[11] = "            弛        ﹥﹥﹥    ﹥﹥﹥    ﹥﹥  ﹥﹥                      弛";
	logoImg[12] = "            弛                                                            弛";
	logoImg[13] = "            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎";
	logoImg[14] = "                                         弛                                 ";
	logoImg[15] = "                                         弛                                 ";
	logoImg[16] = "                      ﹥﹥        ﹥﹥   弛                                 ";
	logoImg[17] = "                     ﹥﹤﹥      ﹥﹤﹥  弛                                 ";
	logoImg[18] = "                      ﹥  ﹥﹥﹥﹥  ﹥   弛                                 ";
	logoImg[19] = "                      ﹥            ﹥  ﹥﹥                                ";
	logoImg[20] = "                     ﹥   ≡ 今 ≒   ﹥﹥  ﹥                               ";
	logoImg[21] = "                      ﹥            ﹥﹥ 弛﹥                               ";
	logoImg[22] = "                      ﹥                  ﹥                                ";
	logoImg[23] = "                     ﹥                 ﹥                                  ";
	logoImg[24] = "                    ﹥                ﹥                                    ";
}

void Logo::AniImg26()
{
	logoImg[0] = "                                                                            ";
	logoImg[1] = "            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖";
	logoImg[2] = "            弛                                                            弛";
	logoImg[3] = "            弛       ﹥﹥﹥                                               弛";
	logoImg[4] = "            弛     ﹥           ﹥﹥                                      弛";
	logoImg[5] = "            弛     ﹥   ﹥﹥   ﹥  ﹥                                     弛";
	logoImg[6] = "            弛       ﹥﹥﹥     ﹥﹥                                      弛";
	logoImg[7] = "            弛                                                            弛";
	logoImg[8] = "            弛        ﹥﹥﹥              ﹥     ﹥﹥  ﹥                 弛";
	logoImg[9] = "            弛       ﹥    ﹥  ﹥   ﹥  ﹥﹥﹥  ﹥                        弛";
	logoImg[10] = "            弛       ﹥    ﹥  ﹥   ﹥    ﹥     ﹥﹥  ﹥                 弛";
	logoImg[11] = "            弛        ﹥﹥﹥    ﹥﹥﹥    ﹥﹥  ﹥﹥   ﹥                 弛";
	logoImg[12] = "            弛                                                            弛";
	logoImg[13] = "            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎";
	logoImg[14] = "                                         弛                                 ";
	logoImg[15] = "                                         弛                                 ";
	logoImg[16] = "                      ﹥﹥        ﹥﹥   弛                                 ";
	logoImg[17] = "                     ﹥﹤﹥      ﹥﹤﹥  弛                                 ";
	logoImg[18] = "                      ﹥  ﹥﹥﹥﹥  ﹥   弛                                 ";
	logoImg[19] = "                      ﹥            ﹥  ﹥﹥                                ";
	logoImg[20] = "                     ﹥   ≡ 今 ≒   ﹥﹥  ﹥                               ";
	logoImg[21] = "                      ﹥            ﹥﹥ 弛﹥                               ";
	logoImg[22] = "                      ﹥                  ﹥                                ";
	logoImg[23] = "                     ﹥                 ﹥                                  ";
	logoImg[24] = "                    ﹥                ﹥                                    ";
}

void Logo::AniImg27()
{
	logoImg[0] = "                                                                            ";
	logoImg[1] = "            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖";
	logoImg[2] = "            弛                                                            弛";
	logoImg[3] = "            弛       ﹥﹥﹥                                               弛";
	logoImg[4] = "            弛     ﹥           ﹥﹥                                      弛";
	logoImg[5] = "            弛     ﹥   ﹥﹥   ﹥  ﹥                                     弛";
	logoImg[6] = "            弛       ﹥﹥﹥     ﹥﹥                                      弛";
	logoImg[7] = "            弛                                                            弛";
	logoImg[8] = "            弛        ﹥﹥﹥              ﹥     ﹥﹥  ﹥    ﹥           弛";
	logoImg[9] = "            弛       ﹥    ﹥  ﹥   ﹥  ﹥﹥﹥  ﹥           ﹥           弛";
	logoImg[10] = "            弛       ﹥    ﹥  ﹥   ﹥    ﹥     ﹥﹥  ﹥  ﹥﹥           弛";
	logoImg[11] = "            弛        ﹥﹥﹥    ﹥﹥﹥    ﹥﹥  ﹥﹥   ﹥  ﹥﹥           弛";
	logoImg[12] = "            弛                                                            弛";
	logoImg[13] = "            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎";
	logoImg[14] = "                                         弛                                 ";
	logoImg[15] = "                                         弛                                 ";
	logoImg[16] = "                      ﹥﹥        ﹥﹥   弛                                 ";
	logoImg[17] = "                     ﹥﹤﹥      ﹥﹤﹥  弛                                 ";
	logoImg[18] = "                      ﹥  ﹥﹥﹥﹥  ﹥   弛                                 ";
	logoImg[19] = "                      ﹥            ﹥  ﹥﹥                                ";
	logoImg[20] = "                     ﹥   ≡ 今 ≒   ﹥﹥  ﹥                               ";
	logoImg[21] = "                      ﹥            ﹥﹥ 弛﹥                               ";
	logoImg[22] = "                      ﹥                  ﹥                                ";
	logoImg[23] = "                     ﹥                 ﹥                                  ";
	logoImg[24] = "                    ﹥                ﹥                                    ";
}

void Logo::AniImg28()
{
	logoImg[0] = "                                                                            ";
	logoImg[1] = "            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖";
	logoImg[2] = "            弛                                                            弛";
	logoImg[3] = "            弛       ﹥﹥﹥                                               弛";
	logoImg[4] = "            弛     ﹥           ﹥﹥                                      弛";
	logoImg[5] = "            弛     ﹥   ﹥﹥   ﹥  ﹥                                     弛";
	logoImg[6] = "            弛       ﹥﹥﹥     ﹥﹥                                      弛";
	logoImg[7] = "            弛                                                            弛";
	logoImg[8] = "            弛        ﹥﹥﹥              ﹥     ﹥﹥  ﹥    ﹥    ﹥﹥   弛";
	logoImg[9] = "            弛       ﹥    ﹥  ﹥   ﹥  ﹥﹥﹥  ﹥           ﹥  ﹥﹥﹥﹥ 弛";
	logoImg[10] = "            弛       ﹥    ﹥  ﹥   ﹥    ﹥     ﹥﹥  ﹥  ﹥﹥  ﹥       弛";
	logoImg[11] = "            弛        ﹥﹥﹥    ﹥﹥﹥    ﹥﹥  ﹥﹥   ﹥  ﹥﹥   ﹥﹥﹥  弛";
	logoImg[12] = "            弛                                                            弛";
	logoImg[13] = "            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎";
	logoImg[14] = "                                         弛                                 ";
	logoImg[15] = "                                         弛                                 ";
	logoImg[16] = "                      ﹥﹥        ﹥﹥   弛                                 ";
	logoImg[17] = "                     ﹥﹤﹥      ﹥﹤﹥  弛                                 ";
	logoImg[18] = "                      ﹥  ﹥﹥﹥﹥  ﹥   弛                                 ";
	logoImg[19] = "                      ﹥            ﹥  ﹥﹥                                ";
	logoImg[20] = "                     ﹥   ≡ 今 ≒   ﹥﹥  ﹥                               ";
	logoImg[21] = "                      ﹥            ﹥﹥ 弛﹥                               ";
	logoImg[22] = "                      ﹥                  ﹥                                ";
	logoImg[23] = "                     ﹥                 ﹥                                  ";
	logoImg[24] = "                    ﹥                ﹥                                    ";
}

void Logo::AniImg29()
{
	logoImg[0] = "                                                                            ";
	logoImg[1] = "            忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖";
	logoImg[2] = "            弛                                                            弛";
	logoImg[3] = "            弛       ﹥﹥﹥                                               弛";
	logoImg[4] = "            弛     ﹥           ﹥﹥                                      弛";
	logoImg[5] = "            弛     ﹥   ﹥﹥   ﹥  ﹥                                     弛";
	logoImg[6] = "            弛       ﹥﹥﹥     ﹥﹥                                      弛";
	logoImg[7] = "            弛                                                            弛";
	logoImg[8] = "            弛        ﹥﹥﹥              ﹥     ﹥﹥  ﹥    ﹥    ﹥﹥   弛";
	logoImg[9] = "            弛       ﹥    ﹥  ﹥   ﹥  ﹥﹥﹥  ﹥           ﹥  ﹥﹥﹥﹥ 弛";
	logoImg[10] = "            弛       ﹥    ﹥  ﹥   ﹥    ﹥     ﹥﹥  ﹥  ﹥﹥  ﹥       弛";
	logoImg[11] = "            弛        ﹥﹥﹥    ﹥﹥﹥    ﹥﹥  ﹥﹥   ﹥  ﹥﹥   ﹥﹥﹥  弛";
	logoImg[12] = "            弛                                                            弛";
	logoImg[13] = "            戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎";
	logoImg[14] = "                                         弛                                 ";
	logoImg[15] = "                                         弛     ∞∞∞∞∞∞∞∞∞∞∞∞    ";
	logoImg[16] = "                      ﹥﹥        ﹥﹥   弛    ∞                      ∞   ";
	logoImg[17] = "                     ﹥﹤﹥      ﹥﹤﹥  弛    ∞ Enter 酈蒂 揚楝輿撮蹂∞   ";
	logoImg[18] = "                      ﹥  ﹥﹥﹥﹥  ﹥   弛    ∞                      ∞   ";
	logoImg[19] = "                      ﹥            ﹥  ﹥﹥    ∞∞∞∞∞∞∞∞∞∞∞∞    ";
	logoImg[20] = "                     ﹥   ≡ 今 ≒   ﹥﹥  ﹥ ∞∞                          ";
	logoImg[21] = "                      ﹥            ﹥﹥ 弛﹥                               ";
	logoImg[22] = "                      ﹥                  ﹥                                ";
	logoImg[23] = "                     ﹥                 ﹥                                  ";
	logoImg[24] = "                    ﹥                ﹥                                    ";
}

Logo::Logo()
{
	
}


Logo::~Logo()
{
}
