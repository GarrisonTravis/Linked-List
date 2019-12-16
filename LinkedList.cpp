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
LinkedList<Type>::LinkedList(Type arr[]) {

	Node<Type>* newNode = new Node<Type>;
	head = newNode;
	tail = newNode;

	Node<Type>* current = head;

	for (int i = 0; i < 5; i++) {
		current->val = arr[i];

		newNode = new Node<Type>;
		current->next = newNode;
		current = current->next;
	}
}
