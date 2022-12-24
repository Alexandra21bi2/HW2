#include "Header.h"


int main()
{
	int a = 8;
	int b = 7;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	swap(&a, &b); // Вызов функции с использованием адресов фактических переменных
	std::cout << "a = " << a << ", b = " << b << std::endl;
}