#include "linkedlist.h"

class Sorted_Linked_List: public Linked_List {

	virtual bool add_sorted(int data);
	virtual bool delete_node(int data);
	virtual void sort_list();
};