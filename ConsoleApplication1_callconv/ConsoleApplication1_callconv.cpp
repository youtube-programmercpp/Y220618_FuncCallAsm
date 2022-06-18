#include <iostream>
extern "C" void SampleAsm();

int __cdecl SampleC(int a, int b, int c)
{
	return a + b + c;
}
int __stdcall SampleC2(int a, int b, int c)
{
	return a + b + c;
}
int __fastcall SampleC3(int a, int b, int c)
{
	return a + b + c;
}
int main()
{
	SampleAsm();
	int n1 = SampleC (1, 2, 3);
	int n2 = SampleC2(1, 2, 3);
	int n3 = SampleC3(1, 2, 3);
	std::cout << n3 << '\n';
}
