#include<bits/stdc++.h>
#include<iostream>
using namespace std;


void miniMaxSum(vector<int> arr) {
    int maxi = 0;
    int mini = 0;
    int sum1 = 0;
    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < arr.size(); j++){
            if(i == j){
                j = j + 1;
            }
            sum1 = sum1 + arr[j];
        }
        maxi = max(maxi, sum1);
        mini = min(mini, sum1);
    }
    cout << mini << " " << maxi;
}

int main(int argc, char const *argv[])
{
    vector<int> arr{1,2,3,4,5};
    miniMaxSum(arr);
    return 0;
}
