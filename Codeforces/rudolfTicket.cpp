#include <bits/stdc++.h>
using namespace std;

int main()
{
    // You can do it.
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n, m, k;
        cin >> n >> m >> k;
        int left[n];
        int right[m];
        for (int i = 0; i < n; i++)
        {
            cin >> left[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> right[i];
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                // cout << left[i] + right[j] << " ";
                if (left[i] + right[j] <= k)
                {
                    ans++;
                }
            }
        }
        // cout << endl;

        cout << ans << endl;
    }

    return 0;
}