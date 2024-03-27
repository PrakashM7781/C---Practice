#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
        int size;
        int *arr;
        int top;

    //behaviour
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout << "Stack overflow" << endl;
        }
    }

    void pop(){
        if(top >= 1){
            top--;
        }
        else{
            cout << "Stack Underflow";
        }
    }

    int peek(){
        cout << arr[top] << endl;
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};



int main(){
   
    Stack st(5);

    st.push(23);

    cout << st.peek() << endl;

   return 0;
}