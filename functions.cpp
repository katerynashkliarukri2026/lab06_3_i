
#include "functions.h"

int SumOdd(int* a, const int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 != 0)
        {
            sum += a[i];
        }
    }

    return sum;
}
