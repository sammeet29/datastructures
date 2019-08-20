#include <cstddef>
#include <cstdlib>
#include "Linked_List.h"

using namespace std;

// Description	- add node to the start of list
// Input 		- data of the node to be deleted
// Return 		- true if successful, else false
// Output		- None
bool Linked_List::add_to_start(int data){
	// return value
	bool rtn = true;

	Node * new_node =  malloc(sizeof(Node));

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

// Description	- delete 1st node with data = data
// Input 		- data of the node to be deleted
// Return 		- true if successful, else false
// Output		- Node is deleted from the list 
bool Linked_List::delete_node( int data){
	// return value
	bool rtn = false;

	Node * prev = head;
	Node * curr = head;

	// if we need to delete the head node
	if((head != NULL) && (head->Data == data)){
		
		// rearrange the linked list
		curr = head;
		head = head->Next;

		// skip the loop
		rtn = true;

		// delete node
		free(curr);
	}

	while ((curr != NULL) && (!rtn)){

		// if this is the node we are looking for
		// delete the node and rearrange the list
		if( curr->Data = data){ 
			rtn = true;
			prev->next = curr->Next;
			free(curr);
		}

		// advance loop
		prev = curr;
		curr = curr->next;
	}

	return (rtn);
}

// Description	- tells if the data is present in the list
// Return 		- true if node is present, else false
// Output		- None
bool Linked_List::is_present(int data){
	// return value
	bool rtn = false;

	while ( !rtn && curr != NULL ){

		if(curr->Data == data){
			// exit
			rtn = true;
		}

		//advance loop
		curr = curr->Next;
	}

	return(rtn);
}

// Description	- Prints out the data in list in a line
// Return 		- none
// Output		- prints out the list data
void Linked_List::print_list(){
	if(head == NULL){
		return;
	}

	Node * curr = head;

	while (curr != NULL){

		cout << curr->Data << " ";
		curr = curr->Next;
	}

	cout << endl;
}
