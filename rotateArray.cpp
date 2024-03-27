#include<iostream>
#include<vector>
using namespace std;


void rotate(vector<int>& nums, int k) {
        int i = 0;
        int n = nums.size();
        while(i < n){
            int j = i + k;
            j = j%10;
            nums[j] = nums[i];
            i++;
        }
    }


int main(int argc, char const *argv[])
{
    vector<int> arr{1,2,3,4,5,6,7};
    int k = 3;
    rotate(arr, k);
    for(int i:arr){
        cout<<arr[i]<<" ";
    }
    return 0;
}
