/*
Sohail Quadir - 12/14/2021
In this file, I use the data structures to perform operations using the data structures that I have built
*/
#include <stdio.h>
#include "LinkedList.h"
#include "BST.h"

int main(int argc, const char* argv[]) {
	/*
	LinkedList* test = ListConstructor();

	printList(test, test->head);
	printf("\n");

	Node newNode;
	newNode.data = 7;
	newNode.next = NULL;

	addNode(test, newNode);

	Node lastNode;
	lastNode.data = 13;
	lastNode.next = NULL;

	addNode(test, lastNode);

	find(test, 13);

	pop(test);

	find(test, 12);

	ListDestructor(test);
	*/

	TreeNode* test = TreeConstructor();
	pushToTree(test, -3);
	pushToTree(test, 5);
	pushToTree(test, 8);
	printTree(test);

	fprintf(stdout, "Main file ends\n");
	return 0;
}