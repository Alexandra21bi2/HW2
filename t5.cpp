#include "t5.h"

int main()
{
	//������� ��������� ���������� ��������
	const int n = 7;
	int* arr = new int[n];
	int* result = new int[n];
	int* tmp_neg = new int[n];
	int* tmp_pos = new int[n];
	int count1 = 0;
	int count2 = 0;
	//��������� �������� ������ � ������� ����������������� �����
	std::cout << "Enter an elements of array: " << std::endl;
	for (int i = 0; i < n; i++)
	{
		std::cout << "arr[" << i << "] = ";
		std::cin >> arr[i];

	}
	for (int i = 0; i < n; i++) {
		if (arr[i] < 0) {
			tmp_neg[count1] = arr[i];//������� ������������� �������� � ��������� ������
			count1++;
		}
		else {
			tmp_pos[count2] = arr[i];//��������������� �������� ������������� � ������ �������������� ������
			count2++;
		}
	}
	//� ����������������� ������ ������� ����������� �������� �� ��������, ����������� ������������� �������� 
	for (int i = 0; i < count1; i++) {
		result[i] = tmp_neg[i];
	}
	//�������������� ��������������� ��������
	for (int i = 0; i < count2; i++) {
		result[count1+i] = tmp_pos[i];
	}
	//���������� ����� ����������������� �������
	for (int i = 0; i < n; i++)
	{
		std::cout  << result[i] << " ";

	}
	return 0;
}