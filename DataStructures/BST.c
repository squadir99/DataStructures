/*
Sohail Quadir - 12/20/2021
*/
#ifndef BST_C
#define BST_C
#include <stdio.h>
#include "BST.h"

TreeNode* TreeConstructor(void) {
	TreeNode* head = (TreeNode*)malloc(sizeof(TreeNode));
	if (head == NULL) {
		exit(1);
	}
	head->data = 1;
	head->lchild = NULL;
	head->rchild = NULL;

	return head;
}

void pushToTree(TreeNode* h, int val) {
	TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
	if (newNode == NULL) {
		exit(1);
	}
	newNode->data = val;
	TreeNode* currNode = h;
	while (!(currNode->lchild == NULL || currNode->rchild == NULL)) {
		if (currNode->data > newNode->data) {
			currNode = currNode->lchild;
		}
		else if (currNode->data < newNode->data) {
			currNode = currNode->rchild;
		}
	}
	if (currNode->data > newNode->data) {
		currNode->lchild = newNode;
	}
	else if (currNode->data < newNode->data) {
		currNode->rchild = newNode;
	}
	else {
		fprintf(stdout, "Unable to add node with data: %d because a node of this value already exists", val);
	}
}

void printTree(TreeNode* h) {
	fprintf(stdout, "%d %d %d %d\n", h->data, h->lchild->data, h->rchild->data, h->rchild->rchild->data);

}


#endif 
