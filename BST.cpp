// ConsoleApplication9.cpp : Defines the entry point for the console application.
//BST

#include "stdafx.h"
#include<iostream>
using namespace std;
struct node{
	int data;
	node* left;
	node* right;
};
node* getvalue(node*root, int val)
{
	node*newnode;
	newnode = new node;
	newnode->data = val;
	newnode->left = NULL;
	newnode->right = NULL;
	return newnode;
}
node* insertion(node*root,int val)
{
	if (root == NULL)
	{
		root = getvalue(root, val);
	}
	if (root->data > val)
	{
		root->left = insertion(root->left, val);
	}
	if (root->data < val)
	{
		root->right = insertion(root->right, val);
	}
	return root;
}
void preorder(node*root)
{
	if (root == NULL)
	{
		return;
	}
	cout << root -> data<<" ";
	preorder(root->left);
	preorder(root->right);
}
void inorder(node*root)
{

	if (root == NULL)
	{
		return;
	}
	preorder(root->left);
	cout << root->data<<" ";
	preorder(root->right);
}
void postorder(node*root)
{
	if (root == NULL)
	{
		return;
	}
	
	preorder(root->left);
	preorder(root->right);
	cout << root->data<<" ";
}
node* deletemin(node* root){
	while (root->right != NULL)

	{
		root = root->right;
	}
	return root;
}

node* deletee(node*root, int key)
{
	node *temp;
	if (root == NULL)
	{
		return NULL;
	}
	if (root->left && root->right == NULL)
	{
		delete root;
		return NULL;
	}
	if (key < root->data)
	{
		root->left = deletee(root->left, key);
	}
	if (key > root->data)
	{
		root->right = deletee(root->right, key);
	}
	else{
		if (root->left == NULL)
		{
			temp = root->right;
			root == temp;
			delete(temp);
		}
		if (root->right == NULL)
		{
			temp = root->left;
			root == temp;
			delete(temp);
		}
		else{
			temp=deletemin(root->left);
			root->data = temp->data;
			root->left=deletee(root->left, temp->data);
		}
		return root;
	}
}


int _tmain(int argc, _TCHAR* argv[])
{
	
	node *root=NULL;
	root=insertion(root,5);
	insertion(root, 10);
	insertion(root, 66);
	insertion(root, 19);
	insertion(root, 3);
	insertion(root, 2);
	insertion(root, 6);
	insertion(root, 98);

	cout << "preorder" << endl;
	preorder(root);
	cout <<endl<< "inorder" << endl;
	inorder(root);	
	cout <<endl<< "postorder" << endl;
	postorder(root);

	int num;
	cout << "enter num to delet" << endl;
	cin >> num;
	deletee(root, num);

	cout << "ineorder after deletion" << endl;
	inorder(root);
	system("pause");
	return 0;
}
//searching....??
//updation.......??