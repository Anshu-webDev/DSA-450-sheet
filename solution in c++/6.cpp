#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 6};
    int b[] = {3, 5, 6, 7, 8, 9, 9};

    int len1 = sizeof(a) / sizeof(a[0]);
    int len2 = sizeof(b) / sizeof(b[0]);

    set<int> s;
    for (int i = 0; i < len1; i++)
    {
        s.insert(a[i]);
    }
    for (int i = 0; i < len2; i++)
    {
        s.insert(b[i]);
    }

    for (auto x : s)
    {
        cout << x << " ";
    }
}