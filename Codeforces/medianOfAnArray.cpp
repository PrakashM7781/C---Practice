#include <bits/stdc++.h>
using namespace std;

int main()
{
    // You can do it.
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);
        int ind = 0;
        int median;
        if (n % 2 == 0)
        {
            ind = n / 2 - 1;
            median = arr[ind];
        }
        else
        {
            ind = n / 2;
            median = arr[ind];
        }
        int ans = 0;
        for (int i = ind; i < n; i++)
        {
            if (arr[i] == median)
            {
                ans++;
            }
        }

        cout << ans << endl;
    }
    return 0;
}