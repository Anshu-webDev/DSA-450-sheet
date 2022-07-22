#include <bits/stdc++.h>

using namespace std;

int validShuffle(string s1, string s2, string res)
{
    int l1 = s1.length();
    int l2 = s2.length();
    int l3 = res.length();

    if (l3 != l2 + l1)
        return 0;

    int i = 0, j = 0, k = 0;
    while (k < l3)
    {
        if (i < l1 and s1[i] == res[k])
            i++;
        else if (j < l2 and s2[j] == res[k])
            j++;
        else
        {
            return 0;
        }
        k++;
    }
    if (i < l1 or j < l2)
        return 0;
    return 1;
}

int main()
{
    string s1 = "xy";
    string s2 = "12";
    string res = "1xy2";

    cout << validShuffle(s1, s2, res);
}