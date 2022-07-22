#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, -2, 5};
    int n = arr.size();

    int maxSum = arr[0], currSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (currSum < 0)
        {
            currSum = 0;
        }
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
    }

    cout << maxSum;
}