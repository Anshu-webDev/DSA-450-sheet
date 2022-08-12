#include <bits/stdc++.h>

using namespace std;

string countAndSay(int n)
{
    if (n == 1)
        return "1";
    string s = "1";
    for (int i = 2; i <= n; i++)
    {
        string t = "";
        s = s + "$";
        int c = 1;
        for (int j = 1; j < s.length(); j++)
        {
            if (s[j] == s[j - 1])
            {
                c++;
            }
            else
            {
                t = t + to_string(c);
                t = t + s[j - 1];
                c = 1;
            }
        }
        s = t;
    }
    return s;
}

int main()
{
    int n = 2;
    cout << countAndSay(n);
    return 0;
}