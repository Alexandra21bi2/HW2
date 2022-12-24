#include "t6.h"



int main() {

	float arr[14]; //задается массив конкретного размера 
	int count = 0;
	for (int i = 0; i < 14; ++i) //заполняется массив с помощью пользовательского ввода
	{
		std::cout << "arr[" << i << "]=";
		std::cin >> arr[i];

	}

	int half = 14 / 2; //определяем половину от массива
	int pol = half + 14 % 2;

	for (int i = 0; i < half; i++) 
	{
		//перестановка элементов массива
		int с = arr[i];
		arr[i] = arr[pol + i]; //с помощью индексов происходит перстановка половинок массива
		arr[pol + i] = с;
		count++;
	}

	for (int i = 0; i < 14; i++) 
	{
		std::cout << arr[i] << " "; //вывод массива
	}

	std::cout << "\n";
	std::cout << "The quantity of permutation: " << count;

	return 0;
}