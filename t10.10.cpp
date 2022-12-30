#include "t10.h"
void change(double* array1, double* array2, int n, int n2, int ind1, int ind2 ) {
	//перемена местами элементов через индексы
	double y = array1[ind1];
	array1[ind1] = array2[ind2];
	array2[ind2] = y;
	

	
	std::cout << "The first array: " << std::endl;
	for (int i = 0; i < n; i++)//вывод массива
	{
		std::cout << array1[i] << " ";

	}
	std::cout << std::endl;
	std::cout << "The second array: " << std::endl;
	for (int i = 0; i < n2; i++)//вывод массива
	{
		std::cout << array2[i] << " ";

	}

}
