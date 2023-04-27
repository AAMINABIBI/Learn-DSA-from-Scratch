// queue STL.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<queue>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	queue<int> q;
	q.push(13);
	q.push(133);
	q.push(143);
	q.push(137);
	q.push(1379);
	q.push(123);
	cout<<"Front is"<<q.front()<<endl;
	q.pop();
	cout << "front is" << q.front() << endl;
	cout<<"LAst element is"<<q.back()<<endl;

	cout<<"if queue is empty or not"<<q.empty()<<endl;
	cout << "size of quque is" << q.size() << endl;
	system("pause");
	return 0;
}

