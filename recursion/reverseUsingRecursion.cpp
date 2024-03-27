#include<bits/stdc++.h>
using namespace std;

void reverse(string& str, int s, int e){
    if(s > e){
        return ;
    }

    swap(str[s], str[e-1]);
    s++;
    e--;
    reverse(str, s , e );
    return ;
}

int main(int argc, char const *argv[])
{
    string str = "abcde";
    reverse(str, 0, 5);
    cout << str; 
    return 0;
}
