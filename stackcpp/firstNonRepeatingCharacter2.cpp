#include <bits/stdc++.h>
using namespace std;

string firstNonRepeatingCharacter(string str)
{

    int arr[52] = {0};
    queue<char> q;
    string s = "";

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            arr[str[i] - 'a']++;
            q.push(str[i]);
        }
        else
        {
            arr[str[i] - 'A' + 26]++;
            q.push(str[i]);
        }

        while (!q.empty())
        {
            if (arr[q.front() - 'a'] > 1)
            {
                q.pop();
            }
            else
            {
                s.push_back(str[i]);
                break;
            }
        }
        if (q.empty())
        {
            s.push_back('#');
        }
    }

    return s;
}

int main()
{

    string str = "aDcadhc";
    cout << firstNonRepeatingCharacter(str);

    return 0;
}