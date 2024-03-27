#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int removeOccurrences(string s, string part)
{
    int count = 0;
    for(int i = 0; i < s.length(); i++){
        if(s.substr(i, part.length()) == part){
            count++;
        }
    }
    return count;
}

int main(int argc, char const *argv[])
{
    string str = "daabcbaadbcbc";
    string part = "abc";
    int count = removeOccurrences(str, part);
    cout << count;
    // string str2 = str.substr(1,3);
    // cout << str2;

    return 0;
}
