#include <stdio.h>

int Add(int num1, int num2);
int Sub(int num1, int num2);

void main() {
	int nResult;
	int(*fp)(int, int);
	printf("100�� 200�� ���� ����� ���� ����\n");

	fp = Add;
	nResult = fp(100, 200);
	printf("���� ���� ���: %d\n", nResult);

	fp = Sub;
	nResult = fp(100, 200);
	printf("���� ���� ���: %d\n", nResult);

}
int Add(int num1, int num2) {
	printf("\n[Add() �Լ� ����]\n");
	return num1 + num2;
}

int Sub(int num1, int num2) {
	printf("\n[Sub() �Լ� ����]\n");
	return num1 - num2;
}