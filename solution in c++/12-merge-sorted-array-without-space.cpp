#include <bits/stdc++.h>

using namespace std;

// int arr1[10], arr2[10];

void merge(int arr1[], int arr2[], int n, int m)
{
    int i = n - 1, j = 0;
    while (i >= 0 && j < m)
    {
        if (arr1[i] > arr2[j])
        {
            int temp = arr1[i];
            arr1[i] = arr2[j];
            arr2[j] = temp;
        }
        else
        {
            break;
        }
        i--;
        j++;
    }
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
}

int main()
{
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {0, 2, 6, 8, 9};

    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    merge(arr1, arr2, n, m);

    for (auto i : arr1)
    {
        cout << i << " ";
    }

    return 0;
}