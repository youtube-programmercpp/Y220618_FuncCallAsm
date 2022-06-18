class Test {
	int n;
public:
	Test(int n)
		: n(n)
	{
	}
	int f(int a, int b, int c) const
	{
		return a + b + c + n;
	}
	static int f2(int a, int b, int c)
	{
		return a + b + c;
	}
};
#include <stdint.h>
int main()
{
	Test x(100);
	Test y(500);
	//const auto y = x.f(1, 2, 3);
	int (*p)(int, int, int);
	//p = Test::f2;
	//const auto y2 = (*p)(1, 2, 3);
	int (Test::*q)(int, int, int) const = &Test::f;
	//const auto y3 = (x.*q)(1, 2, 3);
	(void*&)p = *(void**)(&q);
	const auto y4 = (*p)(1, 2, 3);
}
