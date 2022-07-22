#include <bits/stdc++.h>

using namespace std;

int smallestSubWithSum(int arr[], int n, int x)
{
    int mi = INT_MAX;
    int i = 0, j = 0;
    int s = 0;
    while (i <= j and j < n)
    {
        while (s <= x and j < n)
        {
            s += arr[j++];
        }
        while (s > x and i < j)
        {
            mi = min(mi, j - i);
            s -= arr[i];
            i++;
        }
    }
    return mi;
}

int main()
{
    int arr[] = {1, 4, 45, 6, 0, 19};
    int n = sizeof(arr) / sizeof(arr[0]);

    int x = 51;
    cout << smallestSubWithSum(arr, n, x);
}