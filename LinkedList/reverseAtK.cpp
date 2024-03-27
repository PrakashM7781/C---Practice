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

   Node* reverseLL(Node* &head, int k){
        Node* prev = NULL;
        Node* curr = head;
        Node* forward = NULL;

        if(head == NULL){
            return NULL;
        }

        int count = 0;
        while(count < k){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
            count++;
        }

        if(head!=NULL){
            head->next = reverseLL(head, k);
            
        }
        return prev;
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
        while(head!=NULL){
            cout << head->data << " ";
            head = head -> next;
        }
   }

int main(){
   //You can do it.

   Node* newNode = new Node(20);
   Node* head = newNode;
   insertNode(head, 30);
   insertNode(head, 40);
   insertNode(head, 50);
   insertNode(head, 60);
   insertNode(head, 70);
   print(head);
   cout << endl;
   reverseLL(head, 2);
//    print(head);
   return 0;
}