#include <iostream>
#include "LinkedList.cpp"

using namespace std;

int main() {

	int arr[4] = { 5, 10, 20, 25 };
	
	cout << "Testing Linked List initialized with an array:" << endl;
	cout << "----------------------------------------------" << endl;
	LinkedList<int> list1(arr, 4);		

	list1.print();

	cout << "InsertFront: 0" << endl;
	list1.insertFront(0);
	list1.print();
	cout << "Head = " << list1.getHead() << endl;
	cout << "Tail = " << list1.getTail() << endl;

	cout << "InsertBack: 30 " << endl;
	list1.insertBack(30);
	list1.print();
	cout << "Head = " << list1.getHead() << endl;
	cout << "Tail = " << list1.getTail() << endl;

	cout << "InsertAfter index 2: 15" << endl;
	list1.insertAfter(15, 2);
	list1.print();
	cout << "Head = " << list1.getHead() << endl;
	cout << "Tail = " << list1.getTail() << endl;

	cout << "Delete: 10" << endl;
	list1.deleteValue(10);
	list1.print();
	cout << "Head = " << list1.getHead() << endl;
	cout << "Tail = " << list1.getTail() << endl;

	cout << "Delete: 0" << endl;
	list1.deleteValue(0);
	list1.print();
	cout << "Head = " << list1.getHead() << endl;
	cout << "Tail = " << list1.getTail() << endl;

	cout << "Delete: 30" << endl;
	list1.deleteValue(30);
	list1.print();
	cout << "Head = " << list1.getHead() << endl;
	cout << "Tail = " << list1.getTail() << endl;

	cout << "\nTesting Linked List initialized with default constructor (empty list):" << endl;
	cout << "------------------------------------------------------------------------" << endl;
	LinkedList<int> list2;

	list2.print();

	cout << "InsertFront: 3, 4, 5" << endl;
	list2.insertFront(3);
	list2.insertFront(4);
	list2.insertFront(5);
	list2.print();
	cout << "Head = " << list2.getHead() << endl;
	cout << "Tail = " << list2.getTail() << endl;

	cout << "InsertBack: 2, 1" << endl;
	list2.insertBack(2);
	list2.insertBack(1);
	list2.print();
	cout << "Head = " << list2.getHead() << endl;
	cout << "Tail = " << list2.getTail() << endl;

	cout << "InsertAfter index 4: 0" << endl;
	list2.insertAfter(0, 4);
	list2.print();
	cout << "Head = " << list2.getHead() << endl;
	cout << "Tail = " << list2.getTail() << endl;

	cout << "\nTesting Linked List initialized with 1 node:" << endl;
	cout << "----------------------------------------------" << endl;
	LinkedList<int> list3(50);

	list3.print();

	cout << "InsertBack: 55, 60, 70" << endl;
	list3.insertBack(55);
	list3.insertBack(60);
	list3.insertBack(70);
	list3.print();
	cout << "Head = " << list3.getHead() << endl;
	cout << "Tail = " << list3.getTail() << endl;

	cout << "InsertBefore index 3: 65" << endl;
	list3.insertBefore(65, 3);
	list3.print();
	cout << "Head = " << list3.getHead() << endl;
	cout << "Tail = " << list3.getTail() << endl;

	cout << "InsertFront: 45, 40" << endl;
	list3.insertFront(45);
	list3.insertFront(40);
	list3.print();
	cout << "Head = " << list3.getHead() << endl;
	cout << "Tail = " << list3.getTail() << endl;

	cout << "InsertBefore index 0: 35" << endl;
	list3.insertBefore(35, 0);
	list3.print();
	cout << "Head = " << list3.getHead() << endl;
	cout << "Tail = " << list3.getTail() << endl;

	cout << "\nClearing the List:" << endl;
	list3.clear();
	list3.print();


}
