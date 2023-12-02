#include <stdio.h>

struct student {
	int number;
	char name[10];
	double grade;
	struct student* next;
};

void main(void) {
	struct student s1 = { 20231111, "Kim", 4.3, NULL };
	struct student s2 = { 20232222, "Park", 3.7, NULL };
	struct student* first = NULL;
	struct student* current = NULL;

	first = &s1;
	s1.next = &s2;
	s2.next = NULL;

	current = first;
	while (current != NULL) {
		printf("�л��� ��ȣ : %d.\t �̸� : %s.\t ���� : %.2f\n",
			current->number, current->name, current->grade);
		current = current->next;
	}
}