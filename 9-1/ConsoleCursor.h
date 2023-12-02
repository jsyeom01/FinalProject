#pragma once

#include <Windows.h>

COORD getCursor(void);
void GotoXY(int x, int y);
void cursorView(boolean show);