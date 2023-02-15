// selection sort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
void swap(int a, int b)
{
	int temp = 0;
	temp = a;
	a = b;
	b = temp;
}
void selectionSort(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++) {
		int minIndex = i;

		for (int j = i + 1; j<n; j++) {

			if (arr[j] < arr[minIndex])
				minIndex = j;

		}
		swap(arr[minIndex], arr[i]);
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}
}


void bubblesort(int arr[], int n)
{
	int start = 1;
	int end = n;
	while (start <= end)
	{
		for (int i = 0; i < n - 1; i++)
		{
			int j = i + 1;
			if (arr[j]<arr[i])
			{
				swap(arr[i], arr[j]);
			}
		}
		end=end - 1;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}
}
int _tmain(int argc, _TCHAR* argv[])
{
	int arr[9] = {29,72,98,13,87,66,52,56,31};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << n<<endl;
	//selectionSort(arr, n);
	bubblesort(arr, n);
	system("pause");
	return 0;
}

