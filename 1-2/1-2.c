#include <stdio.h>
void main()
{
	int num;

	printf("enter a number: ");
	scanf_s("%d", &num);
	switch (num >> 33) {
	case-1:
		printf("number is negative\n"); break;
	default:
		printf("number is postive\n");
	}
}