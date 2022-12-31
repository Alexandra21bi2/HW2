#include "Task 13.h"
int main() {
	//создание массивов и выделение памяти для них
	const int n = 5;
	int* nums1 = new int[n];
	const int m = 3;
	int* nums2 = new int[m];
	int c = n + m;
	int* result = new int[c];
	std::cout << "Enter an elements of array: " << std::endl;
	for (int i = 0; i < n; i++) //заполнение массива через пользовательсикй ввод
	{
		std::cout << "arr[" << i << "] = ";
		std::cin >> nums1[i];
		

	}
	std::cout << "Enter an elements of array2: " << std::endl;
	for (int i = 0; i < m; i++) //заполнение массива через пользовательсикй ввод
	{
		std::cout << "arr[" << i << "] = ";
		std::cin >> nums2[i];
		
	}

	for (int i = 0; i < n; i++)  //результирующий массив заполняется элементами первого массива
	{
		result[i] = nums1[i];

	}
	
	for (int i = n; i < c; i++) {
		// результирующий массив заполняется элементами первого массива
		
		result[i] = nums2[i-n];
	}
	sort(result, c); //вызов функции
		
	
	//происходит вывод результатирующего массива
	for (int i = 0; i < c; i++)
	{
		std::cout << result[i] << " ";

	}
	return 0;


}