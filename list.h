#ifndef SORTE_LIST_H
#define SORTE_LIST_H

struct Node {
	int val;
	struct Node *next;
};

struct Node *newNode(int val);
void add(struct Node *node, int val);
void toArr(int *arr, struct Node *node, int size);
void printAll(struct Node *node);
void printArr(int *arr, int size);

#endif //SORTE_LIST_H
