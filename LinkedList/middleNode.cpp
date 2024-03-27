#include<bits/stdc++.h>
using namespace std;

class Node 
        { 
        public:
            int data;
            Node* next;
            Node(int data) 
            {
               this->data = data;
              this->next = NULL;
            }
        };


int getLength(Node* &head){
    int len = 0;
    while(head != NULL){
        len++;
        head = head -> next;
    }
    return len;
}

void insertNode(Node* &head, int data){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
    }

    else{
        Node* temp = head;
        Node* newNode = new Node(data);
        newNode -> next = temp;
        head = newNode;
    }
}

Node *findMiddle(Node *head) {
    // Write your code here
    Node* temp = head;
    int len = getLength(temp);
    int i = len/2;
    int cnt = 0;
    while(cnt < i){
        temp = temp -> next;
        cnt++;
    }
    return temp;
}

void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    // Node* newNode = new Node(22);
    Node* head = NULL;
    insertNode(head, 20);
    insertNode(head, 18);
    insertNode(head, 16);
    insertNode(head, 14);
    insertNode(head, 12);
    print(head);

    cout << endl;
    int len = getLength(head);
    cout << len;
    Node* temp = findMiddle(head);
    cout << temp->data;
    return 0;
}