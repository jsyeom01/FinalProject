#pragma warning(disable:4996)
#include <stdio.h>

void main() {
	char* ps;
	char st[1] = { 0 };
	ps = st;
	printf("문자열 입력 (10바이트 이내) : _________\b\b\b\b\b\b\b\b\b\b");
	scanf("%s", st, sizeof(st));
	for (int i = 0; i < 10; i++) {
		printf("* (ps + %d : %c\n", i, *(ps + i));
	}
}