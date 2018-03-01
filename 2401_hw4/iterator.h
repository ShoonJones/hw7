//Author: Sean Jones
//Date: 20 March 2017 
//Description: Declaration of the class ex_iterator and it's functions.


#ifndef ITERATOR_H
#define ITERATOR_H

#include "Dnode.h"

template <class Item>
class dlist;

template <class Item>
class ex_iterator
{
    private:
        Dnode<Item> * ptr;
    public:
        ex_iterator(){ptr =NULL;}
	    ex_iterator(Dnode<Item> *initial_value){ptr = initial_value;}

        ex_iterator operator++(){ptr = ptr -> next();return *this;}     
        ex_iterator operator++(int){ex_iterator<Item> orginal(ptr);ptr = ptr ->next();return orginal;}
        ex_iterator operator--(){ptr = ptr -> previous();return *this;}   
        ex_iterator operator--(int){ex_iterator<Item> orginal(ptr);ptr = ptr ->previous();return orginal;}
           
        Item operator*()const{return ptr->data();} 

	    bool operator == (const ex_iterator& other){return ptr == other.ptr;}
        bool operator != (const ex_iterator& other){return ptr != other.ptr;}

        friend class dlist<Item>;			       
};
#endif