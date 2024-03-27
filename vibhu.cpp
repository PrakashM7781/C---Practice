#include<bits/stdc++.h>
using namespace std;

int squareOfSeries(int n){
    if(n == 1){
        return 1;
    }

    int ans = pow(n ,2);
    return ans + squareOfSeries(n - 1);

}

int main(int argc, char const *argv[])
{
    int n = 10;
    int series = squareOfSeries(n);
    cout << series;
    return 0;
}
