#include <bits/stdc++.h>

using namespace std;

string longestPalin(string S)
{
    int n = S.length();
    int max_len = 1;
    int start = 0;

    for (int i = 0; i < n - 1; i++)
    {
        // for odd length
        int l = i, r = i;
        while (l >= 0 and r < n and S[l] == S[r])
        {
            l--;
            r++;
        }
        int len = r - l - 1;
        if (len > max_len)
        {
            max_len = len;
            start = l + 1;
        }

        // for even length
        l = i, r = i + 1;
        while (l >= 0 and r < n and S[l] == S[r])
        {
            l--;
            r++;
        }
        len = r - l - 1;
        if (len > max_len)
        {
            max_len = len;
            start = l + 1;
        }
    }

    return S.substr(start, max_len);
}

int main()
{
    string s = "aaaabbaa";
    cout << longestPalin(s);
}