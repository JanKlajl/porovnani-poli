#include <stdio.h>

void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d, ", arr[i]);
	}
	printf("\n");
	printf("\n");
}

void prohodit(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(int arr[], int size) {
	for (int j = 0; j < size - 1; j++) {
		for (int i = 0; i < size - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				prohodit(&arr[i], &arr[i + 1]);
			}
		}
	}
}


int main() {
	int pole1[] = { 6, 1, 9, 2, 5 };
	int pole2[] = { 1, 7, 8 ,3, 2 };

	int pocet1 = sizeof(pole1) / sizeof(pole1[0]);
	int pocet2 = sizeof(pole2) / sizeof(pole2[0]);

	bubbleSort(pole1, pocet1);
	bubbleSort(pole2, pocet2);

	printf("V obouch polich: ");
	for (int i = 0; i < pocet1; i++) {
		for (int j = 0; j < pocet2; j++) {
			if (pole1[i] == pole2[j]) printf("%d, ", pole1[i]);
		}
	}
}