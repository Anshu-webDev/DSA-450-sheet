// C++ code to find elements whose
// frequency yis more than n/k
#include <bits/stdc++.h>
using namespace std;

void morethanNbyK(int arr[], int n, int k)
{
    int x = n / k;

    // unordered_map initialization
    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    for (auto i : freq)
    {
        if (i.second > x)
        {
            cout << i.first << endl;
        }
    }
}

int main()
{
    int arr[] = {1, 1, 2, 2, 3, 5, 4, 2, 2, 3, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;

    morethanNbyK(arr, n, k);

    return 0;
}

// This code is contributed by chayandas018
