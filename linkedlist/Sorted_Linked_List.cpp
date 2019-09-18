#include <cstdlib>
#include "Sorted_Linked_List.h"

/*  Description     : Add data to the list in sorted order
    Inputs          : Data for the linked Node
    Outputs         : True if Node added to list, else False
*/
bool Sorted_Linked_List::add_sorted(int data){
    bool rtn = true;
    
    // create node
    Node * newNode = malloc(sizeof(Node));
    
    if(newNode == NULL){
        rtn = false;        
    }else{
        newNode->Data = data;
    }

    // Find place to insert node
    if(rtn){
        
        if(head == NULL){
            this.head = newNode;
        }else if(data < this.ead->data){
            newNode-> Next = &head;
        }else{

        }
    }

    return (rtn);
}   

/*  Description     :
    Inputs          : Data of the Node to delete
    Outputs         : True if successfully deleted the First occurence of
                      node, False if it couldnt find a node with data
*/
bool Sorted_Linked_List::delete_node(int data){
    bool rtn = true;
    bool node_found = false;      

    Node * curr = this.head;

    // If list is empty, return false
    if(curr == NULL){
        rtn = false;
    }

    if(rtn){
        // Only if the list is not empty
        
        // if the head is the node to be deleted
        if(this.head->Data == data){
            // Node found
            node_found = true;

            // Make the next node Head and delete the head
            Node * temp = this.head->Next;
            free(head);
            this.head = temp;
        }


        Node * prev = NULL;

        // While the node is not found and while the data we are looking 
        // is less than or equal to data we are looking for
        while((node_found == false) && (curr->Data <= data)){
            
            if(curr->Data == data){
                // Node found, exit the loop
                node_found = true;

                //delete the curr node
                prev->Next = curr->Next;
                free(curr);

            }

            // advance loop
            prev = curr;
            curr = curr->Next;
        }
    }
    bool add_sorted(int data);

    // IF we didnt find the node, then we werent able to delete the node
    rtn = node_found;

    return (rtn);
}


virtual bool is_present(){

    bool rtn = true;
    bool node_found = false;

    if(this.head == NULL){
        rtn = false;
    }

    // if the Linked list is not empty
    if(rtn){

        Node * curr = this.head;
        Node * prev = NULL;

        // while the node has not found and data is not greater than 
        // data in the node
        while((node_found == false) && (curr->Data <= data)){

            if(curr->Data == data){
                // Node found, return true
                node_found = true;
            }

            // advance loop
            prev = curr;
            curr = curr->Next;
        }
    }

    return (node_found);
}

