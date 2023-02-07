// REcursion problems.cpp : Defines the entry point for the console application.
//


//////////////////////////////////array is sorted


#include "stdafx.h"
#include<iostream>
using namespace std;

//bool isSorted(int ary[], int size)
//{
//	if (size == 0 || size == 1)
//	{
//		return true;
//	}
//	if (ary[0] > ary[1])
//		return false;
//	bool remianing = isSorted(ary + 1, size - 1);
//	return remianing;
//}
//
//
//int _tmain(int argc, _TCHAR* argv[])
//{
//	int ary[5] = { 1, 4, 5, 7, 10 };
//	int size = 5;
//	if (isSorted(ary, size))
//	{
//		cout << "array sorted"<<endl;
//	}
//	
//	else{
//		cout << "Not sorted" << endl;
//	}
//	system("pause");
//	return 0;
//}


///////////////////////////////sum of array

//loop
//
//
//int SumAry(int ary[], int size)
//{
//	if (size == 0)
//	{
//		return 0;
//	}
//	if (size == 1)
//	{
//		return ary[0];
//	}
//	int remaining = SumAry(ary + 1, size - 1);
//	remaining = ary[0] + remaining;
//	return remaining;
//}
//
//int main()
//{
//	int sum=0;
//	int arr[6] = { 1, 2, 3, 4, 45, 5 };
//	for (int i = 0; i < 4; i++)
//	{	  
//		sum = arr[i] + sum;
//	}
//	cout << sum;
//
//	cout << "Through Recursion" << endl;
//	int size = 6;
//	sum = SumAry(arr, size);
//	cout << sum;
//	system("pause");
//	return 0;
//}
/////////////////////////////////linear search
//bool LiSearch(int ary[6], int size, int key)
//{
//	
//	if (size == 0)
//		return false;
//	if (key == ary[0])
//		return true;
//     LiSearch(ary + 1, size - 1, key);
//}
//int main()
//{
//	int key = 4;
//	int ary[6] = { 1, 2, 3, 4, 5, 6 };
//	int size = 6;
//	if (LiSearch(ary, size, key))
//		cout << "Element found" << endl;
//	else
//		cout << "Element not found" << endl;
//
//	
//	system("pause");
//	return 0;
//}

///////////////////////////////////////Binary Search
bool BiSearch(int ary[], int start, int key,int end)
{
	if (start
		>end)
		return false;
	int mid = start + (end - start) / 2;
	
	if (ary[mid] == key)
		return true;
if (mid > key)
{
	return BiSearch(ary,mid-1, key,end);
}
if (mid < key)
{
	return BiSearch(ary, mid + 1, key, end);
}
}

int main()
{
	int size = 6;
	int mid = (1 + size) / 2;
	int key = 00;
	int ary[6] = { 1, 2, 3, 4, 5, 6 };
	
	if (BiSearch(ary, 0, 5,key))
		cout << "Element found" << endl;
	else
		cout << "Element not found" << endl;

	
	system("pause");
	return 0;
}


