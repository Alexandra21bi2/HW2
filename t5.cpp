#include "t5.h"

int main()
{
	//создаем несколько динамичных массивов
	const int n = 7;
	int* arr = new int[n];
	int* result = new int[n];
	int* tmp_neg = new int[n];
	int* tmp_pos = new int[n];
	int count1 = 0;
	int count2 = 0;
	//заполн€ем исходный массив с помощью пользовательского ввода
	std::cout << "Enter an elements of array: " << std::endl;
	for (int i = 0; i < n; i++)
	{
		std::cout << "arr[" << i << "] = ";
		std::cin >> arr[i];

	}
	for (int i = 0; i < n; i++) {
		if (arr[i] < 0) {
			tmp_neg[count1] = arr[i];//выносим отрицательные элементы в отдельный массив
			count1++;
		}
		else {
			tmp_pos[count2] = arr[i];//неотрицательные элементы записывваютс€ в другой дополнительный массив
			count2++;
		}
	}
	//в результатитрующий массив сначала перенос€тс€ элементы из массивва, содержащего отрицательные элементы 
	for (int i = 0; i < count1; i++) {
		result[i] = tmp_neg[i];
	}
	//присоедин€ютс€ неотрицательные элементы
	for (int i = 0; i < count2; i++) {
		result[count1+i] = tmp_pos[i];
	}
	//происходит вывод результатирующего массива
	for (int i = 0; i < n; i++)
	{
		std::cout  << result[i] << " ";

	}
	return 0;
}