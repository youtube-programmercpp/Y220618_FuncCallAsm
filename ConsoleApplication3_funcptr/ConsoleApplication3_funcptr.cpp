#include <iostream>
#include "function_f.h"

int main()
{
	int (*p)(int, int, int) = (int (*)(int, int, int))f;
	const int n= (*p)(1, 2, 3);
	std::cout << n << '\n';
}
