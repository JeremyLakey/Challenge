#include <iostream>
#include <string> 
#include "LinkedList.h"
using std::cout;
using std::to_string;

int main(int argc, char** argv) {
	LinkedList<int> intList;
	intList.add(0);
	intList.add(1);
	intList.add(3);
	intList.add(10);
	intList.add(12);
	intList.add(-1);

	cout << to_string(intList.get()) + "\n";
	intList.next();
	cout << to_string(intList.get()) + "\n";
	intList.next();
	cout << to_string(intList.get()) + "\n";
	intList.next();
	cout << to_string(intList.get()) + "\n";
	intList.next();
	cout << to_string(intList.get()) + "\n";
	intList.next();
	cout << to_string(intList.get()) + "\n";
	intList.reset();
	intList.reverse();
	cout << to_string(intList.get()) + "\n";
	intList.next();
	cout << to_string(intList.get()) + "\n";
	intList.next();
	cout << to_string(intList.get()) + "\n";
	intList.next();
	cout << to_string(intList.get()) + "\n";
	intList.next();
	cout << to_string(intList.get()) + "\n";
	intList.next();
	cout << to_string(intList.get()) + "\n";
	return 0;
}