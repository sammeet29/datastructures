
typedef Node {
    int data;
    Node * next_node;
} Node;


class Linked_List{
    Node * head;

    virtual void yadd_node(Node *);
    virtual void delete_node(Node *);

}