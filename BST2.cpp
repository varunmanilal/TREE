#include<iostream>
using namespace std;

class Node
{
public:
	Node * left;
	Node* right;
	Node * parent;
	int data;
	Node(int value)
	{
	data=value;
	left=NULL;
	right=NULL;
	parent=NULL;
	}
};
class BST
{
public:
Node * root;
BST()
	{
	root=NULL;
	}
void insert(int value,int count=0)
{
	insertA(root,value);
	count++;
}

void insertA(Node * curr,int value)
{
//if node = null
if(root==NULL)
{
root= new Node(value);
}
else if(value<curr->data)
{
	if(curr->left==NULL)
		{
		curr->left=new Node(value);
		curr->left->parent=curr;
		}
	else insertA(curr->left,value);
}
else
{
	if(curr->right==NULL)
		{
	curr->right=new Node(value);
	curr->right->parent=curr;
		}
	else insertA(curr->right,value);
}
//if value <curr->data
//if value>curr-> data
}
Node * search(int value)
{
	searchA(root,value);
}
Node * searchA(Node * curr,int value)
{
//if the value matches
if(curr==NULL ||curr->data==value )
	{
	
	 return curr;
	}
//if value<curr->data
else if(value<curr->data) return searchA(curr->left,value);
//if value>curr->data
else return searchA(curr->right,value);
}
Node * find_min()
{}
void Display()
{
display(root);
}
void display(Node * curr)
{
//if root =null
if(root==NULL) return;
//if not move left till you reach null and then start printing
display(curr->left);
//the print in order
cout<<curr->data<<" ";
display(curr->right);
}
Node * findMinA()
{
	findMin(root);
}
Node * findMin(Node * curr)
{
if(curr==NULL)
	{
	return curr->parent->data;
	}
else
	{
	findMin(curr->left);
	}
}
void replace@parent(Node * one,Node * two)
{
Node * p=one->parent;
Node * p1=two->parent;

}


};



int main()
{
BST b1;
b1.insert(12);
b1.insert(10);
b1.insert(15);
b1.insert(2);
b1.insert(4);
b1.insert(6);
b1.Display();

return 0;
}
