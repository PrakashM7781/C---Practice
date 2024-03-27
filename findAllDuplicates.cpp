#include<bits/stdc++.h>
using namespace std;

// vector<int> findAllDuplicates(vector<int> arr){
//     vector<int> ans;
//     for(int i = 0; i < arr.size(); i++){
//         int index = abs(arr[i]);
//         if(arr[index] < 0){
//             ans.push_back(arr[i]);
//         }
//         arr[index] = -arr[index];
//     }
//     return ans;

// }

vector<int> findAllDuplicates(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == nums[i+1]){
                ans.push_back(nums[i++]);
            }
        }
        return ans;
}

int main(int argc, char const *argv[])
{
    vector<int> arr{4,3,2,7,8,2,3,1};
    vector<int> ans = findAllDuplicates(arr);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}
