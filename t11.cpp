#include "t11.h"
int main() {
    const int n = 3;
    const int m = 5;
    int array[3][5] =
    {
        {1,3,6,8,9},
        {7,	15,89, 43, 2},
        {90, 67, 12, 77, 11}
    };
    for (int i = 0; i < n; i++)
    {
        int temp;
        for (int j = m - 1; j > 0; j--)
        {
            temp = array[i][j];
            array[i][j] = array[i][j - 1];
            array[i][j - 1] = temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++) 
            std::cout << array[i][j] << " ";
            std::cout << std::endl;
        
    }
    return 0;
}