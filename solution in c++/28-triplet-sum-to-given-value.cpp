#include <bits/stdc++.h>

using namespace std;

// method 1 time - O(n^2)   space - O(n)
bool find3Numbers(int A[], int n, int X)
{
    for (int i = 0; i < n; i++)
    {
        unordered_set<int> u;
        int curr = X - A[i];
        for (int j = i + 1; j < n; j++)
        {
            if (u.find(curr - A[j]) != u.end())
            {
                return true;
            }
            u.insert(A[j]);
        }
    }
    return false;
}

// // method 2 time - O(n^2)   space - O(1)
// bool find3Numbers(int A[], int n, int X)
// {
//     sort(A, A + n);
//     for (int i = 0; i < n; i++)
//     {
//         int l = i + 1;
//         int r = n - 1;

//         while (l < r)
//         {
//             if (A[l] + A[r] + A[i] == X)
//             {
//                 return 1;
//             }
//             else if (A[l] + A[r] + A[i] < X)
//             {
//                 l++;
//             }
//             else
//             {
//                 r--;
//             }
//         }
//     }
//     return 0;
// }

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int val = 6;

    cout << find3Numbers(arr, n, val);
}