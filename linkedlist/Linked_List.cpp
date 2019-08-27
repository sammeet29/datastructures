#include <cstddef>
#include <cstdlib>
#include <iostream>
#include "Linked_List.h"


Linked_List::Linked_List(){
    this->head = NULL;
}


// Description  - add node to the start of list
// Input        - data of the node to be deleted
// Return       - true if successful, else false
// Output       - None
bool Linked_List::add_to_start(int data){
    // return value
    bool rtn = true;

    Node * new_node = (Node *) malloc(sizeof(Node));

    if(new_node == NULL){
        rtn = false;
    }

    if(rtn){
        new_node->Data = data;
        new_node->Next = head;
        head = new_node;
    }

    return (rtn);
}

// Description  - delete 1st node with data = data
// Input        - data of the node to be deleted
// Return       - true if successful, false if node not found
//                or the list is empty
// Output       - Node is deleted from the list 
bool Linked_List::delete_node( int data){
    // return value, assume all will go correctly
    bool rtn = true;

    // if the list is empty return false
    if(head == NULL){
        rtn = false;
    }else if(head->Data == data){
        // else if the head has the same data
        // delete head and make the next node head
        Node * temp = this->head;
        this->head = head->Next;
        free(temp);
    }else{

        // initialize the loop
        Node * curr = head;
        Node * prev = head;
        bool not_found = true;
        while(not_found || curr != NULL){

            // if the data matches the current nodes data
            if(curr->Data == data){
                // delete the node
                not_found = false;
                prev->Next = curr->Next;
                free(curr);
            }

            // Advance the loop
            prev = curr;
            curr = curr->Next;
        }

        // if node is still not found return false
        if(not_found){
            rtn = false;
        } 
    }

    return (rtn);
}

// Description  - Searches the list for a node.
// Return       - true if node is present, else false
// Output       - None
bool Linked_List::is_present(int data){
    // return value
    bool rtn = false;
    Node * curr = this->head;
    while ( !rtn && (curr != NULL) ){

        if(curr->Data == data){
            // exit
            rtn = true;
        }

        //advance loop
        curr = curr->Next;
    }

    return(rtn);
}

// Description  - Prints out the data in list in a line
// Return       - none
// Output       - prints out the list data
void Linked_List::print_list(){
    if(head == NULL){
        return;
    }

    Node * curr = head;

    while (curr != NULL){

        std::cout << curr->Data << " ";
        curr = curr->Next;
    }

    std::cout << std::endl;
}

// Description  - Tells us if the list is empty
// Return       - True if empty, else false
// Output       - None
bool Linked_List::is_empty(){
    bool rtn = false;

    if(this->head == NULL){
        rtn = true;
    }

    return (rtn);
}

