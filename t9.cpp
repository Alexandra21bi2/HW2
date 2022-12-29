#include "t9.h"
int main()
{
	//создаем несколько динамичных массивов
	const int n = 15;
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
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < count1 - i - 1; j++)
				{
					if (tmp_neg[j] > tmp_neg[j + 1])  //сравниваем элементы
					{//мен€ем элементы местами
						int temp = tmp_neg[j + 1];
						tmp_neg[j + 1] = tmp_neg[j];
						tmp_neg[j] = temp;
					}
				}

			}
		}
		else {
			tmp_pos[count2] = arr[i];//неотрицательные элементы записывваютс€ в другой дополнительный массив
			count2++;
			for (int i = 0; i < n; i++) {
				for (int l = 0; l < count2 - i - 1; l++)
				{
					if (tmp_pos[l] < tmp_pos[l + 1])  //сравниваем элементы
					{//мен€ем элементы местами
						int temp = tmp_pos[l + 1];
						tmp_pos[l + 1] = tmp_pos[l];
						tmp_pos[l] = temp;
					}
				}
			}
				
			
			
		}
	}
	//в результатитрующий массив сначала перенос€тс€ элементы из массивва, содержащего отрицательные элементы 
	for (int i = 0; i < count1; i++) {
		result[i] = tmp_neg[i];
	}
	//присоедин€ютс€ неотрицательные элементы
	for (int i = 0; i < count2; i++) {
		result[count1 + i] = tmp_pos[i];
	}
	//происходит вывод результатирующего массива
	for (int i = 0; i < n; i++)
	{
		std::cout << result[i] << " ";

	}
	return 0;
}
