#include<bits/stdc++.h>
using namespace std;




int main(int argc, char const *argv[])
{
    int n = 32;
    bool flag = false;
    for(int i = 0; i < n/2; i++){
        if(pow(2,i) == n){
            flag = true;
            break;
        }
    }
    cout << flag;
    return 0;
}
