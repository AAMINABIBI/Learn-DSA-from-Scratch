// stack using linkedlist.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std; 

class node{
public:
	int data;
	node* next;
};

node* push(node *root, int x)
{
	node*temp = NULL;
	temp = new node;
	temp->data = x;
	temp->next = root;
	return temp;


}


void pop(node*root)
{
	if (root == NULL)
	{
		cout << "stack empty";
		return;
	}
	node *temp = root;
	root = root->next;
	cout << "element popped is" << temp->data;
	delete temp;
}
int _tmain(int argc, _TCHAR* argv[])
{
	node *root=NULL;
	root = push(root, 10);
	root = push(root, 4);
	root = push(root, 7);
	root = push(root, 3);
	pop(root);
	system("pause");
	return 0;
}

