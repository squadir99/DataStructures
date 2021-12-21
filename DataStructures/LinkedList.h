/*
Sohail Quadir - 12/14/2021
This file contains the declarations for my linked list implementation
*/

struct Node {
	int data;
	struct Node* next;
};
typedef struct Node Node;

struct LinkedList {
	struct Node* head;
	struct Node* tail;
};
typedef struct LinkedList LinkedList;

void* ListConstructor(void); //This function will return to the user a linked list with head and tail node with data = 1;
void* ListDestructor(LinkedList* list); // This function should free all the memory used by a list given the lists head.

void* printList(LinkedList* list, Node* currNode); // This function prints all the data in the list.

void* addNode(LinkedList* list, Node n); //Adds a node to the end of the list

void pop(LinkedList* list); // Pops last element off list

void find(LinkedList* list, int data); //This function will search for a given value in the list
