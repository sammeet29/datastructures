#include <iostream>
#include "Linked_List.h"

#define SIZE 5

int main(){
    
    Linked_List * ll = new Linked_List();

    if(ll->is_empty() == true){
        std::cout << "The list is empty" << std::endl;
    }

    for (int i =1 ; i<=SIZE; i++){
        ll->add_to_start(i);
    }

    if(ll->is_present(4) == true){
        std::cout << "Entry exists" << std::endl;
    }

    if(ll->is_empty() == false){
        std::cout << "The list is filled" << std::endl;
    }

    ll->print_list(); 

    std::cout << "deleting 4" << std::endl;

    ll->delete_node(4);
    ll->print_list();

    return 0;
}
