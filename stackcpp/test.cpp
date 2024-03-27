#include <bits/stdc++.h>
using namespace std;

string firstNonRepeatingCharacter(string str)
{
    int arr[26] = {0};
    queue<char> q;
    string s = "";

    for (int i = 0; i < str.length(); i++)
    {
        arr[str[i] - 'a']++;

        q.push(str[i]);

        while (!q.empty())
        {
            if (arr[q.front() - 'a'] > 1)
            {
                q.pop();
            }
            else
            {
                s.push_back(q.front());
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

    string str = "kumarrohit";
    string str2 = firstNonRepeatingCharacter(str);
    cout << str[0];
    return 0;
}