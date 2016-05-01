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
			// If current element is less than previous element, swap them
			if (arr[i] < arr[i - 1]) {
				t = arr[i];
				arr[i] = arr[i - 1];
				arr[i - 1] = t;
				s = 1;
			}
		}
	}
}

void sortSelect(int *arr, int size) {
	int i; // counter
	for(i = 0; i < size-1; i++) {
		int *e, *m; // e: current element, m: either smallest element proceeding e or the same as e.
		e = m = &(arr[i]); // setting e and m
		int j; // another counter
		for(j = i; j < size; j++) {
			if(arr[j] < *m) m = &(arr[j]); // if an element less than m is found, set m to that element
		}
		// swap e and m
		int t = *e;
		*e = *m;
		*m = t;
	}
}
