#include<iostream>
#include<vector>
using namespace std;


int concatDigits(vector<int> arr){
    int ans = 0;
    for(int i = 0; i < arr.size(); i++){
        ans = ans*10 + arr[i];
    }
    return ans;
}

vector<int> sumOfTwoArrays(vector<int> a, vector<int> b){
    int val1 = concatDigits(a);
    int val2 = concatDigits(b);
    vector<int> ans;
    int result = val1 + val2;
    cout<<result<<endl;
    while(result!=0){
        ans.push_back(result%10);
        result = result/10;
    }
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" "<<endl;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(int argc, char const *argv[])
{
    vector<int> a{1,2,3,4};
    vector<int> b{5,6};
    vector<int> ans = sumOfTwoArrays(a, b);
    
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    
    return 0;
}
