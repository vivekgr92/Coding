// Cnote.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<string>
#include <type_traits>

int main() {
	if (std::is_signed<char>::value) {
		std::cout << std::is_same<char, signed char>::value;
	}
	else {
		std::cout << std::is_same<char, unsigned char>::value;
	}
	system("pause");
}
