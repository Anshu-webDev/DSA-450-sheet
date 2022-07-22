#include <bits/stdc++.h>

using namespace std;
int main()
{
    int arr[10] = {3, 5, -2, -8, 4, 2, 8, 9, -9, 1};

    int n = sizeof(arr) / sizeof(arr[0]);
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }

    for (int x : arr)
    {
        cout << x << " ";
    }
}