#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cout << (char)(j + 'a');
        }
    }
    cout << endl;
}

int main()
{
    // You can do it.

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}