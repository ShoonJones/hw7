//Author: Sean Jones
//Date: 20 March, 2017
//Description: Declaration of the class dlist and its functions

#include "Dnode.h"
#include "iterator.h"
#ifndef DLIST_H
#define DLIST_H

template <class Item>
class dlist
{

	private:
		Dnode<Item> * head;
		Dnode<Item> * tail;
		int total;
	public:
		typedef ex_iterator<Item> iterator;


		//dlist constructor and functions

		dlist(){head = NULL;tail = NULL,total = 0;}
		void front_insert(Item& f_insert);
		void rear_insert(Item& r_insert);
		void front_remove();
		void rear_remove();
		void show()const;
		void reverse_show()const;
		int size();
		void destroy();
		void copy(const dlist<Item>& other);

		//Big Three

		dlist(const dlist<Item>& other);
    	dlist<Item>& operator =(const dlist<Item>& other);
    	~dlist();

    	//Iterator functions

		iterator begin()
		{
			return iterator(head);
		}
		iterator end()
		{
			return iterator(NULL);
		}
		iterator r_begin()
		{
			return iterator(tail);
		}
		iterator r_end()
		{
			return iterator(NULL);
		}

		//dlist functions with iterators

		void insert_before(iterator loc,Item& item);
    	void insert_after(iterator loc,Item& item);
    	void remove(iterator loc);
};
#include "dlist.template"
#endif