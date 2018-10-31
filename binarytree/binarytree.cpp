#include <cstddef>
#include "binarytree.h"

using namespace binary_tree;

Node::Node(int data):Key(data){

}

Node::Node(int data, Node * p, Node *l, Node *r):
	Key(data), Parent(p), Left(l), Right(r){}