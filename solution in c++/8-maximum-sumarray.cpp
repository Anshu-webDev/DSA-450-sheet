#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int maxSum = arr[0];
    int currSum = 0;
    for (int n : arr)
    {
        if (currSum < 0)
        {
            currSum = 0;
        }
        currSum += n;
        maxSum = max(currSum, maxSum);
    }
    cout << "maxsum " << maxSum;
}