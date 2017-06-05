// ConsoleApplication18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Sales_item.h" // Total revenue, number of copies sold, average sales price for a book

/*Write a program that reads several transactions and counts
how many transactions occur for each ISBN.*/

int main()
{
	Sales_item trans1;
	if (std::cin >> trans1)
	{
		Sales_item trans2;
		int cnt = 1;
		while (std::cin>>trans2)
		{
			if (trans1.isbn() == trans2.isbn())
			{
				++cnt;
			}
			else
			{
				std::cout << cnt;
				cnt=1;
				trans1 = trans2;
			}
		}
	}
	return 0;
}


	
	
