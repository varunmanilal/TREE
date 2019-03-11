#include<iostream>
using namespace std;

class Node
{
	public:
	int data;
	Node * left;
	Node * right;
	Node(int no)
	{
		data=no;
		left=NULL;
		right=NULL;
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

void insert(int no)
{
insertA(root,no);
}
void insertA(Node * curr,int no)
{
//base case
//if no<curr->data
//if no>curr->data
if(root==NULL)
	{
	root= new Node(no);
	}
else if(no<curr->data)
	{
	//if curr->left is null
	//if curr->left is not
	if(curr->left==NULL)
		{
		curr->left=new Node(no);
		}
	else
		{
		insertA(curr->left,no);
		}
	}
else
	{
	if(curr->right==NULL)
		{
		curr->right=new Node(no);
		}
	else
		{
		insertA(curr->right,no);
		}
	}


}
void display()
{
	displayA(root);
}
void displayA(Node * curr)
{
if(curr==NULL)
{
	return;
}

displayA(curr->left);
cout<<curr->data<<" ";
displayA(curr->right);
}
Node * searchA(int no){
	search(root, no);
}
Node * search(Node* curr,int no)
{
if(curr==NULL ||curr->data==no)
	{
	return curr;
	}
else if(no<curr->data)
	{
	
	return search (curr->left,no);
	}
else
	{
	return search(curr->right,no);
	}
}

};

int main()
{
BST b1;
b1.insert(6);
b1.insert(4);
b1.insert(8);
b1.insert(12);
b1.insert(3);
b1.display();
if(b1.searchA(8)!=NULL)
	{
	cout<<endl;
	cout<<"its there = "<<b1.searchA(8)->data<<endl;
	}
return 0;
}










