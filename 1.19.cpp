
/* Exercise 1.19: Revise the program you wrote for the exercises in § 1.4.1 (p.
13) that printed a range of numbers so that it handles input in which the first
number is smaller than the second */

#include "stdafx.h"
#include <iostream>

int main()
{
	int x = 0, y = 0;
	std::cin >> x >> y;
	if (x < y) {
		while (x <= y) {
			std::cout << x << std::endl;
			++x;
		}
	} else {
	 while (y <= x) {
		 std::cout << y << std::endl;
		 ++y;
		}
	}
	return 0;
}
