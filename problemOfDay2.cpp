#include <bits/stdc++.h> 
using namespace std;

vector<int> decToBin(int x){
      vector<int> binaryNumber;
      int i = 0;
      while(x>0){
        int rem = x%2;
            binaryNumber.push_back(rem);
            x = x/2;
            i++;
      }
      return binaryNumber;
}

// int binToDec(vector<int> arr, int n){
//       int sum = 0;
//       for(int i = 0; i<=n-1; i++){
//             double p = i;
//             sum = sum + arr[i] * pow(2.0,p);
//       }
//       return sum;
// }

void bitInsertion(int x, int y, int a, int b)
{
      vector<int> binOfx = decToBin(x);
      vector<int> binOfy = decToBin(y);

    for(int i = 0; i < binOfy.size(); i++){
        cout << binOfy[i];
    }cout << endl;

      int i = 0;
      int sizeOfx = binOfx.size();
      int sizeOfy = binOfy.size();
      while(a <= b){
        if (i <= sizeOfy) {
          binOfx[a] = binOfy[i];
          i++;
          a++;
        }
        else{
              binOfx[a] = 0;
              i++;
              a++;
        }
      }

      for(int i = 0; i < binOfx.size(); i++){
        cout << binOfx[i];
    }
    //   return binToDec(binOfx, sizeOfx);
      
}



int main(){
   bitInsertion(1536,7,1,5);
   return 0;
}