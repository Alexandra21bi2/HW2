#include "t6.h"



int main() {

	float arr[14]; //�������� ������ ����������� ������� 
	int count = 0;
	for (int i = 0; i < 14; ++i) //����������� ������ � ������� ����������������� �����
	{
		std::cout << "arr[" << i << "]=";
		std::cin >> arr[i];

	}

	int half = 14 / 2; //���������� �������� �� �������
	int pol = half + 14 % 2;

	for (int i = 0; i < half; i++) 
	{
		//������������ ��������� �������
		int � = arr[i];
		arr[i] = arr[pol + i]; //� ������� �������� ���������� ����������� ��������� �������
		arr[pol + i] = �;
		count++;
	}

	for (int i = 0; i < 14; i++) 
	{
		std::cout << arr[i] << " "; //����� �������
	}

	std::cout << "\n";
	std::cout << "The quantity of permutation: " << count;

	return 0;
}