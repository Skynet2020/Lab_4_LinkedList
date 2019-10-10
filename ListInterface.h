/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListInterface.h
 * Author: Arman B. *
 * Created on October 6, 2019, 6:13 PM
 */

#ifndef LISTINTERFACE_H
#define LISTINTERFACE_H

template <typename ItemType>
class ListInterface
{
    public:
        virtual bool isEmpty() const = 0;
        virtual int getLength() const = 0;
        virtual bool insert(int newPosition, const ItemType& newEntry) = 0;
        virtual bool remove(int position) = 0;
        virtual void clear() = 0;
        virtual ItemType getEntry(int position) const = 0;
        virtual ItemType replace(int position, const ItemType& newEntry) = 0;
        virtual ~ListInterface(){}
};
#endif /* LISTINTERFACE_H */





