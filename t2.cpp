#include "t2.h"



int main()
{
  int n; // �������� ������ �������
    std:: cout << "Enter integer value: ";
   std:: cin >> n; // ��������� �� ������������ ������� �������

    int* array = new int[n]; // ��������� ������ ��� �������
    std::cout << "Enter an elements of array: " << std::endl;
    for (int i = 0; i < n; i++)//���������� ������� ���������������� ������
    {
        std::cout << "arr[" << i << "] = ";
        std::cin >> array[i];

    }
    
    std::cout << "Array after changes: ";
    change(array, n);//����� �������


    return 0;
}