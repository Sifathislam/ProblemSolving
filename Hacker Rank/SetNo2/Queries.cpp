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
void singlylistHead(int val, Node* &Head, Node* &Tail){
    Node* newNode = new Node(val);
    if(Head == NULL){
        Head = newNode;
        Tail = newNode;
    }
    else{
        newNode->next = Head;
        Head = newNode;
    }

}
void singlylistTail(int val, Node* &Head, Node* &Tail){
    Node* newNode = new Node(val);
    if(Head == NULL){
        Head = newNode;
        Tail = newNode;
    }
    else{
        Tail->next = newNode;
        Tail = newNode;
    }

}
int main(){

     int q; cin>> q;
    Node* head = NULL;
    Node* tail = NULL;

     while (q--)
     {
        int x , val;
        cin >> x >> val;

        if(x == 0){
            singlylistHead(val,head, tail);
             cout << head->val << " ";
            cout << tail->val << endl;
        }
        else if (x == 1)
        {
            singlylistTail(val, head, tail);
            cout << head->val << " ";
            cout << tail->val << endl;
        }
        
     }
     

    return 0;
}