// ConsoleApplication18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Sales_item.h" // Total revenue, number of copies sold, average sales price for a book

/*Write a program that reads two Sales_item objects that
have the same ISBN and produces their sum.*/

int main()
{
	Sales_item item1, item2;
	std::cin >> item1, item2;
	if (item1.isbn() == item2.isbn()) {
		std::cout << item1 + item2 << std::endl;
		return 0;
	}
else {
	std::cerr << "Different ISBNs" << std::endl;
	return -1;
	}
    return 0;
}

