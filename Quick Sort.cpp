//// Quick sort in C++
#include"stdafx.h"
#include <iostream>
using namespace std;


void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void printArray(int array[], int size) {
	int i;
	for (i = 0; i < size; i++)
		cout << array[i] << " ";
	cout << endl;
}


int partition(int array[], int low, int high) {


	int pivot = array[high];
	int p = (low - 1);

	for (int q = low; q < high; q++) {
		if (array[q] <= pivot) {
			p++;
			swap(&array[p], &array[q]);
		}
	}

	swap(&array[p + 1], &array[high]);

	return (p + 1);
}

void quickSort(int array[], int low, int high) {
	if (low < high) {
		int pi = partition(array, low, high);
		quickSort(array, low, pi - 1);
		quickSort(array, pi + 1, high);
	}
}

int main() {
	int data[] = { 8, 7, 6, 1, 0, 9, 2 };
	int n = sizeof(data) / sizeof(data[0]);

	cout << "Unsorted Array: \n";
	printArray(data, n);
	quickSort(data, 0, n - 1);

	cout << "Sorted array in ascending order: \n";
	printArray(data, n);
	system("pause");
	return 0;
}


//Activity related to nquick sort:
//
//
//#include "stdafx.h"
//#include <iostream>
//#include<string>
//using namespace std;
//
//
//void swap(string *a, string *b) {
//	string temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//void printArray(string array[], int size) {
//	int i;
//	for (i = 0; i < size; i++)
//		cout << "\t" << array[i] << " ";
//	cout << endl;
//}
//
//
//int partition(string array[], int low, int high) {
//
//
//	string pivot = array[high];
//	int p = (low - 1);
//
//	for (int q = low; q < high; q++) {
//		if (array[q] <= pivot) {
//			p++;
//			swap(&array[p], &array[q]);
//		}
//	}
//
//	swap(&array[p + 1], &array[high]);
//
//	return (p + 1);
//}
//
//void quickSort(string array[], int low, int high) {
//	if (low < high) {
//		int pi = partition(array, low, high);
//		quickSort(array, low, pi - 1);
//		quickSort(array, pi + 1, high);
//	}
//}
//
//int main() {
//	string data[] = { "Areeba", "Rida", "Ayesha", "Laiba", "Irum" };
//	int n = sizeof(data) / sizeof(data[0]);
//
//	cout << " Unsorted Array:           \n" << endl;
//
//	printArray(data, n);
//	quickSort(data, 0, n - 1);
//
//	cout << "\n Sorted array in ascending order:               \n" << endl;
//	printArray(data, n);
//	system("pause");
//	return 0;
//}