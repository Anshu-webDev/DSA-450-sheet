#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> nums = {1, 4, 3, 2}; //   2 4 3 1 --->  2 1 3 4
    int n = nums.size();
    int l, r;
    for (l = n - 2; l >= 0; l--)
    {
        if (nums[l] < nums[l + 1])
            break;
    }

    if (l < 0)
    {
        reverse(nums.begin(), nums.end());
    }
    else
    {
        for (r = n - 1; r < l; r--)
        {
            if (nums[r] > nums[l])
                break;
        }

        swap(nums[l], nums[r]);
        reverse(nums.begin() + l + 1, nums.end());
    }
    for (int i : nums)
    {
        cout << i << endl;
    }
    return 0;
}