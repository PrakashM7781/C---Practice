#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k; // no of bridges & no of bridges detonator can destroy
    cin >> n >> k;
    if (n - 1 <= k)
        cout << 1;
    else
    {
        cout << n;
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