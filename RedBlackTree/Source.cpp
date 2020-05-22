#include <iostream>
#include <string>
#include "Map.h"

using namespace std;


int main() {
	Map <string, float> bst;
	bst.insert("A", 38.5);
	bst.insert("B", 0.6);
	bst.insert("C", 1);
	bst.insert("D", 0);
	bst.insert("E", 100.0);
	bst.insert("F", 69.9);
	bst.insert("G", 32.3);
	bst.insert("H", 37.3);
	bst.insert("I", 19.0);
	bst.insert("J", 37.0);
	bst.insert("K", 73.2);
	bst.insert("L", 110.9);
	bst.insert("M", 1551.0);
	bst.insert("N", 3478.3);
	bst.printTree();
	cout << "Now let's remove key D" << endl;
	bst.remove("D");
	bst.printTree();
	cout << "Now let's clear the map and print it" << endl;
	bst.clear();
	bst.printTree();
	return 0;
}