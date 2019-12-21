#include <iostream>
#include "LinkedList.cpp"

using namespace std;

int main() {

	int arr[4] = { 5, 10, 20, 25 };
	
	cout << "Testing Linked List initialized with an array:" << endl;
	cout << "----------------------------------------------" << endl;
	LinkedList<int> list1(arr, 4);		

	list1.print();

	cout << "\nInsertFront: 0" << endl;
	list1.insertFront(0);
	list1.print();
	cout << "Head = " << list1.getHead() << endl;
	cout << "Tail = " << list1.getTail() << endl;

	cout << "\nInsertBack: 30 " << endl;
	list1.insertBack(30);
	list1.print();
	cout << "Head = " << list1.getHead() << endl;
	cout << "Tail = " << list1.getTail() << endl;

	cout << "\nInsertAfter index 2: 15" << endl;
	list1.insertAfter(15, 2);
	list1.print();
	cout << "Head = " << list1.getHead() << endl;
	cout << "Tail = " << list1.getTail() << endl;

	cout << "\nDelete: 10" << endl;
	list1.deleteValue(10);
	list1.print();
	cout << "Head = " << list1.getHead() << endl;
	cout << "Tail = " << list1.getTail() << endl;

	cout << "\nDelete: 0" << endl;
	list1.deleteValue(0);
	list1.print();
	cout << "Head = " << list1.getHead() << endl;
	cout << "Tail = " << list1.getTail() << endl;

	cout << "\nDelete: 30" << endl;
	list1.deleteValue(30);
	list1.print();
	cout << "Head = " << list1.getHead() << endl;
	cout << "Tail = " << list1.getTail() << endl;

	cout << "\nTesting Linked List initialized with default constructor (empty list):" << endl;
	cout << "------------------------------------------------------------------------" << endl;
	LinkedList<int> list2;

	list2.print();

	cout << "\nInsertFront: 3, 4, 5" << endl;
	list2.insertFront(3);
	list2.insertFront(4);
	list2.insertFront(5);
	list2.print();
	cout << "Head = " << list2.getHead() << endl;
	cout << "Tail = " << list2.getTail() << endl;

	cout << "\nInsertBack: 2, 1" << endl;
	list2.insertBack(2);
	list2.insertBack(1);
	list2.print();
	cout << "Head = " << list2.getHead() << endl;
	cout << "Tail = " << list2.getTail() << endl;

	cout << "\nInsertAfter index 4: 0" << endl;
	list2.insertAfter(0, 4);
	list2.print();
	cout << "Head = " << list2.getHead() << endl;
	cout << "Tail = " << list2.getTail() << endl;

	cout << "\nTesting Linked List initialized with 1 node:" << endl;
	cout << "----------------------------------------------" << endl;
	LinkedList<int> list3(50);

	list3.print();

	cout << "\nInsertBack: 55, 60, 70" << endl;
	list3.insertBack(55);
	list3.insertBack(60);
	list3.insertBack(70);
	list3.print();
	cout << "Head = " << list3.getHead() << endl;
	cout << "Tail = " << list3.getTail() << endl;

	cout << "\nInsertBefore index 3: 65" << endl;
	list3.insertBefore(65, 3);
	list3.print();
	cout << "Head = " << list3.getHead() << endl;
	cout << "Tail = " << list3.getTail() << endl;

	cout << "\nInsertFront: 45, 40" << endl;
	list3.insertFront(45);
	list3.insertFront(40);
	list3.print();
	cout << "Head = " << list3.getHead() << endl;
	cout << "Tail = " << list3.getTail() << endl;

	cout << "\nInsertBefore index 0: 35" << endl;
	list3.insertBefore(35, 0);
	list3.print();
	cout << "Head = " << list3.getHead() << endl;
	cout << "Tail = " << list3.getTail() << endl;

	cout << "\nClearing the List:" << endl;
	list3.clear();
	list3.print();

	cout << "\nTesting Linked List initialized with an array of characters:" << endl;
	cout << "------------------------------------------------------------" << endl;
	char charArr[5] = { 'A', 'B', 'C', 'A', 'B' };
	LinkedList<char> charList(charArr, 5);
	charList.print();
	cout << "\nDelete: 'A'" << endl;
	charList.deleteValue('A');
	charList.print();

	cout << "\nMore Testing of deleteValue function:" << endl;
	cout << "---------------------------------------" << endl;
	LinkedList<int> ll(2);
	ll.insertBack(3);
	ll.insertFront(1);
	ll.insertBack(4);
	ll.insertAfter(1, 3);
	ll.print();
	cout << "\nDelete: 1" << endl;
	ll.deleteValue(1);
	ll.print();
	cout << "Head = " << ll.getHead() << endl;
	cout << "Tail = " << ll.getTail() << endl;
	cout << "\nDelete: 3" << endl;
	ll.deleteValue(3);
	ll.print();
	cout << "Head = " << ll.getHead() << endl;
	cout << "Tail = " << ll.getTail() << endl;
}
