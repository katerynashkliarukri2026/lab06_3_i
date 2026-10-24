
#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
    const int n = 10;
    int a[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    cout << "Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "SumOdd = " << SumOdd(a, n) << endl;
    cout << "SumOdd<int> = " << SumOdd<int>(a, n) << endl;

    return 0;
}
