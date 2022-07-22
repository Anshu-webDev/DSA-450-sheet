#include <bits/stdc++.h>

using namespace std;

int findMinDiff(int arr[], int n, int m)
{
    sort(arr, arr + n);
    int ans = INT_MAX;
    int i = 0, j = m - 1;
    while (j < n)
    {
        ans = min(ans, arr[j] - arr[i]);
        i++;
        j++;
    }
    // for (int i = 0; (i + m - 1) < n; i++)
    // {
    //     ans = min(ans, arr[i + m - 1] - arr[i]);
    // }
    return ans;
}

int main()
{
    int a[] = {3, 4, 1, 9, 56, 7, 9, 12};
    int n = sizeof(a) / sizeof(a[0]);

    int m = 5; // no of member to distribute chocolate
    cout << findMinDiff(a, n, m);
}