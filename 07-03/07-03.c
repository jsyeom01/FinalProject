#include <stdio.h>
#include <Windows.h>
#include <process.h>

CRITICAL_SECTION cs;
void print_num(int a) {
	while (1) {
		EnterCriticalSection(&cs);
		printf("%d��° �Լ� ����!\n", a);
		printf("�߿��� �۾� ��\n");
		printf("%d��° �Լ� ��!\n", a);
		LeaveCriticalSection(&cs);
		Sleep(1000);
	}
}

int main(void) {
	InitializeCriticalSection(&cs);
	HANDLE threads1 = _beginthreadex(NULL, 0, (_beginthreadex_proc_type)print_num, (void*)1, 0, NULL);
	HANDLE threads2 = _beginthreadex(NULL, 0, (_beginthreadex_proc_type)print_num, (void*)2, 0, NULL);
	WaitForSingleObject(threads1, INFINITE);
	DeleteCriticalSection(&cs);
	return 0;
}