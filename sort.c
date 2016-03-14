/*
 * Contains sorting algorithms
 */

#include <stdio.h>
#include <stdlib.h>

#include "sort.h"

void sortBubble(int *arr, int size) {
	int i, t, s = 1; // i:counter, t:tmp, s:sorted (0:false, 1:true)
	while(s) {
		s = 0;
		for (i = 1; i < size; i++) {
			if (arr[i] < arr[i - 1]) {
				t = arr[i];
				arr[i] = arr[i - 1];
				arr[i - 1] = t;
				s = 1;
			}
		}
	}
}
