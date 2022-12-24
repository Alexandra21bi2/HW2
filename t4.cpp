#include "t4.h"


int main()
{
   const int n = 12;
    double arr[n]; //задаетс€ размер массива
    std:: cout << "Enter an elements of array: " << std::endl;
    for (int i = 0; i < n; ++i) //заполн€етс€ массив с помощью пользовательского ввода
    {
        std::cout << "arr[" << i << "]=";
        std::cin >> arr[i];
        
    }

   //¬ыполн€ет 12 шагов во втором цикле за один запуск
    int count = 0; //вводитс€ счетчик дл€ вычислени€ количества перестановок
    for (int i = 0; i < n; ++i)
    {
        
        for (int j = n - 1; j > i; --j)
        {
            if (arr[j] > arr[j - 1]) //сравнение элементов массива
            {
                //происходит перестановка элементов в правильном пор€дке
                double d = arr[j - 1]; 
                arr[j - 1] = arr[j]; 
                arr[j] = d;

                ++count;// к счетчику добавл€етс€ количество перестановок
            }
        }
    }

    std::cout << "\n\n";
    //вывод массива в пор€дке уменьшени€
    for (int k = 0; k < 12; k++)
    {
        std::cout << arr[k] << " ";
    }
    std::cout << "\n\n"; //переход на новую строчку
    std::cout << "The quantity of permutation: " << count; //вывод счетчика

    return 0;
}