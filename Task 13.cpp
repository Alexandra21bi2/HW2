#include "Task 13.h"
int main() {
	//�������� �������� � ��������� ������ ��� ���
	const int n = 5;
	int* nums1 = new int[n];
	const int m = 3;
	int* nums2 = new int[m];
	int c = n + m;
	int* result = new int[c];
	std::cout << "Enter an elements of array: " << std::endl;
	for (int i = 0; i < n; i++) //���������� ������� ����� ���������������� ����
	{
		std::cout << "arr[" << i << "] = ";
		std::cin >> nums1[i];
		

	}
	std::cout << "Enter an elements of array2: " << std::endl;
	for (int i = 0; i < m; i++) //���������� ������� ����� ���������������� ����
	{
		std::cout << "arr[" << i << "] = ";
		std::cin >> nums2[i];
		
	}

	for (int i = 0; i < n; i++)  //�������������� ������ ����������� ���������� ������� �������
	{
		result[i] = nums1[i];

	}
	
	for (int i = n; i < c; i++) {
		// �������������� ������ ����������� ���������� ������� �������
		
		result[i] = nums2[i-n];
	}
	sort(result, c); //����� �������
		
	
	//���������� ����� ����������������� �������
	for (int i = 0; i < c; i++)
	{
		std::cout << result[i] << " ";

	}
	return 0;


}