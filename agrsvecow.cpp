#include<iostream>
#include<vector>
#include <bits/stdc++.h> 
using namespace std;

bool isPossible(vector<int> arr, int k, int mid){
    int cowCount = 1;
    int dist = arr[0];
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] - dist >= mid){
            cowCount++;
            if(cowCount == k){
                return true;
            }
            dist = arr[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int start = 0;
    int maxi = -1;
    int ans = -1;
    for(int i = 0 ; i < stalls.size(); i++){
        maxi = max(stalls[i], maxi);
    }
    int end = maxi;
    int mid = start + (end - start)/2;
    while(start <= end){
        if(isPossible(stalls, k, mid)){
            ans = mid;
            start = mid + 1;
            
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    vector<int> arr{4,2,1,3,6};
    int k = 2;
    int aggressive = aggressiveCows(arr,k);
    cout << aggressive;
    return 0;
}
