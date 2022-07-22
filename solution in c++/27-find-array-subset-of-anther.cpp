#include <bits/stdc++.h>

using namespace std;

string isSubset(int a1[], int a2[], int n, int m)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[a1[i]]++;
    }

    int c = 0;
    for (int i = 0; i < m; i++)
    {
        if (mp[a2[i]])
        {
            c++;
        }
    }

    if (c == m)
    {
        return "Yes";
    }
    else
    {
        return "No";
    }
}

int main()
{
    int a1[] = {11, 1, 13, 21, 3, 7};
    int a2[] = {11, 3, 7, 1};

    int n = sizeof(a1) / sizeof(a1[0]);
    int m = sizeof(a2) / sizeof(a2[0]);

    cout << isSubset(a1, a2, n, m);
}