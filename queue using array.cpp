// queue using array.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class queue{
public:
	int arr[10000];
	int front;
	int rear;
	int size;
	queue()
	{
		front = 0;
		rear = 0;
		
	}
	void enque(int data);
	void deque();
	void isempty();
	void isfull();
};

void queue ::enque(int data){
	if (rear == size)
	{
		cout << "array is full" << endl;
	}

	arr[rear] = data;
	rear++;
}
void queue::deque(){
	if (front == rear)
	{
		cout << "array is empty" << endl;
	}
	arr[front] = -1;
	front++;
	if (front == rear)
	{
		front = 0; rear = 0;
	}
}

void queue::isempty(){
	if (front == rear)
	{
		cout << "array is empty" << endl;
	}
	else{
	cout << "array is not empty" << endl;

	}
}
void queue::isfull(){
	if (rear == size)
	{
		cout << "array is full" << endl;
	}
	else{
		cout << "array is not full" << endl;
	}

}
int _tmain(int argc, _TCHAR* argv[])
{
	queue q;
	q.enque(3);
	q.enque(23);
	q.enque(34);
	q.enque(322);
	q.enque(83);

	q.deque();
	q.isempty();
	q.isfull();



	system("pause");
	return 0;
}

