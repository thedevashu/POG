#include <stdio.h>
int main()
{
    int arr[5][5] = {{2, 3, 4, 5, 6},
                     {1, 2, 3, 4, 5},
                     {4, 5, 6, 8, 9},
                     {1, 1, 1, 1, 2},
                     {2, 2, 2, 2, 3}},
        s, e, n = 5;
    for (s = 0, e = n - 1; s <= e; s++, e--)
    {
        for (int i = s; i <= e; i++)
        {
            printf(" %d", arr[s][i]);
        }

        for (int j = s + 1; j <= e; j++)
        {
            printf(" %d", arr[j][e]);
        }

        for (int k = e - 1; k >= s; k--)
        {
            printf(" %d", arr[e][k]);
        }

        for (int l = e - 1; l > s; l--)
        {
            printf(" %d", arr[l][s]);
        }
    }
}