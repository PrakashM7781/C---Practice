#include<iostream>
#include<vector>
using namespace std;

void pivotIndex(int a[], int n){
    int s1 =0; int s2=0;
    for(int i =0;i<n-1;i++)
    {
        int s1 =0; int s2=0;
        for(int k =0;k<=i;k++)
        {
            s1 +=a[k];      
        }
        for(int j = i+2;j<n;j++)
        {
            s2 +=a[j];  
        }

        if(s1 == s2)
        {
            cout<<"Pivot element is"<<" "<<i+1;break;
        }
        // else if(s1 != s2)
        // {
        //     continue;
        // }

        // else if(i == n-2)
        // {
        //     cout<<"0(no pivot element)";break;
        // } 

   }
   
}


int pivotInd(vector<int> arr, int n){
    
    int pivot = -1;
    for(int i = 0; i<n-1;i++){
        int sum1 = 0;
        int sum2 = 0;
        for(int j = 0; j<i; j++){
            sum1 = sum1 + arr[j];
        }
        for(int k = n-1; k>i; k--){
            sum2 = sum2 + arr[k];
        }
        if(sum1 == sum2){
            pivot = i;
            break;
        }
        
    }
    return pivot;
}

int main()
{
    vector<int> a{1,7,3,6,5,6};
    int arr[6] = {1,7,3,6,5,6};
    pivotIndex(arr, 6);
    cout << endl;
    int piv = pivotInd(a, 6);
   
    cout << piv;
    return 0;
}
