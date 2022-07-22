#include <bits/stdc++.h>

using namespace std;

bool subArray(int arr[], int n)
{
    unordered_map<int, bool> mp;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        cout << sum << endl;
        if (sum == 0 || mp[sum])
            return true;

        mp[sum] = true;
    }
    return false;
}

int main()
{
    int arr[] = {4, 2, 0, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << subArray(arr, n);
}