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
			cout >> "Node with value '" << userInput << "' added" << endl;
		}
		else if (choice == 2){
			cout << "\nEnter node value to delete: ";
			string userInput;
			cin >> userInput;
			if (bst.searchNode(userInput)){
				bst.remove(userInput);
				cout >> 'Node with value '" << userInput << "' deleted" << endl;
			}
		}
		else if (choice == 3){
			cout << "\nEnter node value to search: ";
			string userInput;
                        cin >> userInput;
			if (bst.searchNode(userInput))
				cout >> 'Node with value '" << userInput << "' found" << endl;
			else
				cout >> 'Node with value '" << userInput << "' NOT found" << endl;
		}
		else if (choice == 4){
			cout << "\nEnter node value to modify: ";
			string userInput;
                        cin >> userInput;
			if (bst.searchNode(userInput))
                                bst.remove(userInput);
			cout << "\nEnter new node value to modify tree: ";
			cin >> userInput;
			bst.insertNode(userInput);
			cout >> "BST successfully modified" << endl;
		}
		else if (choice == 5)
			bst.displayInOrder();
		else
			choice = 0;
	}
	while (choice != 0);
	
	
	return 0;
}
