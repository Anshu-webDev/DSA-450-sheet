#include <bits/stdc++.h>

using namespace std;

void solve(string S, set<string> &ans, int index)
{
    if (index >= S.length())
    {
        ans.insert(S);
        return;
    }
    for (int j = index; j < S.length(); j++)
    {
        swap(S[index], S[j]);
        solve(S, ans, index + 1);
        swap(S[index], S[j]);
    }
}

vector<string> find_permutation(string S)
{
    set<string> ans;
    int index = 0;
    solve(S, ans, index);
    vector<string> res(ans.begin(), ans.end());
    return res;
}

int main()
{
    string s = "abc";
    vector<string> ans = find_permutation(s);

    for (auto e : ans)
    {
        cout << e << " ";
    }
    return 0;
}