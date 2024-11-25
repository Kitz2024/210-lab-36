#include <iostream>
#include "IntBinaryTree.h"
#include <fstream>
#include <string>
using namespace std;



int main() {
    IntBinaryTree tree;

    ifstream infile ("codes.txt");
    if (!infile){
        cout << "Error Couldn't open file." << endl;
        return 1;
    }

    return 0;
}