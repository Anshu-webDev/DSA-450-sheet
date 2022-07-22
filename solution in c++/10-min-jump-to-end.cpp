#include <bits/stdc++.h>

using namespace std;

int minJump(int arr[], int n)
{
    int mx = arr[0], step = arr[0], jump = 1;

    for (int i = 1; i < n; i++)
    {
        if (i == n - 1)
        {
            return jump;
        }
        mx = max(mx, i + arr[i]);
        step--;
        if (step == 0)
        {
            jump++;
            if (i >= mx)
                return -1;
            step = mx - i;
        }
    }
    return -1;
}

int main()
{
    // int arr[] = {2, 3, 1, 1, 2, 4, 2, 0, 1, 1};
    // int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    // int arr[] = {1, 4, 3, 2, 6, 7};
    int arr[] = {0, 1, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << minJump(arr, n);

    // --------------3-------------
    // int step = arr[0], jump = 0, moves = 0, curr = 0;
    // if (step == 0)
    // {
    //     cout << "here " << -1;
    // }
    // while (curr + step < n - 1)
    // {
    //     if (arr[curr] == 0 && curr != n - 1)
    //     {
    //         cout << -1 << endl;
    //         break;
    //     }
    //     int maxe = -1;
    //     int p = 0;
    //     for (int i = 1; i <= step; i++)
    //     {
    //         if (maxe < arr[curr + i])
    //         {
    //             maxe = arr[curr + i];
    //             if (maxe == 0)
    //                 return -1;
    //             p = i;
    //         }
    //     }
    //     curr += p;
    //     step = arr[curr];
    //     // cout << "curr index " << curr << endl;
    //     // cout << "step " << step << endl;
    //     jump++;
    // }
    // cout << "jump " << jump + 1 << endl;

    // ------------1--------
    // int moves = 0, sum = 0, curr = 1;

    // int first = arr[0];
    // sum += first;

    // while ((curr + first) < (n - 1))
    // {
    //     int maxe = -1;
    //     int p = 0;
    //     for (int i = 0; i < first; i++)
    //     {
    //         if (maxe < arr[curr + i])
    //         {
    //             maxe = arr[curr];
    //             if (maxe == 0)
    //                 return -1;
    //             p = i;
    //         }
    //     }
    //     curr = curr + p + 1;
    //     first = arr[curr - 1];
    //     sum += first;
    //     moves += 1;
    // }

    // sum += arr[n - 1];
    // moves += 1;
    // cout << "sum " << sum << endl;
    // cout << "moves " << moves << endl;
}