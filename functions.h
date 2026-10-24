
#pragma once

int SumOdd(int* a, const int size);

template <typename T>
T SumOdd(T* a, const int size)
{
    T sum = T();

    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 != 0)
        {
            sum += a[i];
        }
    }

    return sum;
}

