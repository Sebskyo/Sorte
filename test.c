/*
 * Used entirely for testing - as in the program itself and generally for getting to know C
 */

#include <stdio.h>
#include <stdlib.h>

#include "list.h"
#include "sort.h"

int main(void) {
	int val, count = 0;
	char buf[40];
	struct Node *node = NULL;
	struct Node *root = NULL;
	while (fgets(buf, sizeof buf, stdin) != NULL) {
		if (sscanf(buf, "%d", &val) != 1) break;
		if(node == NULL) {
			node = newNode(val);
			root = node;
		}
		else {
			add(node, val);
			node = node->next;
		}
		count++;
	}
	node = root;
	int *arr = (int *) malloc(count*4);
	toArr(arr, node, count);
	sortBubble(arr, count);
	printArr(arr, count);

	return 0;
}
