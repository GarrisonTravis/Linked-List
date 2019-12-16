#include <iostream>
#include "LinkedList.cpp"

using namespace std;

int main() {

	int arr[5] = { 5, 10, 15, 20, 25 };
	
	LinkedList<int> ll(arr, 5);

	ll.print();

	ll.insertFront(30);

	ll.print();
}
