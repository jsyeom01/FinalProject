#include <stdio.h>

struct vector {
	float x;
	float y;
};
struct vector get_vector_sum(struct vector a, struct vector b);

void main(void) {
	struct vector a = { 2.0, 3.0 };
	struct vector b = { 5.0, 6.0 };
	struct vector sum;

	sum = get_vector_sum(a, b);
	printf("������ ���� (%.2f, %.2f)�Դϴ�.\n",
		sum.x, sum.y);
}

struct vector get_vector_sum(struct vector a, struct vector b) {
	struct vector result;

	result.x = a.x + b.x;
	result.y = a.y + b.y;

	return result;
}