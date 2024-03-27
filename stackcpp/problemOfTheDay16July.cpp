#include <bits/stdc++.h>
using namespace std;

void printStack(stack<char> st)
{
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

bool isValidIPv4(string ipAddress)
{
    // Write your code here.
    if (!isdigit(ipAddress[0]))
    {

        return false;
    }
    stack<char> st;
    int i = 0;
    int n = ipAddress.length();
    int count = 0;
    while (i < n)
    {
        if (ipAddress[i] >= '0' && ipAddress[i] <= '9')
        {
            st.push(ipAddress[i]);
        }
        else if (ipAddress[i] == '.')
        {
            // printStack(st);
            string str = "";
            while (!st.empty())
            {
                int front = (int)st.top();
                str.push_back(front);
                st.pop();
            }
            reverse(str.begin(), str.end());
            int sum = stoi(str);
            // cout << sum << endl;
            if (sum < 0 || sum > 255)
            {
                return false;
            }
        }
        else
        {
            return false;
        }
        i++;
    }

    printStack(st);
    string str = "";
    while (!st.empty())
    {
        int front = (int)st.top();
        str.push_back(front);
        st.pop();
    }
    reverse(str.begin(), str.end());
    int sum = stoi(str);
    // cout << sum << endl;
    if (sum < 0 || sum > 255)
    {
        return false;
    }
    return true;
}

int main()
{
    string ipAddress = ".af0.";
    bool ans = isValidIPv4(ipAddress);

    cout << endl;
    cout << ans;
}