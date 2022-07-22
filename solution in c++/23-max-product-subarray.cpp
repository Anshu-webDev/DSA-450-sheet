#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {6, -3, -10, 0, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    // -------------------1--------------
    // first approach using min product and max product

    // int ans = arr[0];
    // int minp = ans;
    // int maxp = ans;
    // int choice1, choice2;
    // for (int i = 1; i < n; i++)
    // {
    //     choice1 = minp * arr[i];
    //     choice2 = maxp * arr[i];
    //     minp = min(arr[i], min(choice1, choice2));
    //     maxp = max(arr[i], max(choice1, choice2));
    //     ans = max(ans, maxp);
    // }

    // cout << ans;

    // -----------------------2----------------
    // second approach left to right and right to left
    int maxp = INT_MIN;
    int prod = 1;
    for (int i = 0; i < n; i++)
    {
        prod *= arr[i];
        maxp = max(maxp, prod);
        if (prod == 0)
        {
            prod = 1;
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        prod *= arr[i];
        maxp = max(maxp, prod);
        if (prod == 0)
        {
            prod = 1;
        }
    }

    cout << maxp;
}