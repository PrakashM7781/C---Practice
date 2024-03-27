#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    long long ans = 2;
    while (ans <= n)
    {
        ans *= 2;
    }
    cout << ans / 2 << endl;
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