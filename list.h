#ifndef SORTE_LIST_H
#define SORTE_LIST_H

struct Node;
struct Node {
	int val;
	struct Node *next;
};

struct Node *newNode(int val);
void add(struct Node *node, int val);
void printAll(struct Node *node);
int *toArr(struct Node *node);

#endif //SORTE_LIST_H
