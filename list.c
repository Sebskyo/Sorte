/*
 * This file implements the functions from list.h using the struct also defined in list.h
 * The functions are the functionality of the list itself as well as utilities.
 */

#include <stdio.h>
#include <stdlib.h>

#include "list.h"

// Creating a new list
struct Node *newNode(int val) {
	struct Node *node = (struct Node *) malloc(sizeof(struct Node));
	node->val = val;
	node->next = NULL;
	return node;
}
// Adding a value to the given list - recursive implementation
void add(struct Node *node, int val) {
	// If the next node isn't empty, call this function with the next node as node parameter instead.
	if(node->next != 0) {
		add(node->next, val);
	}
	// Append a new node with the given value
	else {
		struct Node *nextNode = newNode(val);
		node->next = nextNode;
	}
}

// Convert a list to and array
void toArr(int *arr, struct Node *node, int size) {
	int i = 0;
	// transfer elements to array
	while(node->next != 0) {
		arr[i] = node->val;
		node = node->next;
		i++;
	}
	arr[i] = node->val; // the last value of the array would be the pointer to the previous node, but this fixes that
}

// Print a list - prints both pointer to next node and current node's value. Used purely for debugging
void printAll(struct Node *node) {
	printf("%d - %ld\n", node->val, (long)node->next);
	if(node->next != 0) {
		printAll(node->next);
	}
}
// Print the values of an array
void printArr(int *arr, int size) {
	int i;
	for(i = 0; i < size; i++) {
		printf("%d\n", *(arr+i));
	}
}
