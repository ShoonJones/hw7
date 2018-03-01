//Author: Sean Jones
//Date: 20 March, 2017
//Description: This file contains the class 'Dnode' and its function declarations and their defintions.

#ifndef DNODE_H
#define DNODE_H

#include <iostream>
#include <cstdlib>
#include <fstream>


template <class Item>
class Dnode
{
	public:
		//Typedef and Constructor
		typedef Item value;
		Dnode(Item d_data = value(),Dnode * d_next = NULL, Dnode * d_previous = NULL)
		{
			data_field = d_data; 
			next_field = d_next; 
			previous_field = d_previous;
		}
		//Accessors

		value data(){return data_field;}
		Dnode * next(){return next_field;}
		Dnode * previous(){return previous_field;}
		//Mutators

		void set_data(const Item& new_data){data_field = new_data;}
		void set_next(Dnode * new_next){next_field = new_next;}
		void set_previous(Dnode * new_previous){previous_field = new_previous;}
	private:
		Item data_field;
		Dnode * next_field;
		Dnode * previous_field;
};
#endif