// ConsoleApplication1.cpp : Defines the entry point for the console application.
//
//dynamic memory allocation in 2D array

#include "stdafx.h"
#include<iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	cout << "enter rows";
	int row;
	cin >> row;
	cout << "enter col";

	int col;
	cin >> col;

	//creation
	int **arr = new int*[row];
	for (int i = 0; i < row; i++)
	{
		arr[i] = new int[col];
	}


	cout << "Enter data";
	//taking input;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cin >> arr[i][j];
		}
	}

	//taking output
	cout << "output is";
	cout << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout<< arr[i][j]<<" ";
		}
		cout << endl;
	}

	//release memory
	for (int i = 0; i < row; i++)
	{
		delete arr[i];
	}
	delete arr;
	cout << "Memeory released" << endl;

	cout << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << "donre";
	system("pause");
	return 0;
}

