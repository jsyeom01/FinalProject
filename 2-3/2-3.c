#include <stdio.h>

void main()
{
	int i = 1, s = 0;
	do {
		s = s + i;
		i++;
	} while (i <= 50);
	printf("Sum from 1 to 50 = %d\n", s);
}