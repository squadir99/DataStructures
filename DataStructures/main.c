/*
Sohail Quadir - 12/14/2021
In this file, I use the data structures to perform operations using the data structures that I have built
*/
#include <stdio.h>
#include "LinkedList.h"

int main(int argc, const char* argv[]) {

	LinkedList* test = ListConstructor();

	printList(test, test->head);
	printf("\n");

	Node newNode;
	newNode.data = 7;
	newNode.next = NULL;

	addNode(test, newNode);

	printList(test, test->head);
	printf("\n");

	Node lastNode;
	lastNode.data = 13;
	lastNode.next = NULL;

	addNode(test, lastNode);

	printList(test, test->head);
	printf("\n");

	pop(test);

	printList(test, test->head);
	printf("\n");

	ListDestructor(test);

	fprintf(stdout, "Main file ends\n");
	return 0;
}