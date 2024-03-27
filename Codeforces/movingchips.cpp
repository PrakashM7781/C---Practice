#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int i = 0;
        int j = n - 1;
        while (arr[i] == 0)
        {
            i++;
        }
        while (arr[j] == 0)
        {
            j--;
        }
        int ans = 0;
        for (int k = i + 1; k < j; k++)
        {
            if (arr[k] == 0)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
