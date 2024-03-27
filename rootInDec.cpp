#include<iostream>
#include<vector>
using namespace std;

long long int tempSol(long long int n){
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

double perfectPrecision(long long int n, int precision, int temp){
    double factor = 1;
    double ans = temp;
    for(int i = 0; i<precision; i++){
        factor = factor/10;
        for(double j = ans; j*j < n; j = j + factor){
            ans = j;
        }
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int temp = tempSol(n);
    double sq = perfectPrecision(n, 3, temp);
    cout << sq << endl;
    return 0;
}
