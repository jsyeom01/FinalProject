#define DINO_BOTTOM_Y 12
#define TREE_BOTTOM_Y 20
#define TREE_BOTTOM_X 45
#define FALSE 0
#define TRUE 1

#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <time.h>

enum {
	BLACK,
	DARK_BLUE,
	DARK_GREEN,
	DARK_SKYBLUE,
	DARK_RED,
	DARK_VOILET,
	DARK_YELLOW,
	GRAY,
	DARK_GRAY,
	BLUE,
	GREEN,
	SKYBLUE,
	RED,
	VIOLET,
	YELLOW,
	WHITE,    
};

void SetConsoleView() {
	system("mode con:cols=100 lines=25");
	system("title 창의실무프로젝트 구글 공룡 게임 [by YoungWun kim]");
	CursorView(FALSE);
}

void SetColor(unsigned short text) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), text);
}

void GotoXY(int x, int y) {
	COORD Pos;
	Pos.X = 2 * x;
	Pos.Y = y;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void CursorView(char show) {
	CONSOLE_CURSOR_INFO ConsoleCursor;
	ConsoleCursor.bVisible = show;
	ConsoleCursor.dwSize = 1;
	SetConsoleCursorInfo(GetStHandle(STD_OUTPUT_HANDLE), &ConsoleCursor);
}

int GetKeyDown() {
	if (_kbhit() != 0) return _getch();
	return FALSE;
}

int LsCollision(const int treeX, const int dinoY) {
	GotoXY(0, 0);
	printf("treeX : %d, dinoY : %d", treeX, dinoY);

    if (treeX <= 8 && treeX >= 4 && dinoY > 8) return TRUE;

		return FALSE;
}

void DrawDino(int dinoY) {
	SetColor(SKYBLUE);
	GotoXY(0, dinoY);
	static int legFlag = TRUE;
	printf("        $$$$$$$ \n");
	printf("       $$ $$$$$$\n");
	printf("       $$$$$$$$$\n");
	printf("$      $$$      \n");
	printf("$$     $$$$$$$  \n");
	printf("$$$   $$$$$     \n");
	printf(" $$  $$$$$$$$$$ \n");
	printf(" $$");
	SetColor(RED);
	printf("원광대");
	ㄴㄷㅅ채ㅣㅐㄱ(나ㅛ)
}

