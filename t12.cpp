#include "t12.h"
int main() {
    const int n = 4;
    const int m = 6;
    int arr[4][6] =
    {
        {1,3,6,8,9, 13},
        {7,	15,89, 43, 2, 25},
        {90, 67, 12, 77, 11, 41},
        {37, 89, 19, 0, 1, 7}
    };


    int ind = 0; // ���������� ���  ������� ������  � ������������ ������
    int maxSum = 0; // ���������� ���  ������������ �����
    int ind2 = 0; //���������� ��� ������� ������ � ����������� ������
    int minSum = 2000; //���������� ��� ����������� �����

    for (int i = 0; i < n; i++) {

        int sum = 0;

        // ��������� ����� ������
        for (int j = 0; j < m; j++) {

            sum += arr[i][j]; //������������ ���� �����

        }

        if (sum > maxSum) {

            maxSum = sum; //���������� �������� ������������ �����
            ind = i; //������������ �������� ������� ������ � ������. ������ �����������

        }

    }
    for (int i = 0; i < n; i++)
    {
        int sum2 = 0;
        for (int j = 0; j < m; j++)
            sum2 += arr[i][j]; //������������ ���� �����

        if (sum2 < minSum)
        { //���������� �������� ����������� �����
            minSum = sum2;
            ind2 = i; //������������ ���������� �������� ������� ������ � ���.������        }
        }
        for (int i = 0; i < n; i++) //����� �������
        {
            for (int j = 0; j < m; j++)
                std::cout << arr[i][j] << " ";
            std::cout << std::endl;

        }


        //����� ������� ����� � ���� 
        std::cout << "The row with max sum : " << ind;

        std::cout << ", sum= " << maxSum << std::endl;
        std::cout << "The row with min sum: " << ind2;

        std::cout << ", sum= " << minSum;
        return 0;
    }
}

