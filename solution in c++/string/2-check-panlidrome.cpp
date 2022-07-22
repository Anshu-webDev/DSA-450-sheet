#include <bits/stdc++.h>

using namespace std;

int isPalindrome(string S)
{
    int i = 0, j = S.length() - 1;
    while (i < j)
    {
        if (S[i] != S[j])
            return 0;
        i++;
        j--;
    }
    return 1;

    // int isPalindrome(string S)
    // {
    //     int n = S.length();
    //     for (int i = 0; i < n; i++)
    //     {
    //         if (S[i] != S[n - i - 1])
    //         {
    //             return 0;
    //         }
    //     }
    //     return 1;
    // }
}

int main()
{
    string s = "madam";
    cout << isPalindrome(s);
}