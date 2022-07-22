#include <bits/stdc++.h>

using namespace std;

void reverseString(vector<char> &s)
{
    // ------------1-----------
    int n = s.size();
    for (int i = 0; i < n / 2; i++)
    {
        char ch = s[i];
        s[i] = s[n - i - 1];
        s[n - i - 1] = ch;
    }

    //--------------2------------
    // int i = 0;
    // int j = s.length - 1;
    // while (i < j)
    // {
    //     char temp = s[i];
    //     s[i] = s[j];
    //     s[j] = temp;
    //     i++;
    //     j--;
    // }

    //-------3----stack--------
    // Stack<Character> st = new Stack<>();
    // // String str = new String(s);
    // for (int i = 0; i < s.length; i++)
    // {
    //     st.push(s[i]);
    // }
    // // char ans[] = new char[s.length];
    // int i = 0;
    // while (!st.empty())
    // {
    //     s[i++] = st.pop();
    // }
    // for(int j=0; i<str.length(); j++){
    //     ans[j] = str.charAt(j);
    // }
}

void print(vector<char> s)
{
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << "";
    }
    cout << endl;
}

int main()
{
    vector<char> s = {'a', 'n', 's', 'h', 'u'};
    cout << "before reverse: ";
    print(s);

    reverseString(s);
    cout << "After reverse: ";
    print(s);
}