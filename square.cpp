#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
long long int binarySearch(long long int n){
    if(n<2){
        return n;
    }
    int start = 0; 
    int end = n;
    long long int mid = start + (end - start)/2;
    long long int ans = -1;
    long long int sq = mid * mid;
    while(start<=end){
        if(mid * mid == n){
            return mid;
        }
        if(mid * mid < n){
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
    int mySqrt(int x) {
        return binarySearch(x);

    }
};