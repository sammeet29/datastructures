#ifndef BINARYTREE
#define BINARYTREE

/*********************************************************************
Binary Search tree implementation
*********************************************************************/
namespace binary_tree{
	

	class Node{
		public:
			Node * Left;
			Node * Right;
			Node * Parent;
			int Key;

			Node(int data);
			Node(int data, Node * p, Node * l, Node *r);
	};

	class binarytree{
		public:
			binarytree(){

			}

		private:


	};

}

#endif
