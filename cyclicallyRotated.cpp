#include<bits/stdc++.h>
using namespace std;

int isCyclicRotation(string &p, string &q) 
{
    int size = p.length();

    int temp = p[size - 1];

    for(int i = size - 1; i > 0; i--){
        p[i] = p[i - 1];
    }
    p[0] = temp;

    if(p == q){
        return 1;
    }
    return 0;
}

int main(){
    string s = "acab";
    string p = "baca";
    

    int re = isCyclicRotation(s, p);
    cout << re;
}