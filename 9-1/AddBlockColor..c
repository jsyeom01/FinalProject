#include "AddBlockColor.h"
#include "Screen.h"

void colorRetention(int colorType) {
	switch (colorType) {
	case 0:
		textcolor(BLUE); break;
	case 1:
		textcolor(GREEN); break;
	case 2:
		textcolor(SKYBLUE); break;
	case 3:
		textcolor(RED); break;
	case 4:
		textcolor(VIOLET); break;
	case 5:
		textcolor(YELLOW); break;
	case 6:
		textcolor(GRAY); break;
	}
	printf("");
	textcolor(WHITE);

}

void addCurrentBlockColor() {
	switch (curShape) {
	case 0:
		textColor(BLUE); break;
	case1:
		textcolor(GREEN); break;
	case2:
		textcolor(SKYBLUE); break;
	case3:
		textcolor(RED); break;
	case4:
		textcolor(VIOLET); break;
	case5:
		textcolor(YELLOW); break;
	case6:
		textcolor(GRAY); break;
	}
	printf("");
	textcolor(WHITE);
}
void prevAddBlockColor() {
	switch (curShape) {
	case 0:
		textcolor(BLUE); break;
	case 1:
		textcolor(GREEN); break;
	case 2:
		textcolor(SKYBLUE); break;
	case 3:
		textcolor(RED); break;
	case 4:
		textcolor(VIOLET); break;
	case 5:
		textcolor(YELLOW); break;
	case 6:
		textcolor(GRAY); break;
	}
	printf("");
	textcolor(WHITE);
}