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

int getLength(Node* head){
    int len = 0;
    while(head!=NULL){
        head = head->next;
        len++;
    }
    return len;
}

Node* reverseLinkedList(Node* &head, int k){
    Node* curr = head;
    int len = getLength(head);
    int i = 0;
    while(i < len){
        int j = 0;
        Node* prev = NULL;
        while(j < k && curr!=NULL){
            Node* forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
            j++;     
        }
        head->next = curr;
        head = curr;
        i++;
    }
    

    return head;
}

void insertNode(Node* &head, int data){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
    }

    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp -> next;
    }
}

int main(){
    Node* newNode = new Node(10);
    Node* head = newNode;
    
    insertNode(head, 12);
    insertNode(head, 14);
    insertNode(head, 16);
    insertNode(head, 18);
    print(head);

    cout << endl;
    reverseLinkedList(head, 3);
    print(head);
    return 0;
}