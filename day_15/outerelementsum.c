#include <stdio.h>
int main()
{
    int arr[4][4] = {{1, 1, 1, 1},
                     {1, 2, 3, 1},
                     {1, 5, 6, 1},
                     {1, 1, 1, 1}},
        sum = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if ((i == 0) || (j == 0) || (i == 3) || (j == 3))
                sum += arr[i][j];
        }
    }
    printf(" %d", sum);
}