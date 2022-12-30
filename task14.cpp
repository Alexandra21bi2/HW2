#include "task14.h"
int main()
{
	const int N = 7;
	int* array = new int[N];
	//заполняем исходный массив с помощью пользовательского ввода
	std::cout << "Enter an elements of array: " << std::endl;
	for (int i = 0; i < N; i++)
	{
		std::cout << "array[" << i << "] = ";
		std::cin >> array[i];

	}
	profit(array, N);
	}

