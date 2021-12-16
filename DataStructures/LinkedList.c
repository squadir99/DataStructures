/*
Sohail Quadir - 12/14/2021
This file contains the definitions to my linked list implemenation
*/
#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

void* ListConstructor(void) {
	// To create a new list with 1 node, first lets create the node.
	Node* h = (Node*)malloc(sizeof(Node));
	if (h) {
		h->data = 1;
		h->next = NULL;
	}
	else { //We have failed to allocate memory successfully.
		free(h);
		h = NULL;
		exit(1);
	}
	LinkedList* list = (LinkedList*)malloc(sizeof(LinkedList));
	if (!list) {
		free(list);
		list = NULL;
		exit(1);
	}
	list->head = h;
	list->tail = h;

	return (void*)list;
}


void* ListDestructor(LinkedList* list) {
	while (list->head->next != NULL) {
		Node* nextNode = list->head->next;
		Node* currNode = list->head;

		free(currNode);
		currNode = NULL;

		list->head = nextNode;
	}
	free(list->head);
	list->head = NULL;

}

void* printList(LinkedList* list, Node* currNode) {
	if (list->head == list->tail) {
		printf("Head --> %d <-- Tail.", list->head->data, list->tail->data);
	}
	else {
		while (currNode->next != NULL) {
			if (currNode == list->head) {
				printf("Head: ");
			}
			printf("%d ", currNode->data);
			if (currNode->next != NULL) {
				printf("--> ");
			}
			currNode = currNode->next;
		}
		//Need to print last Node
		printf("%d ", list->tail->data);
		printf("<-- Tail.");
	}
}

void* addNode(LinkedList* list, Node n) {
	Node* nodeToAdd = (Node*)malloc(sizeof(Node));
	if (nodeToAdd == NULL) {
		free(nodeToAdd);
		nodeToAdd = NULL;
		exit(1);
	}
	else {
		nodeToAdd->data = n.data;
		nodeToAdd->next = NULL;
		list->tail->next = nodeToAdd;
		list->tail = nodeToAdd;
	}
}

void pop(LinkedList* list) {
	// 1 --> 3 --> 7 --> NULL
	Node* temp = list->head;
	while (temp->next->next != NULL) {
		temp = temp->next;
	}
	// Temp is now the second to last element (our new tail).

	free(temp->next);
	temp->next = NULL;
	list->tail = temp;
}