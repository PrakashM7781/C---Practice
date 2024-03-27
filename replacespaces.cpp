#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

string replaceSpaces(string str){
    for(int i = 0; i < str.length(); i++){
        if(str[i] == ' '){
            str.replace(i, 1, "@40");
        }
    }
    return str;
}


int main(int argc, char const *argv[])
{
    string str = "My name is khan";
    str = replaceSpaces(str);
    // for(int i = 0; i < str.length(); i++){
    //     cout << str[i] << " ";
    // }
    cout << str;
    return 0;
}
