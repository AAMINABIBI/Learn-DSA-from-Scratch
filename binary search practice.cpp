// binary search practice.cpp : Defines the entry point for the console application.
////find the first and last occurance of an element in array

#include "stdafx.h"
#include<iostream>
using namespace std;

//int find_first_occ(int arr[5], int n, int element)
//{
//	int ans = -1;
//	
//	int start = 0;
//	int end = n-1;
//	int mid = (start + end) / 2;
//	
//	while (start <= end)
//	{
//		if (arr[mid] == element)
//		{
//			ans = mid;
//			end = mid - 1;
//		}
//		if (arr[mid] < element)
//		{
//			start = mid + 1;
//		}
//		if (arr[mid] > element)
//		{
//			end = mid - 1;
//		}
//		mid = (start + end) / 2;
//
//	}
//	return ans;
//}
//
//int find_last_occ(int arr[5], int n, int element)
//{
//	int ans = -1;
//	
//	int start = 0;
//	int end = n - 1;
//	int mid = (start + end) / 2;
//	
//	while (start <= end)
//	{
//		if (arr[mid] == element)
//		{
//			ans = mid;
//			start = mid + 1;
//		}
//		if (arr[mid] < element)
//		{
//			start = mid + 1;
//		}
//		if (arr[mid] > element)
//		{
//			end = mid - 1;
//		}
//		mid = (start + end) / 2;
//
//	}
//	return ans;
//}
//int _tmain(int argc, _TCHAR* argv[])
//{
//
//	int arr[5] = { 1, 2, 2, 2, 2 };
//	int element;
//	cout << "Enter an element" << endl;
//	cin >> element;
//	cout << "First occ is" << find_first_occ(arr, 5, element)<<endl;
//	cout << "last occ is" << find_last_occ(arr, 5, element)<<endl;
//
//	system("pause");
//	return 0;
//}

//finding peak element index in array

int peak(int arr[5],int n)
{
	
	int start = 0;
	int end = n - 1;
	int mid = start + (end - start) / 2;
	while (start < end)
	{
		if(arr[mid]<arr[mid+1])
		{
			start=mid + 1;
		}
		else{
			end = mid;
		}
		 mid = start + (end - start) / 2;
	
	}	
	return start;
}

int main()
{
	int arr[5] = { 1, 2, 10, 2, 1 };
	cout << "peak element is at" << peak(arr,5) << endl;
	system("pause");
	return 0;
}