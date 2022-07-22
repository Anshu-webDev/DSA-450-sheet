#include <bits/stdc++.h>

using namespace std;

// int arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
// // int arr[] = {1, 2, 3, -4, -1, 4};
// int n = sizeof(arr) / sizeof(arr[0]);

void rightRotate(int arr[], int from, int to)
{
    int temp = arr[to];
    for (int i = to; i > from; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[from] = temp;
}

void rearrange(int arr[], int n)
{
    int wrongIndex = -1;

    for (int i = 0; i < n; i++)
    {
        if (wrongIndex >= 0)
        {
            if (((arr[i] >= 0) && (arr[wrongIndex] < 0)) || ((arr[i] < 0) && (arr[wrongIndex] >= 0)))
            {
                rightRotate(arr, wrongIndex, i);
                // the new out-of-place entry is now 2 steps ahead
                if (i - wrongIndex >= 2)
                    wrongIndex += 2;
                else
                    wrongIndex = -1;
            }
        }

        // if no entry has been flagged out-of-place
        if (wrongIndex == -1)
        {
            // check if current entry is out-of-place
            if (((arr[i] >= 0) && (i % 2 == 0)) || ((arr[i] < 0) && (i % 2 == 1)))
            {
                wrongIndex = i;
            }
        }
    }
}

// A utility function to print an array 'arr[]' of size 'n'
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Driver code
int main()
{

    int arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Given array is \n";
    printArray(arr, n);

    rearrange(arr, n);

    cout << "Rearranged array is \n";
    printArray(arr, n);

    return 0;
}
