#include <stdio.h>
#include <math.h>

int read_arr(long long *arr, int size)
{
    for (int i = 0; i < size + 1; i++)
        if (scanf("%lld", arr + i) <= 0)
            return (i);
    return (100);
}

void print_arr(long long *arr, int size)
{
    for (int i = 0; i < size; ++i)
        printf("%lld ", arr[i]);
}

void swap(long long *a, long long *b)
{
    long long t = *a;
    *a = *b;
    *b = t;
}

void bubble_sort(long long *arr, int size)
{
    int i = 0;
    int j = 0;

    while (i < size)
    {
        j = i;
        while (j < size)
        {
            if (arr[i] > arr[j])
                swap(&arr[i], &arr[j]);
            ++j;
        }
        ++i;
    }
}

int main(void)
{
    const int size = 10000;
    int f = 1;
    long long n = 0;
    long long a[10000];

    n = read_arr(&a[0], size);
    if (n == 0)
        return 1;
    if (n == 100)
    {
        n = size;
        f = 0;
    }
    bubble_sort(a, n);
    print_arr(&a[0], n);
    if (f == 0)
        return 100;
    else
        return 0;
}
