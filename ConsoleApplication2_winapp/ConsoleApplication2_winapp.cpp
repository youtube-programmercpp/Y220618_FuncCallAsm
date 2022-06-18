#define	_CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>

int main()
{
	char buf[256];
	sprintf(buf, "%d", 123);
	wsprintfA(buf, "%d", 123);
	MessageBoxA(nullptr, buf, "Result", 0);
}
