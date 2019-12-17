#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

template <class Type>
class LinkedList {
private:
	Node<Type>* head;
	Node<Type>* tail;
	
public:
	LinkedList();
	LinkedList(Type);
	LinkedList(Type arr[], int size);
	~LinkedList();

	Type getHead();
	Type getTail();

	void insertFront(Type);
	void insertBack(Type);
	void insertAfter(Type, int);
	void insertBefore(Type, int);
	void deleteValue(Type);
	void clear();

	void print();
};

#endif
