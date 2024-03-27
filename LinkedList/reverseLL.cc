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

void insertNode(Node* &head, int data){
    if(head == NULL){
        Node* newNode = new Node(data);
    }

    else{
        Node* temp = head;
        
        Node* newNode = new Node(data);
        newNode -> next = temp;
        head = newNode;
    }
}

void reverseLinkedList(Node* &head, Node* &curr, Node* &prev){
    if(curr == NULL){
        head = prev;
        return;
    }

    Node* forward = curr->next;
    // head = prev;
    reverseLinkedList(head, forward, curr);
    // return prev;
}

void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    // Node* node1 = new Node(10);
    Node* head = NULL;
    insertNode(head, 8);
    insertNode(head, 6);
    insertNode(head, 4);
    insertNode(head, 3);
    print(head);
    // Node* curr = head;
    // Node* prev = NULL;
    // reverseLinkedList(head, curr, prev);
    // print(curr);
return 0;
}