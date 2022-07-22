#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int lst = arr[0], mx = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < lst)
        {
            lst = arr[i];
        }
        int sell = arr[i] - lst;
        if (mx < sell)
        {
            mx = sell;
        }
    }
    cout << mx;

    return 0;
}