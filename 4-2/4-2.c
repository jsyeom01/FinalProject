#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

void delete_middle(int* s, int** arr);

void main() {
	int N;
	scanf("%d", &N);
	//N개의 정수를 저장할 수 있는 메모리를 동적 할당
	int* Np;
	Np = malloc(sizeof(int) * N);

	for (int i = 0; i < N; i++)
		scanf("%d", &Np[i]);
	
	//배열의 크기 N과 포인터 Np의 주소를 매개변수로 넘김
	delete_middle(&N, &Np);

	//중앙 값이 삭제된 배열을 출력
	for (int i = 0; i < N; i++)
		printf("%d", Np[i]);
	
	// 메모리 해제
	free(Np);
}

void delete_middle(int* s, int** arr) {
	// 중간값을 삭제하므로 배열의 크기가 1 줄어든다
	//크기가 1 줄어든 배열을 새로 할당
	int nNewSize = *s - 1;
	int* temp;
	temp = malloc(sizeof(int) * nNewSize);
	int nNewIndex = 0;

	//메모리를 할당한 배열에 기존의 배열 값을 복사함
	//이 때 중간값은 제외함
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