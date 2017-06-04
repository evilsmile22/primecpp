// ConsoleApplication18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Sales_item.h" // Total revenue, number of copies sold, average sales price for a book




int main()
{
	Sales_item item;
		while (std::cin >> item)
			std::cout << item << std::endl;
    return 0;
}

