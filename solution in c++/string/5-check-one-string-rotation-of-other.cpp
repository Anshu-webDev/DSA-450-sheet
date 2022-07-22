#include <bits/stdc++.h>

using namespace std;

string rot(string &s, int n)
{
    char last = s[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        s[i + 1] = s[i];
    }
    s[0] = last;
    return s;
}

// bool rotateString(string s, string goal)
// {
//     int n = s.length();
//     for (int i = 0; i < n; i++)
//     {
//         string res = rot(s, n);
//         // cout<< res<< endl;
//         if (res == goal)
//             return true;
//     }
//     return false;
// }

int main()
{
    string s1 = "abc";
    string s2 = "bca";

    int n = s2.length();
    bool same = false;
    for (int i = 0; i < n; i++)
    {
        string res = rot(s2, n);
        if (res == s1)
        {
            same = true;
            break;
        }
    }
    cout << same;
    return 0;
}