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

void sigly_insertion(int val, Node* &head, Node* &tail){
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
void DeleteDuplicate(Node* Head){
    Node* temp = Head;
    while (true)
    {
        if(temp->next == NULL){
            return;
        }
        if(temp->next != NULL && temp->val != temp->next->val){
            temp = temp->next;
        }
        else if (temp->next != NULL && temp->val == temp->next->val)
        {
            Node* deleteNode = temp->next;
            temp->next = temp->next->next;
            delete deleteNode;
        }
        
    }
    
}

int main(){

    Node* Head = NULL;
    Node* Tail = NULL;

    vector<int> v;
    int n = v.size();
    int val; 
    while (true)
    {
        cin >> val;
        if(val == -1) break;
        v.push_back(val);
    }

    sort(v.begin(), v.end());

    for (auto &&i : v)
    {
        sigly_insertion(i,Head, Tail);
    }
    
    DeleteDuplicate(Head);

    Node* temp = Head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    
    return 0;
}