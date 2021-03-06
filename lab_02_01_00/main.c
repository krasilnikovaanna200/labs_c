#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int read_arr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (scanf("%d", arr + i) <= 0)
        {
            printf("invalid element value");
            return 1;
        }
    }
    return 0;
}

int sum(int a, int *s)
{
    if (a % 2 == 0)
        *s += a;
    return *s;
}

int main()
{
    int n, i;
    int a[10];
    int s = 0;
    int k = 0;
    if (scanf("%d", &n) != 1 || n > 10 || n <= 0 || read_arr(&a[0], n))
    {
        printf("invalid size value");
        return 1;
    }
    for (i = 0; i < n; i++)
    {
        if (abs(a[i]) + s > INT_MAX)
        {
            printf("invalid element value");
            return 1;
        }
        int s1 = s;
        sum(a[i], &s);
        if ((s1 == s) && (a[i] != 0) && (k == 0))
            k = 0;
        else
            k = 1;
    }
    if (k == 0)
    {
        printf("no one");
        return 1;
    }
    printf("%d ", s);
    return 0;
}
