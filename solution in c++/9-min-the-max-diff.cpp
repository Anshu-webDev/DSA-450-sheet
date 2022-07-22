#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {6, 1, 9, 1, 1, 7, 9, 5, 2, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;

    // ----------method 1--------

    sort(arr, arr + n);
    int ans = arr[n - 1] - arr[0];
    // cout << ans << endl;

    int small = arr[0] + k;
    int big = arr[n - 1] - k;
    // cout << small << " " << big << endl;

    int mi, ma;
    for (int i = 0; i < n - 1; i++)
    {
        mi = min(small, arr[i + 1] - k); // -1  0  1  2
        ma = max(big, arr[i] + k);       //  4  5  6  7
        // cout << mi << " " << ma << endl;
        if (mi < 0)
            continue;
        ans = min(ans, ma - mi);
    }
    cout << ans << endl;

    // -----------method 2------------

    //  sort(arr, arr + n);
    // int small = arr[0] + k;
    // int big = arr[n - 1] - k;

    // if (small > big)
    //     swap(small, big);

    // for (int i = 1; i < n - 1; i++)
    // {
    //     int sub = arr[i] - k;
    //     int add = arr[i] + k;

    //     if (sub >= small || add <= big)
    //         continue;
    //     else if (big - sub <= add - small)
    //         small = sub;
    //     else
    //         big = add;
    // }
    // cout << min(big - small, arr[n - 1] - arr[0]);
}