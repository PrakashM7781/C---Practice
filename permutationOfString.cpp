#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool checkEqual(int arr1[26], int arr2[26])
{
    for (int j = 0; j < 26; j++)
    {
        if (arr1[j] != arr2[j])
        {
            return 0;
        }
    }
    return 1;
}

bool checkInclusion(string s1, string s2)
{
    int arr1[26] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] >= 'a' && s1[i] <= 'z')
        {
            int count = s1[i] - 'a';
            arr1[count]++;
        }
    }
    int i = 0;
    int arr2[26] = {0};
    while (i < s1.length() && i < s2.length())
    {
        int index = s2[i] - 'a';
        arr2[index]++;
        i++;
    }
    if (checkEqual(arr1, arr2))
    {
        return 1;
    }

    while (i < s2.length())
    {
        int index = s2[i] - 'a';
        arr2[index]++;

        index = s2[i - s1.length()] - 'a';
        arr2[index]--;

        if (checkEqual(arr1, arr2))
        {
            return 1;
        }
        i++;
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    string s2 = "eidbaooo";
    string s1 = "ab";
    bool permutation = checkInclusion(s1, s2);
    cout << endl
         << permutation;
    return 0;
}
