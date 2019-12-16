#ifndef NODE_H
#define NODE_H

template <class Type>
struct Node {
	Type val;
	Node<Type>* next;

	Node();
	Node(Type);
};

template <class Type>
Node<Type>::Node() : val(0), next(NULL) {}

template <class Type>
Node<Type>::Node(Type val) {
	this->val = val;
	next = NULL;
}

#endif
