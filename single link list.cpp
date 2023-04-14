// single link list.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class node{
public:
	int data;
	node* next;
	//node *prev;
};
void traverse(node**head)
{
	node*temp=NULL;
	temp = new node;
	temp = *head;
	while (temp != NULL)
	{
		cout << temp->data<<endl;
		temp = temp->next;
	}
}

void delete_at_start(node**head)
{
	node*temp;
	temp = *head;
	*head =temp->next;
	delete(temp);
}
void delete_at_pos(node**head, int pos)
{
	node*temp;
	temp = *head;
	node*prev1=NULL;
	for (int i = 1; i < pos; i++)
	{
		prev1 = temp;
		temp = temp->next;
	}
	prev1->next = temp->next;
	delete(temp);

}
void delete_at_end(node**head)
{
	node*temp;
	temp = *head;
	node* prev=NULL;
	while (temp->next != NULL)
	{
		
		prev = temp;
		temp = temp->next;
	}
	prev->next = NULL;
	delete(temp);

}
void insert_at_start(node** head)
{
	int n;
	node*newnode=NULL;
	newnode = new node;
	newnode->next = *head;	
	*head=newnode;
	cout << "Enter data of newnode";
	cin >> n;
	newnode->data = n;
}
void insert_after_pos(node**head)
{
	int n;
	node*newnode = NULL;
	newnode = new node;
	node*temp=*head;
	cout << "Enter the position where you want to insert" << endl;
	cin >> n;
	for (int i = 1; i < n; i++)
	{
		temp = temp->next;
	}
	newnode->next = temp->next;
	temp->next = newnode;
	cout << "Enter newnode data" << endl;
	cin >> newnode->data;
}
void insert_at_end(node**head)
{
	node*newnode=NULL;
	newnode = new node;
	node*temp;
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	cout << "Enter newnode data" << endl;
	cin >> newnode->data;
	temp->next = newnode;
	newnode->next = NULL;
}
void insert_before_pos(node**head)
{
	node*temp = NULL;
	temp = new node;
	temp = *head;
	int pos;
	node* newnode=NULL;
	newnode = new node;
	cout << "enter a pos" << endl;
	cin >> pos;
	cout << "Enter newnode data" << endl;
	cin>>newnode->data;
	
	if (temp==NULL)
	{
		cout << "position not found" << endl;
	}
	else{
		for (int i = 1; i < pos - 1; i++)

		{
			temp = temp->next;

		}
		newnode->next = temp->next;
		temp->next = newnode;
	}
}void delete_before_pos(node**head)
{
	node*temp=*head;
	node*temp2 = *head;
	node*del_node;
	int pos;
	cout << "Enter position" << endl;
	cin >> pos;
	if (pos==1)
	{
		cout << "there is nothing before 1st position" << endl;
	}
	else if (pos == 2)
	{
		node *head = temp->next;
		delete(temp);
	}
	else    {

		for (int i = 1; i < (pos - 1); i++)
		{
			temp = temp->next;
		}
		for (int i = 1; i < (pos - 2); i++)
		{
			temp2 = temp2->next;
		}
		del_node = temp;
		temp2->next = temp->next;
		delete(del_node);
	}
}
void del_after_pos(node**head)
{
	int pos;
	node*temp = *head;
	node*del_node;
	cout << "enter pos" << endl;
	cin >> pos;

	for (int i = 1; i < pos; i++)
	{
		temp = temp->next;
	}
	if (temp->next == NULL)
	{
		cout << "Nothing to delete" << endl;
	}
	else{

		del_node = temp->next;
		temp->next = temp->next->next;
		delete(del_node);
	}
}
int _tmain(int argc, _TCHAR* argv[])
{
	int pos;
	node*one;
	node*head;
	node *two;
	node*three;
	node*four;

	one =new node;
	two = new node;
	three = new node;
	four = new node;
	one->data = 0;
	two->data = 5;
	three->data = 4;
	four->data = 65;

	one->next = two;
	//one->prev = head;
	two->next = three;
	//two->prev = one;
	three->next = four;
	/*three->prev = two;*/
	four->next = NULL;
	//four->prev = three;
	head = one;
	traverse(&head);
	
	cout << "************Delete at start**********" << endl;
	delete_at_start(&head);
	traverse(&head);

	
	cout << "************Delete at pos**********" << endl;
	cout << "Enter position where you wnnt to delete" << endl;
	cin >> pos;
	delete_at_pos(&head,pos);
	traverse(&head);

	cout << "************Delete at end**********" << endl;
	delete_at_end(&head);
	traverse(&head);



	cout << "******************************************INsertion**************************" << endl;
	cout << "***********Insertion at start*******" <<endl;
	insert_at_start(&head);
	traverse(&head);


	cout << "***********Insertion after a pos*******" << endl;
	insert_after_pos(&head);
	traverse(&head);

	/*inserting before a position*/
	cout << "***********Insertion before a pos*******" << endl;
	insert_before_pos(&head);
	traverse(&head);

	cout << "***********Insertion at end*******" << endl;
	insert_at_end(&head);
	traverse(&head);



	cout << "***********deletion before a pos*******" << endl;
	delete_before_pos(&head);
	traverse(&head);

	cout << "***********deletion after a pos*******" << endl;
	del_after_pos(&head);
	traverse(&head);
	
	system("pause");
	return 0;
}