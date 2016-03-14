/*
 * This file implements the functions from list.h using the struct also defined in list.h
 * The functions are the functionality of the list itself as well as utilities.
 */

#include <stdio.h>
#include <stdlib.h>

#include "list.h"

struct Node *newNode(int val) {
	struct Node *node = (struct Node *) malloc(sizeof(struct Node));
	node->val = val;
	node->next = NULL;
	return node;
}
void add(struct Node *node, int val) {
	if(node->next != 0) {
		add(node->next, val);
	}
	else {
		struct Node *nextNode = newNode(val);
		node->next = nextNode;
	}
}

void toArr(int *arr, struct Node *node, int size) {
	int i = 0;
	// transfer elements to array
	while(node->next != 0) {
		arr[i] = node->val;
		node = node->next;
		i++;
	}
	arr[i] = node->val; // apparently the last value of the array would be the pointer to the previous node, but this fixes that
}

void printAll(struct Node *node) {
	printf("%d - %ld\n", node->val, (long)node->next);
	if(node->next != 0) {
		printAll(node->next);
	}
}
void printArr(int *arr, int size) {
	int i;
	for(i = 0; i < size; i++) {
		printf("%d\n", *(arr+i));
	}
}
