// Kit Pollinger
//  210 - Lab - 36 | BST (Binary Tree)

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
        return 4;
    }

    int userChoice = 0;

    string codeRecords;
    while (getline(infile, codeRecords))
    {
        tree.insertNode(codeRecords);
    }
    infile.close();

    while (userChoice != 5) // Menu-Drive
    {
        cout << "\nMenu\n";
        cout << "[1] Add Record\n";
        cout << "[2] Delete Record\n";
        cout << "[3] Search Record\n";
        cout << "[4] Modify Record\n";
        cout << "[5] Exit\n";
        cout << "[6] Display Tree In-Order\n";
        cout << "[7] Display Tree Pre-Order\n";
        cout << "[8] Display Tree Post-Order\n";
        cout << "Enter your choice: ";
        cin >> userChoice;
        cin.ignore(); // Clear Newline by cin

        switch (userChoice)
        {
        case 1:
        {
            cout << "Enter Record to add: ";
            getline(cin, codeRecords);
            tree.insertNode(codeRecords);
            cout << "Record added.\n";
            break;
        }
        case 2:
        {
            cout << "Enter Record to delete: ";
            getline(cin, codeRecords);
            tree.remove(codeRecords);
            cout << "Record deleted(if exists).\n";
            break;
        }
        case 3:
        {
            cout << "Enter record to search: ";
            getline(cin, codeRecords);
            if (tree.searchNode(codeRecords))
            {
                cout << "Record found.\n";
            }
            else
            {
                cout << "Record not found.\n";
            }
            break;
        }
        case 4:
        {
            cout << "Enter record to modify: ";
            getline(cin, codeRecords);
            if (tree.searchNode(codeRecords))
            {
                cout << "Enter new value for the record: ";
                string newRecord;
                getline(cin, newRecord);
                tree.remove(codeRecords);   // Remove the old record
                tree.insertNode(newRecord); // Insert the new record
                cout << "Record modified successfully.\n";
            }
            else
            {
                cout << "No Record Found. Modification Error.\n";
            }
            break; // This was missing in your code
        }
        case 5:
        {
            cout << "Exiting Program ";
            break;
        }
        case 6:
        {
            cout << "Displaying Tree In-Order:\n";
            tree.displayInOrder();
            break;
        }
        case 7:
        {
            cout << "Displaying Tree Pre-Order:\n";
            tree.displayPreOrder();
            break;
        }
        case 8:
        {
            cout << "Displaying Tree Post-Order:\n";
            tree.displayPostOrder();
            break;
        }
        }
    }

    return 0;
}