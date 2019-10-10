/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LinkedList.h
 * Author: Arman B.
 *
 * Created on October 7, 2019, 6:21 AM
 */

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "ListInterface.h"
#include "Node.h"
#include "PrecondViolatedExcept.h"

template<typename ItemType>
class LinkedList : public ListInterface<ItemType>
{
private:
    Node<ItemType> *head;

    int itemCount;
    Node<ItemType> *getNodeAt(int poition) const;

public:
    LinkedList();
    LinkedList(const LinkedList<ItemType>& aList);
    virtual ~LinkedList();
    
    bool isEmpty() const;
    int getLength() const;
    bool insert(int newPosition, const ItemType& newEntry);
    bool remove(int position);
    void clear();
    
    ItemType getEntry(int position) const;// throw(PrecondViolatedExcept);
    ItemType replace(int position, const ItemType& newEntry);// throw(PrecondViolatedExcept);
            
};
#include "LinkedList.cpp"
#endif /* LINKEDLIST_H */








