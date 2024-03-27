#include <bits/stdc++.h>
using namespace std;

int solve(long long a, long long b, long long m)
{
    long long res = m / a + 1 + m / b + 1;
    cout << res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, m;
        cin >> a >> b >> m;
        solve(a, b, m);
        cout << endl;
    }
    return 0;
}