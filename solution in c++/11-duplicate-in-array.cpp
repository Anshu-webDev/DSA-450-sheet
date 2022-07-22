#include <bits/stdc++.h>

using namespace std;

int duplicate(vector<int> nums)
{
    int n = nums.size();
    // using map
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[nums[i]]++;
    }
    for (auto e : mp)
    {
        if (e.second > 1)
            return e.first;
    }
    return 0;
}

int main()
{
    vector<int> nums = {1, 2, 3, 2, 4};

    cout << duplicate(nums);
    return 0;
}