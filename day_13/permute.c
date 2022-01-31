#include <stdio.h>
#include <string.h>
void swap(char *x, char *y)
{
    char temp = *x;
    *x = *y;
    *y = temp;
}
void permute(char *str, int l, int r)
{
    int j;
    if (l == r)
    {
        printf(" %s ", str);
    }
    else
    {
        for (j = l; j <= r; j++)
        {
            swap(str + l, str + j);
            permute(str, l + 1, r);
            swap(str + l, str + j);
        }
    }
}
int main()
{
    char str[21];
    int len;
    printf("Enter String");
    scanf("%s", str);
    len = strlen(str);
    permute(str, 0, len - 1);
    // printf("--%s", str);

    return 0;
}