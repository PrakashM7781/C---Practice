#include<bits/stdc++.h>
using namespace std;


vector<int> separateNegativeAndPositive(vector<int> &nums){
    int start = 0;
    int end = nums.size() - 1;

    while(start <= end){
        if(nums[start] <= 0){
            start++;
        }
        if(nums[end] > 0){
            end--;
        }
        else{
            swap(nums[start], nums[end]);
        }
    }
    return nums;
} 

int main(int argc, char const *argv[])
{
    vector<int> nums{1,4,-1,7,-2,7,-3};
   separateNegativeAndPositive(nums);

   for(int i = 0; i < nums.size() - 1; i++){
    cout << nums[i] << " ";
   }
    return 0;
}
