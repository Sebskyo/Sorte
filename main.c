/*
 * Sorte
 *
 * Sorte (just pronounced "sort") is a sorting program implementing a few different sorting algorithms.
 * Sorte takes a list of integers from stdin, sorts them, and outputs them to stdout.
 * Sorte does not feature any file handling since you can do this with pretty much any UNIX shell (ie bash).
 * Sorte is meant to be piped into Plotte, a GUI plotting program in Java.
 *
 * Author of this and all other files in this project: Sebastian Vikkelsø Elleholm
 *
 * This file and all other files in this project are licensed with GPL 3.0, see the README and LICENSE files for more information.
 */

// Don't know if these will be used, but it's good to have them
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "list.h"
#include "sort.h"

int main(int argc, char **argv) {
	int sorter = 0; // Chosen sorting algorithm, 0=bubble, 1=select
	// CLI argument parsing, --help, --version and -s <algorithm>
	if(argc == 2) {
		if(strcmp("--help", argv[1]) == 0) {
			printf("sorte [options]\n\n");
			printf("--help\n");
			printf("\tShow this help message.\n\n");
			printf("--version\n");
			printf("\tShow version number.\n\n");
			printf("-s [algorithm]\n");
			printf("\t[algorithm] can either be \"bubble\" or \"select\".\n\n");
			printf("If any arguments are invalid, default (bubble) will be used.\n\n");

			return 0;
		}
		if(strcmp("--version", argv[1]) == 0) {
			printf("1.0\n");

			return 0;
		}
	}
	if(argc >= 3 && strcmp("-s", argv[1]) == 0) {
		sorter = strcmp("select", argv[2]) == 0 ? 1 : 0;
	}

	// Getting ready to read from stdin
	int val, count = 0;
	char buf[40];
	struct Node *node = NULL;
	struct Node *root = NULL;
	// Reading from stdin, if a wrong input is given a segfault happens and that's fine - I'd have it abort anyway.
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

	// Converting list to array
	node = root;
	int *arr = (int *) malloc(count*4);
	toArr(arr, node, count);

	// Sorting
	if(sorter == 1) sortSelect(arr, count);
	else sortBubble(arr, count);

	// Printing
	printArr(arr, count);

	return 0;
}
