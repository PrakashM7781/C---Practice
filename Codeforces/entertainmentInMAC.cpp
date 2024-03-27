#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string t = s;
    reverse(t.begin(), t.end());

    if (t < s)
    {
        swap(s, t);
        n--;
    }

    if (n & 1)
    {
        cout << s + t << endl;
    }
    else
        cout << s << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int tt;
    cin >> tt;
    while (tt--)
        solve();
}