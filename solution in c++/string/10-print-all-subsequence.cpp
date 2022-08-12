#include <bits/stdc++.h>

using namespace std;

void func(string t, int i, int n, string s)
{
    if (i == n)
    {
        cout << t << endl;
    }
    else
    {
        // exclude
        func(t, i + 1, n, s);

        // include
        t += s[i];
        func(t, i + 1, n, s);
    }
}

int main()
{
    string s = "abc";
    func("", 0, s.length(), s);
}