/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "LinkedList.h"
#include "PrecondViolatedExcept.h"



// Constructor:
template <typename ItemType>
LinkedList<ItemType>::LinkedList(){
    head = nullptr;
    itemCount = 0;
}

// Destructor:
template <typename ItemType>
LinkedList<ItemType>::~LinkedList(){
    clear();
}

// getEntry():
template <typename ItemType>
ItemType LinkedList<ItemType>::getEntry(int position) const // throw(PrecondViolatedExcept)
 {
    bool ableToGet = (position >= 1) && (position <= itemCount);
    if (ableToGet) {
        Node<ItemType>* nodePtr = getNodeAt(position);
        return nodePtr->getItem();
    } else {
        string message = "getEntry() called with an empty list or ";
        message = message + "invalid position.";
        throw(PrecondViolatedExcept(message));
    }
}

// getNodeAt():
template <typename ItemType>
Node<ItemType>* LinkedList<ItemType>::getNodeAt(int position) const{
    // Debugging check of precondition:
//    assert ((position <= 1) && (position <= itemCount)); // Надо выяснить что за assert из Prelude 3.
    Node<ItemType>* curr = head;
    for (int skip = 1; skip < position; skip++){
        curr = curr->getNext();
    }
    return curr;
}

// insert():
template <typename ItemType>
bool LinkedList<ItemType>::insert(int newPosition, const ItemType& newEntry){
    bool ableToInsert = (newPosition >= 1) && (newPosition <= itemCount+1);
    if (ableToInsert){
        Node<ItemType>* newNode = new Node<ItemType>(newEntry);
        if (newPosition == 1){
            newNode->setNext(head);
            head = newNode;
        } else {
            Node<ItemType>* prev = getNodeAt(newPosition-1);
            newNode->setNext(prev->getNext());
            prev->setNext(newNode);
        }
        itemCount++;
    }
    return ableToInsert;
}

// remove():
template <typename ItemType>
bool LinkedList<ItemType>::remove(int position){
    bool ableToRemove = (position >= 1) && (position <= itemCount); 
    if (ableToRemove){
        Node<ItemType>* curr = nullptr;
        if (position == 1){
            curr = head;
            head = head->getNext();
        } else {
            Node<ItemType>* prev = getNodeAt(position - 1);
            curr = prev->getNext();
            prev->setNext(curr->getNext());
        }
        curr->setNext(nullptr);
        delete curr;
        curr = nullptr;
        itemCount--;
    }
    return ableToRemove;
}

// clear():
template<typename ItemType>
void LinkedList<ItemType>::clear(){
    while(!isEmpty())
        remove(1);
}

// isEmpty():
template<typename ItemType>
bool LinkedList<ItemType>::isEmpty() const {
    return itemCount == 0;
}

// getLength():
template<typename ItemType>
int LinkedList<ItemType>::getLength() const {
    return itemCount;
}

// replace():
template<typename ItemType>
ItemType LinkedList<ItemType>::replace(int position, const ItemType& newEntry) // throw(PtrecondViolationExcept)
{    
    // STUB
    Node<ItemType>* nodeToReplace = getNodeAt(position);
    nodeToReplace->setItem(newEntry);
    
    return nodeToReplace->getItem();
}










