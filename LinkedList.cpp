#include <iostream>
#include "LinkedList.h"

using namespace std;

//Default Constructor
//Post: Linked List will be built with one node where val = 0
template <class Type>
LinkedList<Type>::LinkedList() {}

//Constructor with one value parameter
//Post: Linked List will be built with one node including the val parameter
template <class Type>
LinkedList<Type>::LinkedList(Type val) {
	Node<Type>* newNode = new Node<Type>(val);

	head = newNode;
	tail = newNode;
}

//Constructor with an array as a parameter
//Post: Linked List will contain the contents of the array in the same order
template <class Type>
LinkedList<Type>::LinkedList(Type arr[], int size) {

	Node<Type>* newNode = new Node<Type>;
	head = newNode;
	tail = newNode;

	Node<Type>* current = head;

	for (int i = 0; i < size; i++) {
		current->val = arr[i];

		if (i != size - 1) {
			newNode = new Node<Type>;
			current->next = newNode;
			current = current->next;
		}
		else
			tail = current;
	}
}

//Inserts a node at the front of the linked list
//Post: A new node with the parameter will be inserted at the front of the linked list
template <class Type>
void LinkedList<Type>::insertFront(Type val) {
	Node<Type>* temp = head;

	head = new Node<Type>;
	head->val = val;
	head->next = temp;
}

//Prints the linked list
template <class Type>
void LinkedList<Type>::print() {
	Node<Type>* current = head;

	while (current) {
		cout << current->val << " ";
		current = current->next;
	}
	cout << endl;
}
