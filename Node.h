/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Node.h
 * Author: Arman B.
 *
 * Created on October 7, 2019, 6:21 AM
 */

#ifndef NODE_H
#define NODE_H

template<typename ItemType>
class Node{

private:
    ItemType item;
    Node<ItemType>* next;

public:
    
    Node(ItemType item){
        this->item = item;
        next = nullptr;
    }
    
    
    ItemType getItem() const{
        return item;
    }
    
    
    void setItem(const ItemType& anItem){
        this->item = anItem;
    }
    Node<ItemType>* getNext() const{
        return next;
    }
    
    
    void setNext(Node<ItemType>* next){
        this->next = next;
    }
};

#endif /* NODE_H */






