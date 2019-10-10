/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Clients.h
 * Author: Arman B.
 *
 * Created on October 8, 2019, 9:42 PM
 */

#ifndef CLIENTS_H
#define CLIENTS_H

#include "LinkedList.h"
#include "Node.h"
template<typename ItemType>
class Clients{
private:
    string clientName;
    LinkedList<ItemType>* head;
    
public:
    Clients() : clientName(""), head(nullptr) {}
    Clients(string namePar) : clientName(namePar), head(nullptr) {}
    virtual ~Clients(){}
    
    bool add(int position, string name);
    bool remove(int position);
    bool remove(string name);
    bool isEmpty();
    bool insert(int position, Node<ItemType> nodeToInsert);
    
};


#include "Clients.cpp"
#endif /* CLIENTS_H */














