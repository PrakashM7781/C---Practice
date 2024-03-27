#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][3];
    cout<<"Enter the value of matrix: ";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<=3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }cout<<"\n";
    }

    int i=0, j=3;
    int d1 =0, d2=0;
    while(i<3 && j>0){
        d2 = d2+arr[i][j];
        cout<<d2<<endl;
        i++;
        j--;
    }
    cout<<d2<<endl;
    while(i<3 && j>0){
        if(i==j){
            d1 = d1+arr[i][j];
            i++;
            j--;
        }
    }
    cout<<d1<<endl;;


   cout<<d1-d2;

    return 0;
}