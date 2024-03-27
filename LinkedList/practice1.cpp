#include<iostream>
#include<map>
using namespace std;

class Node  {

    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

};



void insertNode(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp; 
}


void print(Node* &head){

    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    Node* node1 = new Node(10);


    Node* head = node1;
    Node* tail = node1;

    insertNode(head, 12);
    print(head);

    cout << endl;
    int n;
    cin >> n;
    insertNode(head, n);
    print(head);

    cout << endl;

    
    return 0;
}
