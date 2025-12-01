// COMSC-210 | Lab 36 | Diksha Tara Natesan
// IDE used: Vim/Terminal

#include <iostream>
#include <fstream>
#include <string>
#include "IntBinaryTree.h"
using namespace std;

int main() {
	/*//testing for milestone 2
	IntBinaryTree bst;
	bst.insertNode("xyz");
	bst.insertNode("ghi");
	bst.insertNode("def");
	bst.insertNode("abc");
	if (bst.searchNode("abc"))
		cout << "'abc' found" << endl;
	else
		cout << "'abc' NOT found" << endl;
	cout << "In order:" << endl;
	bst.displayInOrder();
	cout << "Pre order:" << endl;
	bst.displayPreOrder();
	cout << "Post order:" << endl;
	bst.displayPostOrder();
	bst.remove("def");
	cout << "Removed 'def':" << endl;
	bst.displayInOrder(); */

	ifstream fin("codes.txt");
	string line;
	IntBinaryTree bst;
	//populate BST
	while(getline(fin, line))
		bst.insertNode(line);
	//cout << "BST in order:" << endl;
	//bst.displayInOrder();
	
	//main menu
	int choice;
	do{
		cout << "\nMain Menu:" << endl;    //choice display
		cout << "[1] Add node" << endl;
		cout << "[2] Delete node" << endl;
		cout << "[3] Search for node" << endl;
		cout << "[4] Modify node" << endl;	//this would be a delete & add
		cout << "[5] Display BST" << endl;
		cout << "[0] Quit" << endl;
		cout << "Choice --> ";
		cin >> choice;
		if (choice == 1){
			cout << "\nEnter value for new node: ";
			string userInput;
			cin >> userInput;
			bst.insertNode(userInput);
		}
		else if (choice == 2){
			cout << "\nEnter node value to delete: ";
			string userInput;
			cin >> userInput;
		}
		else if (choice == 3)
			search();
		else if (choice == 4)
			modify();
		else if (choice == 5)
			bst.displayInOrder();
		else
			choice = 0;
	}
	while (choice != 0);
	
	

	return 0;
}
