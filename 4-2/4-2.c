#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

void delete_middle(int* s, int** arr);

void main() {
	int N;
	scanf("%d", &N);
	//N���� ������ ������ �� �ִ� �޸𸮸� ���� �Ҵ�
	int* Np;
	Np = malloc(sizeof(int) * N);

	for (int i = 0; i < N; i++)
		scanf("%d", &Np[i]);
	
	//�迭�� ũ�� N�� ������ Np�� �ּҸ� �Ű������� �ѱ�
	delete_middle(&N, &Np);

	//�߾� ���� ������ �迭�� ���
	for (int i = 0; i < N; i++)
		printf("%d", Np[i]);
	
	// �޸� ����
	free(Np);
}

void delete_middle(int* s, int** arr) {
	// �߰����� �����ϹǷ� �迭�� ũ�Ⱑ 1 �پ���
	//ũ�Ⱑ 1 �پ�� �迭�� ���� �Ҵ�
	int nNewSize = *s - 1;
	int* temp;
	temp = malloc(sizeof(int) * nNewSize);
	int nNewIndex = 0;

	//�޸𸮸� �Ҵ��� �迭�� ������ �迭 ���� ������
	//�� �� �߰����� ������
	for (int i = 0; i <= *s; i++) {
		if (nNewIndex == *s / 2) {
			i++;
			temp[nNewIndex] = (*arr)[i];

		}
		else {
			temp[nNewIndex] = (*arr)[i];
		}
		nNewIndex++;
	}
	free(*arr);

	*arr = temp;
	*s = nNewSize;
}