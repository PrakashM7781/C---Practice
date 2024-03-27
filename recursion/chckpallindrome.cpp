#include<bits/stdc++.h>
using namespace std;

int check(long long n, int num, int rem){
	if(n == 0){
		return num;
	}

	rem = n % 2;
	num = num * 10 + rem;
	n = n/2;
	check(n, num, rem);
    cout << num << "";
	return num;
}

// bool checkPalindrome(long long N)
// {
// 	return true;
// }



int main(int argc, char const *argv[])
{
    // checkPalindrome(3);
    int sum = check(3,0,0);
    cout << endl << sum;
    return 0;
}


// vector<int> checkPallindrome(int n){
//     vector<int> temp;
//     int rem = 0;
//     int reverse = 0;
//     int i = 0;
//     while(n > 0){
//         rem = n % 2;
//         reverse = reverse * 10 + rem;
//         n = n/2;
//         temp.push_back(rem);
//         i++;
//         // cout << reverse << " ";
//     }
//     for(int i = 0; i < temp.size(); i++){
//         cout << temp[i] << " ";
//     }
//     return temp;

//     // cout << endl << reverse << " ";
    
// }

// int main(int argc, char const *argv[])
// {
//     vector<int> temp = checkPallindrome(243);
//     int start = 0;
//     int end = temp.size() - 1;
//     bool flag = true;
//     for(int i = 0; i < temp.size()/2; i++){
//         if(temp[start] != temp[end]){
//             flag = false;
//         }
//         else{
//             start++;
//             end--;
//             flag = true;
//         }
//     }
//     cout << endl << flag;
//     return 0;
// }
