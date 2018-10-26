typedef struct node{
	struct node * Next;
	int Data;
} Node;

class Linked_List{

	Node * head;

	virtual bool add_to_start(int data);
	virtual bool delete_node(int data); 
	virtual bool is_present(int data);
	virtual void print_list();

};