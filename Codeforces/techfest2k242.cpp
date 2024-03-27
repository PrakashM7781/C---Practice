#include <bits/stdc++.h>
using namespace std;

int main()
{
    // You can do it.
    vector<int> arr1 = {1, 2, 3, 4, 5, 7};
    vector<int> arr2 = {2, 3, 5, 9, 6, 8};

    set<int> st;

    for (int i = 0; i < arr1.size(); i++)
    {
        st.insert(arr1[i]);
    }
    for (int i = 0; i < arr1.size(); i++)
    {
        st.insert(arr2[i]);
    }

    vector<int> intersect;
    for (int i = 0; i < arr1.size(); i++)
    {
        if (find(arr2.begin(), arr2.end(), arr1[i]) != arr2.end())
        {
            intersect.push_back(arr1[i]);
        }
    }

    for (auto i : st)
    {
        cout << i << " ";
    }
    cout << endl;
    for (int i = 0; i < intersect.size(); i++)
    {
        cout << intersect[i] << " ";
    }

    return 0;
}