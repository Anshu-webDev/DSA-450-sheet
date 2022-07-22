#include <bits/stdc++.h>

using namespace std;

int findLongestConseqSubseq(int arr[], int N)
{
    // Your code here
    unordered_set<int> numSet;
    int longest = 0;

    for (int i = 0; i < N; i++)
    {
        numSet.insert(arr[i]);
    }

    for (int i = 0; i < N; i++)
    {
        if (numSet.find(arr[i] - 1) == numSet.end())
        {
            int length = 0;
            while (numSet.find(arr[i] + length) != numSet.end())
            {
                length += 1;
            }
            longest = max(length, longest);
        }
    }
    return longest;
}

int main()
{
    int arr[] = {2, 6, 1, 9, 4, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << findLongestConseqSubseq(arr, n);
    return 0;
}
