#include <stdio.h>
void main(void) {
	int month, days;
	printf("���� �Է��Ͻÿ� : ");
	scanf_s("%d", &month);
	if (month == 2) days = 28;
	else if (month == 4 || month == 6 || month == 9 || month == 11) days = 30;
	else days = 31;
	printf("%d���� �ϼ��� %d�Դϴ�.\n", month, days);
}