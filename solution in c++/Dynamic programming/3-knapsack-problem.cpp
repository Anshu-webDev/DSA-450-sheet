#include <bits/stdc++.h>

using namespace std;

// recursion appraoch
int solve(vector<int> &weight, vector<int> &value, int index, int capacity)
{
    // base case
    if (index == 0)
    {
        if (weight[0] <= capacity)
        {
            return value[0];
        }
        else
        {
            return 0;
        }
    }

    int include = 0;
    if (weight[index] <= capacity)
        include = value[index] + solve(weight, value, index - 1, capacity - weight[index]);

    int exclude = solve(weight, value, index - 1, capacity);

    int ans = max(include, exclude);

    return ans;
}

// dynamic problem approach
// top down approach
int solveMem(vector<int> &weight, vector<int> &value, int index, int capacity, vector<vector<int>> &dp)
{
    // base case
    if (index == 0)
    {
        if (weight[0] <= capacity)
        {
            return value[0];
        }
        else
        {
            return 0;
        }
    }

    if (dp[index][capacity] != -1)
    {
        return dp[index][capacity];
    }

    int include = 0;
    if (weight[index] <= capacity)
        include = value[index] + solveMem(weight, value, index - 1, capacity - weight[index], dp);

    int exclude = solveMem(weight, value, index - 1, capacity, dp);

    dp[index][capacity] = max(include, exclude);

    return dp[index][capacity];
}

// bottom up approach
int solveTab(vector<int> &weight, vector<int> &value, int n, int capacity)
{
    // step 1
    vector<vector<int>> dp(n, vector<int>(capacity + 1, 0));

    // step 2: analyse base case
    for (int w = weight[0]; w <= capacity; w++)
    {
        if (weight[0] <= capacity)
            dp[0][w] = value[0];
        else
            dp[0][w] = 0;
    }

    for (int index = 1; index < n; index++)
    {
        for (int w = 0; w <= capacity; w++)
        {
            int include = 0;
            if (weight[index] <= w)
                include = value[index] + dp[index - 1][w - weight[index]];

            int exclude = dp[index - 1][w];

            dp[index][w] = max(include, exclude);
        }
    }

    return dp[n - 1][capacity];
}

int knapsack(vector<int> &weight, vector<int> &value, int n, int maxWeight)
{
    // recursion
    // return solve(weight, value, n - 1, maxWeight);

    // dp appraoch
    // top down approach
    // vector<vector<int>> dp(n, vector<int>(maxWeight + 1, -1));
    // return solveMem(weight, value, n - 1, maxWeight, dp);

    // bottom up approach
    return solveTab(weight, value, n - 1, maxWeight);
}

int main()
{
    vector<int> weight = {1, 2, 4, 5};
    vector<int> value = {5, 4, 8, 6};

    int n = weight.size();
    int maxWeight = 5;

    cout << knapsack(weight, value, n, maxWeight);
    return 0;
}