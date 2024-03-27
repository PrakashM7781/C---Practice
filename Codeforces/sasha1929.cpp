#include <bits/stdc++.h>
using namespace std;

int main()
{
    // You can do it.
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (k <= 4 * n - 4)
        {
            cout << (k + 1) / 2 << "\n";
        }
        else if (k == 4 * n - 3)
        {
            cout << 2 * n - 1 << "\n";
        }
        else
        {
            cout << 2 * n << "\n";
        }
    }
    return 0;
}