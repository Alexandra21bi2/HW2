#include "Task 13.h"
void sort(int *res, int c) {

	int tmp, i, j;
	//сортировка массива метожом Bubble sort
	for (i = 0; i < c - 1; ++i)
	{
		for (j = 0; j < c - 1; ++j)
		{
			if (res[j + 1] < res[j])
			{
				tmp = res[j + 1];
				res[j + 1] = res[j];
				res[j] = tmp;
			}
		}
	}
}