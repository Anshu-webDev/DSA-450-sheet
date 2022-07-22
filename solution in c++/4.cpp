#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[10] = {1, 2, 0, 2, 0, 1, 0, 2, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int c0 = 0, c1 = 0, c2 = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            c0++;
        else if (arr[i] == 1)
            c1++;
        else if (arr[i] == 2)
            c2++;
    }

    for (i = 0; i < c0; i++)
    {
        arr[i] = 0;
    }
    for (i = c0; i < c0 + c1; i++)
    {
        arr[i] = 1;
    }
    while (c2--)
    {
        arr[i] = 2;
        i++;
    }

    for (int x : arr)
    {
        cout << x << " ";
    }
}