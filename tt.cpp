
// #include<iostream>
// using namespace std;


// void fibo(int n1,int n2){
//         if((n1 + n2) > 100){
//             return ;
//         }
//         int n3 = n1 + n2;
//         cout << n3 << " ";
//         n1 = n2;
//         n2 = n3;
//         fibo(n1,n2);
//     }

// int main(int argc, char const *argv[])
// {

//     // ----------------------ANSWER 1--------------------------


//     int n = 10;
    
//     // int num1 = 0; 
//     // int num2 = 1;
//     // cout << num1 << " " << num2 << " ";
    
//     // for(int i = 0; i < n; i++){
//     //     int num3 = num1 + num2;
//     //     num1 = num2;
//     //     num2 = num3;
//     //     cout << num3 << " ";
        
//     // }
//     // cout << endl << endl << endl;


//     // ------------------ ANSWER2 -------------------------
//     // int m = 5;

//     // for(int i = 0; i < m; i++){
//     //     for(int j = 0; j <= i; j++){
//     //         cout << "*" << " "; 
//     //     }
//     //     cout << endl;
//     // }
//     // return 0;



//     //-----------------ANSWER 3----------------------

//     int n1 = 0;
//     int n2 = 1;
//     cout << n1 << " " << n2 << " ";
//     fibo(n1,n2);
// }




#include<iostream>
using namespace std;


int rep(int arrrep[], int n){
    
    return -1;
}

int main(int argc, char const *argv[])
{
    int arr[6] = {1,3,7,9,11,17};
    int temp = 0;
    int m = 6;
    for(int i = 0; i<(m/2); i++){
        temp = arr[i];
        arr[i] = arr[m-1-i];
        arr[m-1-i] = temp;
    }

    for(int i = 0; i < 6; i++){
        cout << arr[i] << " ";
    }

 
    int arrrep[6] = {1,2,3,1,2,3};
    int n = 6;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arrrep[i] == arrrep[j]){
                cout << arrrep[i];
                return arrrep[i];
            }
        }
    }
    return 0;
}
