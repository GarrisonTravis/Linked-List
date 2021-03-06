#include <iostream>
#include "LinkedList.h"

using namespace std;

//Default Constructor
//Post: Linked List will be built with one node where val = 0
template <class Type>
LinkedList<Type>::LinkedList() : head(NULL), tail(NULL) {}

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

//Copy Constructor
template <class Type>
LinkedList<Type>::LinkedList(const LinkedList<Type>& ll) {

	cout << "Copy Constructor Called ..." << endl;
	if (ll.head) {
		Node<Type>* currentOld = ll.head;
		Node<Type>* currentNew = new Node<Type>;
		head = currentNew;
		tail = currentNew;
		currentNew->val = currentOld->val;

		currentOld = currentOld->next;
		while (currentOld) {
			currentNew->next = new Node<Type>;
			currentNew = currentNew->next;
			currentNew->val = currentOld->val;
			currentOld = currentOld->next;
		}
		tail = currentNew;
	}
}

//Destructor
template <class Type>
LinkedList<Type>::~LinkedList() {
	LinkedList<Type>::clear();
}

//Returns head value
template <class Type>
Type LinkedList<Type>::getHead() {
	return head->val;
}

//Returns tail value
template <class Type>
Type LinkedList<Type>::getTail() {
	return tail->val;
}

//Inserts a node at the front of the linked list
//Post: A new node with the parameter will be inserted at the front of the linked list
template <class Type>
void LinkedList<Type>::insertFront(Type val) {

	//Empty List
	if (head == NULL) {
		head = new Node<Type>(val);
		tail = head;
	}
	//1 Node List
	else if (head->next == NULL) {
		head = new Node<Type>(val);
		head->next = tail;
	}
	//More Than 1 Node List
	else {
		Node<Type>* temp = head;
		head = new Node<Type>(val);
		head->next = temp;
	}
}

//Inserts a node at the end of the linked list
//Post: Linked List will contain the val at the end of the list
template <class Type>
void LinkedList<Type>::insertBack(Type val) {
	Node<Type>* newNode = new Node<Type>;

	//Empty List
	if (head == NULL) {
		head = newNode;
		head->val = val;
		tail = newNode;
	}
	//1 Node List
	else if (head->next == NULL) {
		head->next = newNode;
		tail = newNode;
		newNode->val = val;
	}
	//More Than 1 Node List
	else {
		tail->next = newNode;
		tail = newNode;
		tail->val = val;
	}
}

//Inserts a node after a certain index
//If index is out of range, the node will be added at the end of the list
//Post: Linked List will contain the new val after the given index
template <class Type>
void LinkedList<Type>::insertAfter(Type val, int index) {
	Node<Type>* newNode = new Node<Type>(val);

	if (head == NULL) {
		head = newNode;
		tail = newNode;
	}
	else {
		Node<Type>* current = head->next;
		Node<Type>* trail = head;
		int i = 0;

		while (current && i < index) {
			i++;
			current = current->next;
			trail = trail->next;
		}

		trail->next = newNode;
		newNode->next = current;

		if (current == NULL)
			tail = newNode;
	}
}

//Inserts a node before the given index
//If the index is out of range, the val will be inserted at the end of the list
//Post: Linked List will contain the new val before the index
template <class Type>
void LinkedList<Type>::insertBefore(Type val, int index) {
	Node<Type>* newNode = new Node<Type>(val);

	if (head == NULL) {
		head = newNode;
		tail = newNode;
	}
	else {
		if (index == 0) {
			newNode->next = head;
			head = newNode;
		}
		else {
			Node<Type>* current = head->next;
			Node<Type>* trail = head;
			int i = 1;

			while (current && i < index) {
				current = current->next;
				trail = trail->next;
				i++;
			}

			trail->next = newNode;
			newNode->next = current;

			if (current == NULL)
				tail = newNode;
		}
	}
}

//Deletes all instances of the val from the linked list
//If val doesn't exist in the list, then nothing is deleted
//Post: The linked list doesn't contain any instances of val
template <class Type>
void LinkedList<Type>::deleteValue(Type val) {
	if (head == NULL)
		return;
	
	Node<Type>* current = head;
	Node<Type>* trail = NULL;

	while (current) {
		if (current->val == val) {
			//Deletes node at front of the list
			if (current == head) {
				head = current->next;
				delete current;
				current = head;
			}
			//Deletes node at end of the list
			else if (current == tail) {
				tail = trail;
				tail->next = NULL;
				delete current;
				current = NULL;
			}
			//Deletes node in the middle of the list
			else {
				trail->next = current->next;
				delete current;
				current = trail->next;
			}
		}
		else {
			trail = current;
			current = current->next;
		}
	}
}

//Deletes every node in the linked list
//Post: Empty list
template <class Type>
void LinkedList<Type>::clear() {
	Node<Type>* current = head;

	while (head) {
		head = head->next;
		delete current;
		current = head;
	}
}

//Prints the linked list
template <class Type>
void LinkedList<Type>::print() {
	Node<Type>* current = head;

	cout << "List = ";
	while (current) {
		cout << current->val << " ";
		current = current->next;
	}
	cout << endl;
}
