#include <bits/stdc++.h>

using namespace std;

void rotate(int arr[], int l, int r)
{
    int i = l, j = r - 1;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << arr[7] << endl;
    int k = 3;

    rotate(arr, 0, n - k); // 7
    rotate(arr, n - k, n);
    rotate(arr, 0, n);

    // int last = arr[n - 1];
    // for (int i = n - 2; i >= 0; i--)
    // {
    //     arr[i + 1] = arr[i];
    // }

    // arr[0] = last;

    for (int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}