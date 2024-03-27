#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

int length(Node* head){
    int len = 1;
    Node* temp = head->next;
    while(temp!=head){
        temp = temp->next;
        len++;
    }
    return len;
}

void insertNode(Node* &head, int data){
    if(head==NULL){
        Node* newNode = new Node(data);
        head = newNode;
    }
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode; 
}

void print(Node* head){
    while(head != NULL){
        cout << head->data << " ";
    }
}

void divideLL(Node* &head){
    int len = length(head);
    int k = 0;
    if(len%2==0){
        len = len/2;
    }
    else{
        len = len/2+1;
    }
    Node* temp = head;
    int count = 0;
    while(count < len){
        temp = temp->next;
        count++;
    }
    Node* forward = temp->next;
    // temp->next = head;
    temp = forward;
    count = 0;
    while(temp->next!=head){
        temp = temp->next;
    }
    temp->next = forward;
    print(head);
    print(forward);
}

int main(){
   //You can do it.
   Node* head = NULL;
   insertNode(head, 1);
   insertNode(head, 2);
   insertNode(head, 3);
   insertNode(head, 4);
   insertNode(head, 5);
   insertNode(head, 6);
   print(head);
   cout << endl;

   divideLL(head);
   return 0;
}