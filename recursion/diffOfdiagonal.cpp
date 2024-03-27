#include<bits/stdc++.h>
using namespace std;



int main(){
    int n = 3;
    vector<vector<int>> arr{{1,2,3},{4,5,6},{7,8,9}};
    
    int d1 = 0;
    int d2 = 0;
    for(int i = 0; i < arr.size() - 1; i++){
        for(int j = 0; j < arr[0].size(); j++){
            if(i == j){
                d1 = d1 + arr[i][j];
                cout << d1 << " ";
            }
            if(i == arr.size() - j - 1){
                d2 = d2 + arr[i][j];
                cout << d2 << " ";
            }
        }
    }
    cout << d2 - d1;
    return 0;
    

    
}