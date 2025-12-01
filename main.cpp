// COMSC-210 | Lab 36 | Diksha Tara Natesan
// IDE used: Vim/Terminal

#include <iostream>
#include "IntBinaryTree.h"
using namespace std;
int main() {
	//testing for milestone 2
	IntBinaryTree bst;
	bst.insertNode("xyz");
	bst.insertNode("ghi");
	bst.insertNode("def");
	bst.insertNode("abc");
	if (bst.searchNode("abc"));
		cout << "'abc' found" << endl;
	else
		cout << "'abc' NOT found" << endl;
	return 0;
}
