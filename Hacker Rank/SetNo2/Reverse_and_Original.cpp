#include<bits/stdc++.h>
using namespace std;
class Node {
public:
  int val;
  Node *next;
  // Create an constructor
  Node(int val) {
    this->val = val;
    this->next = NULL;
  }
};
void SiglyList(int val, Node* &head, Node* &tail){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
    }
    else{
        tail->next = newNode;
        tail = newNode;
    }
}
void reverseList(Node* head){
  if(head == NULL) return;
  reverseList(head->next);
  cout << head->val << " ";
}
void normalList(Node* head){
  if(head == NULL) return;
  cout << head->val << " ";
  normalList(head->next);
}

int main(){

    Node* Head = NULL;
    Node* Tail = NULL;
    int n; 
    while (true)
    {
      cin >> n;
      if(n == -1) break;
        SiglyList(n,Head, Tail);
    }

    reverseList(Head);
    cout << endl;
    normalList(Head);
    
        
        
     

    return 0;
}