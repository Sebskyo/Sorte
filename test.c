/*
 * Used entirely for testing - as in the program itself and generally for getting to know C
 */

#include <stdio.h>
#include <stdlib.h>

#include "list.h"
#include "sort.h"

int main(void) {

	/*struct Node *node = newNode(10);
	add(node, 5);
	add(node, 7);
	add(node, 98);
	add(node, 1);
	add(node, 50);
	printAll(node);

	int *arr = toArr(node);
	sortBubble(arr, 6);
	int yes = testSorted(arr, 6);
	printf("sorted: %d\n", yes);
	printArr(arr, 6);*/

	// 5, 1, 11, 52, 2
	/*int test[4] = {5, 3, 7, 10};
	printf("testsorted: %d\n\n", testSorted(test, 4));

	int i;
	for(i = 0; i < 4; i++) {
		if(i < 4-1 && test[i+1] < test[i]) {
			int tmpI = test[i];
			int tmpI1 = test[i+1];
			test[i] = tmpI1;
			test[i+1] = tmpI;
		}
	}
	printf("testsorted: %d\n", testSorted(test, 4));
	for(i = 0; i < 4; i++) {
		printf("%d\n", test[i]);
	}*/
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
	//printAll(root);
	int *arr = toArr(root);
	printArr(arr, count);
	sortBubble(arr,count);

	return 0;
}