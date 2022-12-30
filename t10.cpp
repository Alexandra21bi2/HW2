#include "t10.h"
int main()
{
	double arr[] = {8.9, 5.6, 0.1, 3.5, 7.3};
	
	
	double arr2[] = { 1.2, 5.5, 7.9, 0.7};
	
	int n = sizeof(arr) / sizeof(arr[0]);
	double max1 = 0;
	int index1 = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max1) {
			max1 = arr[i];
			index1 = i;
		}
	}

	int n2 = sizeof(arr2) / sizeof(arr2[0]);
	double max2 = 0;
	int index2 = 0;
	for (int i = 0; i < n2; i++)
	{
		if (arr2[i] > max2) {
			max2 = arr2[i];
			index2 = i;
		}
	}
	
	
	 change(arr, arr2,  n, n2,  index1,  index2);
	return 0;
}