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
	LinkedList(Type arr[]);
};

#endif
