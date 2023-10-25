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
void SinglyList(int n,Node* &head, Node* &tail){
    // Create the node 
    Node* newNode = new Node(n);
    if(head == NULL){
        head = newNode; 
        tail  = newNode;
    }
    else{
        tail->next = newNode;
        tail = newNode;
    }
}
int main(){
        int n;
        Node* head = NULL;
        Node* tail = NULL;
        while (true)
        {
            cin >> n;
            if(n == -1) break;
            SinglyList(n, head,tail);
        }
        Node* temp = head;
        int minn = INT_MAX;
        int maxx= INT_MIN;
        while (temp!= NULL)
        {
            minn = min(minn, temp->val);
            maxx = max(maxx, temp->val);
            temp = temp->next;
        }
    
    cout << maxx << " " << minn << endl;
   return 0;
}