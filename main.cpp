#include <iostream>
#include "IntBinaryTree.h"
#include <fstream>
#include <string>
using namespace std;

int main()
{
    IntBinaryTree tree;

    ifstream infile("codes.txt");
    if (!infile)
    {
        cout << "Error Couldn't open file." << endl;
        return 1;
    }

    int userChoice;

    string codeRecords;
    while (getline(infile, codeRecords))
    {
        tree.insertNode(codeRecords);
    }
    infile.close();

    while (true)
    {
        cout << "\nMenu\n";
        cout << "[1] Add Record";
        cout << "[2] Delete Record";
        cout << "[3] Search Record";
        cout << "[4] Moidfy Record";
        cout << "[0] Exit\n";
        cout << "Enter your choice: ";
        cin >> userChoice;
        cin.ignore(); // Clear Newline by cin
    }

    return 0;
}