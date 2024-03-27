#include <bits/stdc++.h>
using namespace std;

bool solve(string a, string b, string c)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != b[i] && (a[i] == c[i] || b[i] == c[i]))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    // You can do it.
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n;
        cin >> n;
        string a, b, c;
        bool ans = solve(a, b, c);
        if (ans)
            cout << "Yes" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}