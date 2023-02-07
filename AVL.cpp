#include "stdafx.h"
#include <iostream>
#include<string>
using namespace std;

class Node {
public:
	int key;
	Node *left;
	Node *right;
	int height;
};

int max(int a, int b);

// Calculate height
int height(Node *N) {
	if (N == NULL)
		return 0;
	return N->height;
}

int max(int a, int b) {
	return (a > b) ? a : b;
}

// New node creation
Node *newNode(int key) {
	Node *node = new Node();
	node->key = key;
	node->left = NULL;
	node->right = NULL;
	node->height = 1;
	return (node);
}

// Rotate right
Node *rightRotate(Node *y) {
	Node *x = y->left;
	Node *T2 = x->right;
	x->right = y;
	y->left = T2;

	y->height = max(height(y->left), height(y->right)) + 1;
	x->height = max(height(x->left), height(x->right)) + 1;
	return x;
}

// Rotate left
Node *leftRotate(Node *x)
{
	Node *y = x->right;
	Node *T2 = y->left;
	y->left = x;
	x->right = T2;
	x->height = max(height(x->left), height(x->right)) + 1;
	y->height = max(height(y->left), height(y->right)) + 1;

	return y;
}

// Get the balance factor of each node
int getBalanceFactor(Node *N) {
	if (N == NULL)
		return 0;
	return height(N->left) - height(N->right);
}

// Insert a node
Node *insertNode(Node *node, int key) {
	// Find the correct postion and insert the node
	if (node == NULL)
		return (newNode(key));
	if (key < node->key)
		node->left = insertNode(node->left, key);
	else if (key > node->key)
		node->right = insertNode(node->right, key);
	else
		return node;

	// Update the balance factor of each node and
	// balance the tree
	node->height = 1 + max(height(node->left), height(node->right));
	int balanceFactor = getBalanceFactor(node);
	if (balanceFactor > 1 && key > node->left->key)
	{
		return rightRotate(node);
	}
	if (balanceFactor >  1 && key > node->left->key)
	{
		node->left = leftRotate(node->left);
		return rightRotate(node);
	}

	if (balanceFactor < -1 && key > node->right->key)
	{
		return leftRotate(node);
	}
	if (balanceFactor < -1 && key < node->right->key) {
		node->right = rightRotate(node->right);
		return leftRotate(node);
	}

	return node;
}

// Node with minimum value
Node *nodeWithMimumValue(Node *node)
{
	Node *current = node;
	while (current->left != NULL)
		current = current->left;
	return current;

}

// Print the tree
void printTree(Node *root, string indent, bool last)
{

	if (root != nullptr){
		cout << indent;
		if (last) {
			cout << " R---- ";
			indent += " ";
		}
		else {
			cout << " L----";
			indent += " | ";
		}
		cout << root->key << endl;
		printTree(root->left, indent, false);
		printTree(root->right, indent, true);
	}
}

int main() {
	Node *root = NULL;
	root = insertNode(root, 33);
	root = insertNode(root, 13);
	root = insertNode(root, 53);
	root = insertNode(root, 9);

	root = insertNode(root, 21);
	root = insertNode(root, 61);
	root = insertNode(root, 8);
	root = insertNode(root, 11);
	printTree(root, "", true);
	system("pause");
	return 0;
}


