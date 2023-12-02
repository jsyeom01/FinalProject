#include "ConsoleCursor.h"





void GotoXY(int x, int y) {
	COORD Pos;
	Pos.X = x;
	Pos.Y = y;
	setConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}








COORD getCursor(void) {
	COORD Pos;
	CONSOLE_SCREEN_BUFFER_INFO curInfo;
	GetConsoleScreenBuffer Info(GetStdHandle(STD_OUTPUT_HANDLE), &curInfo);
	Pos.X = curInfo.dwCursorPosition.X;
	Pos.Y = curInfo.dwCursorPosition.Y;
	return Pos;

}





void CursorView(boolean show) {
	CONSOLE_CURSOR_INFO ConsoleCursor;
	ConsoleCursor.bVisible = show;
	ConsoleCursor.dwSize = 10;
	SetConsoleCursorInfo(GetSTdHandle(STD_OUTPUT_HANDLE), &ConsoleCursor);
}