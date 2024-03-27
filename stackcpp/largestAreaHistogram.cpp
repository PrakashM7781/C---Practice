#include <bits/stdc++.h>
#include <stack>
using namespace std;

vector<int> prevSmallerElement(vector<int> arr)
{
    stack<int> st;
    st.push(-1);
    vector<int> ans(arr.size());

    for (int i = 0; i < arr.size(); i++)
    {
        int curr = arr[i];
        while (st.top() != -1 && curr <= arr[st.top()])
        {
            st.pop();
        }

        ans[i] = st.top();
        cout << ans[i] << " ";

        st.push(i);
    }
    return ans;
}

vector<int> nextSmallerElement(vector<int> arr)
{
    stack<int> st;
    st.push(-1);
    vector<int> ans(arr.size());
    int n = arr.size();
    cout << endl;
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        int curr = arr[i];

        while (st.top() != -1 && curr <= arr[st.top()])
        {
            st.pop();
        }

        if (st.top() == -1)
        {
            ans[i] = n;
        }
        else
        {
            ans[i] = st.top();
        }
        // cout << ans[i] << " ";

        st.push(i);
    }
    // reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    // You can do it.
    vector<int> heights = {2, 1, 5, 6, 2, 3};

    prevSmallerElement(heights);
    vector<int> ans = nextSmallerElement(heights);

    for (int i = 0; i < heights.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}