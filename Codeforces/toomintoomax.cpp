#include <bits/stdc++.h>
using namespace std;

int solve()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    int first = abs(arr[n - 1] - arr[0]);
    int second = abs(arr[n - 1] - arr[1]);
    int third = abs(arr[n - 2] - arr[0]);
    int fourth = abs(arr[n - 2] - arr[1]);

    int ans = first + second + third + fourth;

    return ans;
}

int main()
{
    // You can do it.
    int t;
    cin >> t;
    while (t--)
    {
        int result = solve();
        cout << result << endl;
    }
    return 0;
}
