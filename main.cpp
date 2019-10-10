/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Arman //Arman B.
 *
 * Created on October 8, 2019, 9:30 PM
 */

#include "LinkedList.h"
#include "Clients.h"
#include <iostream>
#include <string>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    Clients<string> client("Jerry");
    cout << "client isEmpty?: " << client.isEmpty() << endl;
    
    ListInterface<string> *newList = new LinkedList<string>();
    cout << "isEmpty?: " << newList->isEmpty() << endl;
    newList->insert(1, "Garry");
    cout << "isEmpty?: " << newList->isEmpty() << endl;
    cout << "newList value: " << newList->getEntry(1) << endl;
    
    return 0;
}

