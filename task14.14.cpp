#include "task14.h"
void profit(int arr[], int n) {


	int i;
	int min = arr[0];
	int ind = 0;
	int max = arr[ind];

	for (i = 0; i < n; i++)

	{
		if (arr[i] < min)
		{
			min = arr[i];
			ind = i;
		}
	}
	for (i = ind; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];

		}
	}
	int res = max - min;
	std::cout << "The biggest profit: " << res;
}