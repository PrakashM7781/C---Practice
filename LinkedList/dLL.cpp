#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node(){
        if(this->next == NULL){
            delete next;
            this->next = NULL;
        }

    }
};

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    // cout << endl;
}

int length(Node* head){
    int len = 0;
    Node* temp = head;

    while(temp != NULL){
        len++;
        temp = temp -> next;
    }
    return len;
}

void insertAtHead(Node* &head,Node* tail, int data){
     if(head == NULL) {
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(data);
        temp -> next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node* &tail, Node* &head, int data){
    if(head == NULL){
        Node* temp = new Node(data);
        tail = temp;
        head = temp;
    }
    else{
        Node* temp = new Node(data);
        head->next = temp;
        temp->prev = head;
    }
}

void deleteNode(Node* &head, Node* &tail, int position){
    if(position == 1){
        Node* temp = head;
        head = head -> next;
        delete temp;
        head->prev = NULL;
        return;
    }

    Node* temp = NULL;
    Node* curr = head;

    int cnt = 1;
    while(cnt<position){
        temp = curr;
        curr = curr->next;
        cnt++;
    }

    temp->next = curr->next;
    curr->next->prev = temp;

    
}

void insertAtAnyPosition(Node* &head, Node* &tail, int data, int position){
    if(position == 1){
        insertAtHead(head,tail, data);
        return;
    }

    Node* nodeToInsert = new Node(data);
    Node* temp = head;
    int cnt = 1;
    while (cnt < position-1){
        
        temp = temp->next;
        cnt++;
    }

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    nodeToInsert->prev = temp;
    temp->next = nodeToInsert;
        
}

int main(){
//You can do it.
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    print(head);
    cout << endl;

    insertAtHead(head, tail, 20);
    print(head);

    cout << endl;

    // int vari = length(head);
    // cout << vari; 

    insertAtTail(head, tail, 30);
    print(head);


    cout << endl;

    // deleteNode(head, tail, 2);
    // print(head);

    // cout << head -> next << " " << head->prev;


    insertAtAnyPosition(head, tail, 40, 2);
    print(head);
    cout<<endl;
    deleteNode(head, tail, 3);
    print(head);
}