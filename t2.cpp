#include "t2.h"



int main()
{
  int n; // задается размер массива
    std:: cout << "Enter integer value: ";
   std:: cin >> n; // получение от пользователя размера массива

    int* array = new int[n]; // Выделение памяти для массива
    std::cout << "Enter an elements of array: " << std::endl;
    for (int i = 0; i < n; i++)//заполнение массива пользовательским вводом
    {
        std::cout << "arr[" << i << "] = ";
        std::cin >> array[i];

    }
    
    std::cout << "Array after changes: ";
    change(array, n);//вызов функции


    return 0;
}