// TemplateSTL.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

template <typename T>
T add(T a,T b)                       // Reduces the need for decalaring the same function with different datatypes and return values
{
	return a + b;
}


int main()
{
	int x = 10;
	int y = 20;
	float z = 17.5;
	float v = 17.5;
	cout << add <int>(x, y) << endl;
	cout << add <float>(z, v) << endl;
	system("pause");
    return 0;
}

