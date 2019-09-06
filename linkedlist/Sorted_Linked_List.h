#ifndef SORTED_LINKED_LISTH
#define SORTED_LINKED_LISTH 

#include "linkedlist.h"

class Sorted_Linked_List: public Linked_List {

    // Override to make sure we dont mess up our list  
    virtual bool add_to_start(int data);

    // Add node in a sorted manner
    bool add_sorted(int data);
    
    // This would be quicker as we know that the data is sorted,
    // we dont need to go through the whole list
    virtual bool delete_node(int data);

    // Since the data is sorted, we dont need to go through the 
    // whole list
    virtual bool is_present(int data);
};

#endif
