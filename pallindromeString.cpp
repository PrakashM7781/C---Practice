#include<iostream>
#include<vector>
using namespace std;


bool checkPallindrome(vector<char> s){
    for(int i = 0; i<s.size(); i++){
        if(s[i] != s[s.size() - 1 - i]){
            return false;
            break;
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
    vector<char> s{'a','b','c','b','a','a'};
    bool chck = checkPallindrome(s);
    cout<<chck;
    return 0;
}
