// ConsoleApplication18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Sales_item.h" // Total revenue, number of copies sold, average sales price for a book

/*Write a program that reads several transactions for the same
ISBN. Write the sum of all the transactions that were read.*/

int main()
{
	Sales_item total;
	if (std::cin >> total)
	{
		Sales_item trans;
		while (std::cin >> trans)
		{
			if (total.isbn() == trans.isbn())
			{
				total += trans;
			}
			else
			{
				std::cout << total << std::endl;
				total = trans;
			}
		}
		std::cout << total << std::endl; //in case we input an invalid input we need to print the results outside while
		
	}

	else
	{
		std::cerr << "error" << std::endl;
		return -1;
	}
	return 0;
}


	
	
