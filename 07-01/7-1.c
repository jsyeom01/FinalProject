#include <stdio.h>
#include <Windows.h>
#include <process.h>

int func1() {
	while (1) {
		printf("func1\n");
		Sleep(1000);
	}
	return 1;
}
int func2() {
	while (1) {
		printf("func2\n");
		Sleep(10000);
	}
	return 1;
}
int main(void) {
	_beginthreadex(NULL, 0, (_beginthreadex_proc_type)func1, NULL, 0, NULL);
	_beginthreadex(NULL, 0, (_beginthreadex_proc_type)func2, NULL, 0, NULL);

	Sleep(5000);
}