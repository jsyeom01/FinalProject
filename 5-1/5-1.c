#include <stdio.h>

int Add(int num1, int num2);
int Sub(int num1, int num2);

void main() {
	int nResult;
	int(*fp)(int, int);
	printf("100°ú 200ÀÇ µ¡¼À ¿¬»ê°ú »¬¼À ¿¬»ê\n");

	fp = Add;
	nResult = fp(100, 200);
	printf("µ¡¼À ¿¬»ê °á°ú: %d\n", nResult);

	fp = Sub;
	nResult = fp(100, 200);
	printf("»¬¼À ¿¬»ê °á°ú: %d\n", nResult);

}
int Add(int num1, int num2) {
	printf("\n[Add() ÇÔ¼ö ¿µ¿ª]\n");
	return num1 + num2;
}

int Sub(int num1, int num2) {
	printf("\n[Sub() ÇÔ¼ö ¿µ¿ª]\n");
	return num1 - num2;
}