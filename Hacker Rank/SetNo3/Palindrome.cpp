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

void list_Insertion(int val,Node*& Head,Node*& Tail){
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

void StoreReverse(Node* temp,Node* &Head, Node* &Tail){
    if(temp == NULL) return;

    StoreReverse(temp->next, Head,Tail);
    list_Insertion(temp->val, Head, Tail);
}

int main(){
    
    Node* Head = NULL;
    Node* Head2 = NULL;
    Node* Tail = NULL;
    Node* Tail2 = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if(val == -1) break;
        list_Insertion(val, Head, Tail);
    }
    StoreReverse(Head, Head2,Tail2);
    
    Node* tmp1 = Head2;
    Node* tmp2 = Head;
    while (tmp1 != NULL)
    {
        if(tmp1->val != tmp2->val){
            cout << "NO" << endl;
            return 0;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }

    cout << "YES" << endl;
    

    return 0;
}