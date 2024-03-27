#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next = NULL;
    }

    ~Node(){
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
    }
};

void insertNode(Node* &tail, int element, int data){
    if(tail == NULL){
        Node* newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode;
    }

    else{
        
        Node* curr = tail;
        while(curr->data != element){
            curr = curr->next;
        }
        Node* temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
        
    }
}

void deleteNode(Node* tail, int value){
    Node* prev = tail;
    Node* temp = prev->next;
    
    while(temp->data!=value){
        prev = temp;
        temp = temp->next;
    }

    
    prev->next = temp->next;

    if(temp == prev){
        temp->next=NULL;
    }

    if(tail == temp){
        tail = prev;
    }
    temp->next = NULL;
    delete temp;
    
}

void print(Node* tail){
    Node* temp = tail;
    do{
        cout << tail->data << " ";
        tail = tail->next;
    }while(tail!=temp);
    // cout << endl;
    

}

int main(){
//You can do it.
    // Node* node1 = new Node(10);
    Node* tail = NULL;
    insertNode(tail, 8, 10);
    insertNode(tail, 10, 8);
    insertNode(tail, 8, 5);
    insertNode(tail, 10, 3);
    print(tail);
    cout << endl;
    deleteNode(tail, 8);
    print(tail);

    return 0;
}



