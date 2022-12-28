#include "t7.h"

int main()
{
    const int n = 9;
    double arr[n]; //задается размер массива
    std::cout << "Enter an elements of array: " << std::endl;
    for (int i = 0; i < n; ++i) //заполняется массив с помощью пользовательского ввода
    {
        std::cout << "arr[" << i << "]=";
        std::cin >> arr[i];

    }
    int count = 0; //счетчик для подсчета перестановок
    
    for (int l = 0; l < n; l++)
    {
        if (l == 0 && arr[l] < arr[l + 1]) count++;
        else if (l > 0 && l < n - 1 && arr[l] < arr[l - 1] && arr[l] < arr[l + 1]) count++;
        else if (l == n - 1 && arr[l] < arr[l - 1]) count++;
    }
    std::cout << "The quantity of minimums: " << count << std::endl;

    return 0;
}