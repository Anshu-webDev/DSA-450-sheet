#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v = {1, 1, 1, 1};
    int n = v.size();
    int sum = 2;

    unordered_map<int, int> um;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int diff = sum - v[i];
        // if (um.find(diff) != um.end())
        if (um[diff])
        {
            count += um[diff];
        }
        um[v[i]]++;
    }
    cout << count;
    return 0;
}