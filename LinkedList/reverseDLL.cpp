#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    Node* prev;
    Node* next;
    int data;

    Node(int data){
        this->data = data;
        this->prev=NULL;
        this->next = NULL;
    }
};

void insert(Node* &head,int data){
    if(head == NULL){
        Node* newNode = new Node(data);
    }

    else{
        Node* newNode = new Node(data);
    }
}

int main(){
   //You can do it.
   return 0;
}