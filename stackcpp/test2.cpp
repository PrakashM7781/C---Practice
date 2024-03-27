#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;

    cin >> str;
    char ch;

    for (int i = 0; i < str.length(); i++)
    {
        for (int j = i + 1; j < str.length(); j++)
        {
            if (str[i] == str[j])
            {
                break;
            }
            ch = str[i];
        }
    }

    cout << ch;
    return 0;
}