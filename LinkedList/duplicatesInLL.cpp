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

    ~Node(){
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
    }
   };

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
        while(head!=NULL){
            cout << head->data << " ";
            head = head -> next;
        }
   }


   void removeDuplicate(Node* &head){
        Node* prev = head;
        Node* curr = head->next;
        Node* forward = NULL;

        while(curr!=NULL){
            if(prev->data == curr->data){
                forward = curr->next;
                prev->next = forward;
                delete curr;
                curr = forward;
            }
            else{
                prev = curr;
                curr=curr->next;
            }
            
        }
   }

int main(){
   Node* newNode = new Node(1);
   Node* head = newNode;
   insertNode(head, 1);
   insertNode(head, 2);
   insertNode(head, 3);
   insertNode(head, 3);
   insertNode(head, 4);
   print(head);

   removeDuplicate(head);
   print(head);
   return 0;
}