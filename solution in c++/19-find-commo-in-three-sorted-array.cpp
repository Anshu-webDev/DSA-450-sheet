#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[] = {1, 5, 10, 20, 40, 80};
    int b[] = {6, 7, 20, 80, 100};
    int c[] = {3, 4, 15, 20, 30, 70, 80, 120};
    int n1 = sizeof(a) / sizeof(a[0]);
    int n2 = sizeof(b) / sizeof(b[0]);
    int n3 = sizeof(c) / sizeof(c[0]);

    // ans
    int i = 0, j = 0, k = 0;
    vector<int> ans;
    while (i < n1 && j < n2 && k < n3)
    {
        if (a[i] == b[j] && b[j] == c[k])
        {
            ans.push_back(a[i]);
            i++;
            j++;
            k++;
        }
        else if (a[i] < b[j])
        {
            i++;
        }
        else if (b[j] < c[k])
        {
            j++;
        }
        else
        {
            k++;
        }
        int xx = a[i - 1];
        while (a[i] == xx)
            i++;
        int yy = b[j - 1];
        while (b[j] == yy)
            j++;
        int zz = c[k - 1];
        while (c[k] == zz)
            k++;
    }
    // if(ans.size() == 0) return {-1};
    // retunn ans;
    for (auto e : ans)
        cout << e << " ";
    return 0;
}