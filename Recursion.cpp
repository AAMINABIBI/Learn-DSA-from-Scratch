// Recursion.cpp : Defines the entry point for the console application.
//


//whwen functions calls itself.
//always a base case to stop function call(return is mandatory)


//factorial

//#include "stdafx.h"
//#include<iostream>
//using namespace std;
//int fact(int n, int f)
//{
//	if (n == 0)
//	{
//		return f;
//	}
//	f = f*n;
//	fact(n-1,f);
//
//}
//
//int _tmain(int argc, _TCHAR* argv[])
//{
//	int n;
//	cin >> n;
//
//	int f = 1;
//	int ans = fact(n, 1);
//	cout << "fact is" << ans;
//	system("pause");
//	return 0;
//}
//find 2^n;

#include "stdafx.h"
#include<iostream>
using namespace std;
void pow(int x,int power,int n )
{
	
	if (power == x)
	{
		cout << n;
		return ;
	}
	
	n=2*x;
	 pow(x + 1,power,n);

}

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "enter pow";
	int power;
	cin >> power;
	
	
	pow(1, power,0);
	system("pause");
	return 0;
}
