#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[10] = {4, 7, 1, 2, 66, 9, 8, 6, 5, 3};

    int mn = a[0], mx = a[0];

    int n = sizeof(a) / sizeof(a[0]);

    for (int i = 1; i < n; i++)
    {
        if (a[i] < mn)
            mn = a[i];
        if (a[i] > mx)
            mx = a[i];
    }

    cout << "max " << mx << endl;
    cout << "min " << mn << endl;
}