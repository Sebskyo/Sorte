/*
 * Contains sorting algorithms
 */

#include <stdio.h>
#include <stdlib.h>

#include "sort.h"

void *sortBubble(int *unsorted, int size) {
	/*int isSorted = 1;
	int i;
	while(isSorted) {
		isSorted = 0;
		for(i = 1; i < size; i++) {
			if(unsorted[i] < unsorted[i-1]) {
				int tmp = unsorted[i-1];
				unsorted[i-1] = unsorted[i];
				unsorted[i] = tmp;
				isSorted = 1;
			}
		}
		printArr(unsorted, size);
		printf("\n\n");
	}*/
	/*int i, j;
	for(i = 0; i < size; i++) {
		for(j = i+1; j < size; j++) {
			if(unsorted[j] < unsorted[i]) {
				int tmp = unsorted[j];
				unsorted[j] = unsorted[i];
				unsorted[i] = tmp;
			}
		}
	}*/
	int i, t, s = 1;
	while(s) {
		s = 0;
		for (i = 1; i < size; i++) {
			if (unsorted[i] < unsorted[i - 1]) {
				t = unsorted[i];
				unsorted[i] = unsorted[i - 1];
				unsorted[i - 1] = t;
				s = 1;
			}
		}
	}
}

// returns 1 if true, 0 if false
int testSorted(int *arr, int size) {
	int i;
	for(i = 0; i < size; i++) {
		if(i < size-1 && arr[i+1] < arr[i]) {
			return 0;
		}
	}
	return 1;
}

void printArr(int *arr, int size) {
	int i;
	for(i = 0; i < size; i++) {
		printf("%d\n", *(arr+i));
	}
}