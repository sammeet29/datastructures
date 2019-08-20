#include <cstdlib>
#include "Sorted_Linked_List"

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
        }else if(data < this.head->data){
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


    return (rtn);
}

/*  Description     :
    Inputs          :
    Output          :
*/
void Sorted_Linked_List::sort_list(){
    bool rtn = true;


    return (rtn);    
}
