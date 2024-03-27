#include<bits/stdc++.h>
using namespace std;

class Item{
    public:
    int p,w;
    Item(int p, int w){
        this->p = p;
        this->w = w;
    }

    double getW(){
        return this->w;
    }
     double getP(){
        return this->p;
    }
};

bool cmp(Item a, Item b){
    double pr = a.getP() / a.getW();
    double we = b.getP() / b.getW();
    return pr>we;
}

int knapSack(int W, Item arr[], int N){
    sort(arr, arr+N, cmp);
    double final = 0.0;

    for(int i = 0; i < N; i++){
        if(arr[i].getW() < W){
            W -= arr[i].getW();
            final = final + arr[i].getP();
        }
        else{
            final = final + arr[i].getP() * (W/arr[i].getW());
            break;
        }
    }
    return final;
}


int main(){
   //You can do it.
   int W = 15;
   Item arr[7] = {{5,1},{10,2},{15,3},{8,2},{6,4},{5,3},{9,3}};
   cout << "Final Profit is: " << knapSack(W, arr, 7);
   return 0;
}