#include "t4.h"


int main()
{
   const int n = 12;
    double arr[n]; //�������� ������ �������
    std:: cout << "Enter an elements of array: " << std::endl;
    for (int i = 0; i < n; ++i) //����������� ������ � ������� ����������������� �����
    {
        std::cout << "arr[" << i << "]=";
        std::cin >> arr[i];
        
    }

   //��������� 12 ����� �� ������ ����� �� ���� ������
    int count = 0; //�������� ������� ��� ���������� ���������� ������������
    for (int i = 0; i < n; ++i)
    {
        
        for (int j = n - 1; j > i; --j)
        {
            if (arr[j] > arr[j - 1]) //��������� ��������� �������
            {
                //���������� ������������ ��������� � ���������� �������
                double d = arr[j - 1]; 
                arr[j - 1] = arr[j]; 
                arr[j] = d;

                ++count;// � �������� ����������� ���������� ������������
            }
        }
    }

    std::cout << "\n\n";
    //����� ������� � ������� ����������
    for (int k = 0; k < 12; k++)
    {
        std::cout << arr[k] << " ";
    }
    std::cout << "\n\n"; //������� �� ����� �������
    std::cout << "The quantity of permutation: " << count; //����� ��������

    return 0;
}