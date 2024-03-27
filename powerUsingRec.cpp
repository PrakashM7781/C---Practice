#include<bits/stdc++.h>
using namespace std;

long power(int n, int p){
    if(p == 0){
        return 1;
    }
    if(p == 1){
        return n;
    }

    long ans = power(n, p/2);

    if(p % 2 == 0){
        return ans * ans;
    }
    else{
        return n * ans * ans;
    }
    
}

int main(int argc, char const *argv[])
{
    int n = 2;
    int p = 10;
    long pow = power(n,p);
    cout << pow;
    return 0;
}




