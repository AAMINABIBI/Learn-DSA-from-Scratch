// stack using array.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

struct stack{
	int top=-1;
	int arr[100];
	void push(int x);
	void pop();
	void peek();


};
void push( int x)
{
	stack s;
	if (s.top >=100)
	{
		cout << "overflow";
		return;
	}
	s.top++;
	s.arr[s.top] = x;
}
void pop()
{
	stack s;
	if (s.top < 0)
	{
		cout << "Underflow" << endl;
		return;
	}
	int temp=s.arr[s.top];
	s.top--;
	cout << "popped elemet is" << temp;

}

void peek()
{
	stack s;
	cout << s.arr[s.top];



}
int _tmain(int argc, _TCHAR* argv[])
{
	stack s;
	s.push(10);
	s.push(22);
	s.push(3);
	s.push(33);
	s.push(1);

	s.pop();

	system("pause");
	return 0;
}

