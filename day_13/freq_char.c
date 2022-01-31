#include <stdio.h>
#include <string.h>
void freqchar(char *str)
{
    int arr[62], i, j, k, max = 0;
    char ch;
    char s[100];
    strcpy(s, str);
    // printf("%s", s);
    for (i = 0; i < 62; i++)
    {
        arr[i] = 0;
        // printf("arr[i] =%d", arr[i]);
    }
    for (i = 0; s[i] != '\0'; i++)
    {
        ch = s[i];
        // printf("\narr[i] =%d", arr[i]);

        if ((ch >= 48) && (ch <= 57))
        {
            arr[ch - 48] = arr[ch - 48] + 1;
            // printf("if ((ch >= 48) && (ch <= 57))  arr[ch - 48]=%d", arr[ch - 48]);
            // printf("\n 1.arr[%d] =%d", i, arr[i]);
        }
        else if ((ch >= 65) && (ch <= 90))
        {
            arr[ch - 55] = arr[ch - 55] + 1;
            // printf("\n2.arr[%d] =%d", i, arr[i]);
        }

        else if ((ch >= 97) && (ch <= 122))
        {
            arr[ch - 61] = arr[ch - 61] + 1;
            // printf("\n3.arr[%d] =%d", i, arr[i]);
        }

        for (j = i + 1; s[j] != '\0'; j++)
        {
            if (ch == s[j])
            {
                if ((ch >= 48) && (ch <= 57))
                    arr[ch - 48] = arr[ch - 48] + 1;

                else if ((ch >= 65) && (ch <= 90))
                    arr[ch - 55] = arr[ch - 55] + 1;
                else if ((ch >= 97) && (ch <= 122))
                    arr[ch - 61] = arr[ch - 61] + 1;
                for (k = j; s[k] != '\0'; k++)
                    s[k] = s[k + 1];

                j = j - 1;
            } // end of if
        }     // end of for j
    }
    max = arr[0];
    for (i = 0; i < 62; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        // printf("\nmax=%d", max);
    }
    for (i = 0; s[i] != '\0'; i++)
    {
        if ((s[i] >= 48) && (s[i] <= 57))
        {
            if (arr[s[i] - 48] == max)
                printf(" %c max=%d,", s[i], max);
        }

        else if ((s[i] >= 65) && (s[i] <= 90))
        {
            if (arr[s[i] - 55] == max)
                printf(" %c max=%d,", s[i], max);
        }

        else if ((s[i] >= 97) && (s[i] <= 122))
        {
            if (arr[s[i] - 61] == max)
                printf(" %c max=%d,", s[i], max);
        }
    }
}
int main()
{
    freqchar("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAdcqedcwefwrvrtbthyjntyju567hj65j675467645645");
    return 0;
}