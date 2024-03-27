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

void insertNode(Node* &head, Node* &tail, int data){
        if(head == NULL){
            Node* newNode = new Node(data);
            head = newNode;
            tail = newNode;
        }

        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
   }

void insertAtTail(Node* &tail, Node* &head, int data){
    if(tail == NULL){
        Node* newNode = new Node(data);
        tail = newNode;
    }

    else{
        Node* newNode = new Node(data);
        tail->next = newNode;
        tail = newNode; 
    }
}

   void print(Node* head){
        while(head!=NULL){
            cout << head->data << " ";
            head = head -> next;
        }
   }

   bool detectLoop(Node* &head){
    if(head == NULL){
        return false;;
    }

    map<Node*, bool> visited;
    Node* temp = head;
    while(temp !=NULL){
        if(visited[temp] == true){
           return 1; 
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
   }

bool isPalindrome(Node *head) {
    // Write your code here.
    vector<int> arr;
    while(head!=NULL){
        arr.push_back(head->data);
        head = head->next;
    }
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] != arr[arr.size() - i - 1]){
            return false;
        }
    }
    return true;

}

Node* addTwoLists(Node* first, Node* second) {
    // Write your code here.
    int num1 = 0;
    int num2 = 0;
    while(first!=NULL){
        num1 = num1 * 10 + (first->data);
        first = first -> next;
    }
    cout << num1 << endl;

    while(second!=NULL){
        num2 = num2 * 10 + (second->data);
        second = second->next;
    }
    cout << num2 << endl;

    int sum = num1 + num2;
    cout << sum << endl;
    Node* head = NULL;
    Node* tail = NULL; 
    while(sum>0){
        int rem = sum%10;
        insertNode(head, tail, rem);
        sum = sum/10;
    }
    return head;
}

int main(){
   //You can do it.
   Node* node1 = new Node(6);
   Node* head = node1;
   Node* tail = node1;
   insertNode(head, tail, 5);
   insertNode(head, tail, 4);
//    insertNode(head, tail, 4);
//    Node* forward = head->next;
//    insertNode(head, tail, 5);
   
   insertNode(head, tail, 6);
//    insertAtTail(head, tail, 4);
   print(head);
//    tail->next = forward;
//    cout << endl;
//    cout << head->data << " " << tail->data << endl;

//    if(detectLoop(head)){
//         cout << "Cycle is present";
//    }else{
//         cout << "No cycle";
//    }

   cout << endl;

//    bool ret = isPalindrome(head);
//    cout << ret;



Node* node2 = new Node(7);
Node* second = node2;
Node* secLast = node2;

insertNode(second, secLast, 1);
insertNode(second, secLast, 2);
insertNode(second, secLast, 5);
print(second);

cout << endl;
Node* result = addTwoLists(head, second);
print(result);
   return 0;
}