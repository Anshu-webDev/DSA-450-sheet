#include <bits/stdc++.h>

using namespace std;

// neetcode solution
int minCoins(vector<int> coins, int amount)
{
    vector<int> dp(amount + 1, amount + 1);
    dp[0] = 0;

    for (int i = 1; i <= amount; i++)
    {
        for (int c : coins)
        {
            if (i - c >= 0)
            {
                dp[i] = min(dp[i], 1 + dp[i - c]);
            }
        }
    }

    return dp[amount] == amount + 1 ? -1 : dp[amount];
}

// int minCoins(vector<int> coins, int n)
// {
//     if (n == 0)
//         return 0;
//     if (n < 0)
//         return INT_MAX;

//     int mini = INT_MAX;

//     for (int i = 0; i < coins.size(); i++)
//     {
//         int ans = minCoins(coins, n - coins[i]);
//         if (ans != INT_MAX)
//         {
//             mini = min(mini, 1 + ans);
//         }
//     }

//     return mini;
// }

int main()
{
    vector<int> coins = {2};
    int n = 3;
    int ans = minCoins(coins, n);
    // if (ans == INT_MAX)
    // {
    //     cout << -1;
    // }
    cout << ans;
    return 0;
}
