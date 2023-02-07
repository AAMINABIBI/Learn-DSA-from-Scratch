// Array.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

//Traversing in an array
void traverse(int arr[], int n)
{
	
	cout << "The data of array is : " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;;
	}

}

//insertion at start
void insertion_at_start(int arr[], int n)
{
	int pos, element;
	cout << "\nEnter element you want to insert in First Position" << endl;
	cin >> element;
	for (int i = n; i > 0; i--)
	{
		arr[i] = arr[i - 1];
	}
	arr[0] = element;
	n = n + 1;
	cout << "\n\nArray after Insertion :: \n";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}

//insertion at mid
void insertion_at_middle(int arr[], int n)
{
	int pos, element;
	cout << "Enter the positon where  u want  insertion " << endl;
	cin >> pos;
	for (int i = n; i >= pos; i--)
	{
		arr[i] = arr[i - 1];
	}
	cout << "Enter new elemnt " << endl;
	cin >> element;
	arr[pos] = element;
	n++;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}
}

//insertion at end
void insertion_at_end(int arr[], int n, int element)
{

	arr[n] = element;
	n++;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}
}
//updation
void updation(int arr[])
{
	int pos, value;
	cout << "Enter the position where u want updation: " << endl;
	cin >> pos;
	if (pos <= 5)
	{
		cout << "Enter the new value : " << endl;
		cin >> value;
		arr[pos - 1] = value;

		cout << "Updated values are: " << endl;
		for (int i = 0; i < 5; i++)
		{
			cout << arr[i] << endl;
		}
	}
	else{
		cout << "LIMIT OF ARRAY EXCEEDS" << endl;
	}

}

//deletion
//deletion at start
void deletion_at_start(int arr[], int n)
{

	for (int i = 0; i < n; i++)
	{
		if (arr[i] == arr[0])
		{
			for (int j = i; j < n - 1; j++)
			{
				arr[j] = arr[j + 1];

			}
		}
	}
	n--;
	cout << "Upadated data after deletion is: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}
}


//deletion ata mid
void deletion_at_mid(int arr[], int n)
{
	int val;
	cout << "Enter the value u want to delete " << endl;
	cin >> val;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == val)
		{
			for (int j = i; j < n - 1; j++)
			{
				arr[j] = arr[j + 1];

			}
		}
	}
	n--;
	cout << "Upadated data after deletion is: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}
}

//deletion at end
void deletion_at_end(int arr[], int n)
{

	for (int i = 0; i < n; i++)
	{
		if (arr[i] == arr[n - 1])
		{
			for (int j = i; j < n - 1; j++)
			{
				arr[j] = arr[j + 1];

			}
		}
	}
	n--;
	cout << "Upadated data after deletion is: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}
}

//searching
void searching(int arr[])
{
	int val, count = 0;
	cout << "Enter the value u want to search:  " << endl;
	cin >> val;
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] == val)
		{
			cout << "Value founded at " << arr[i] << " location " << endl;
			count++;
		}
	}
	if (count == 0)
	{
		cout << "Value not found" << endl;

	}
}



//main

void main()
{

	int arr[50], n;
	int  element;
	cout << "Enter the size of array" << endl;
	cin >> n;

	cout << "Enter the data of array : " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	traverse(arr, n);
	insertion_at_start(arr, n);
	insertion_at_middle(arr, n);
	cout << "Enter new elemnt " << endl;
	cin >> element;
	cout << " THE LIST OF ARRAY AFTER INSERTION " << endl;
	insertion_at_end(arr, n, element);
	updation(arr);
	deletion_at_start(arr, n);  
	deletion_at_mid(arr, n);
	deletion_at_end(arr, n);

	searching(arr);
	system("pause");
	return;

}

