#include <stdio.h>
#include <math.h>

int read_arr(long long *arr, long long *end)
{
    for (; arr < end; arr++)
    {
        if (scanf("%lld", arr) <= 0)
        {
            printf("invalid element value");
            return 1;
        }
    }
    return 0;
}

void print_arr(long long *arr, long long *end)
{
    for (; arr < end; arr++)
        printf("%lld ", *arr);
}

void swap(long long *a, long long *b)
{
    long long t = *a;
    *a = *b;
    *b = t;
}

long long spec_sum(long long *beg, long long *end)
{
    long long item = 1;
    long long sum = 0;

    while (beg < end)
    {
        item *= *beg;
        sum += item;
        if (*beg < 0)
            return (sum);
        ++beg;
    }
    return (sum);
}

int main(void)
{
    long long n = 0;
    long long a[10];

    if (scanf("%lld", &n) <= 0 || n > 10 || n < 0 || read_arr(a, a + n))
        return 1;
    printf("%lld", spec_sum(a, a + n));

    return 0;
}
