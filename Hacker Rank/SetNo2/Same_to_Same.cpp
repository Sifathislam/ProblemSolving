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
void singly_List(int n, Node* &Head, Node* &Tail){
    Node* newNode = new Node(n);
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
    
        Node* Head = NULL;
        Node* Tail = NULL;
        Node* Head2 = NULL;
        Node* Tail2 = NULL;
        int n,sizeofhead1 = 0, sizeofhead2 = 0;

        while (true)
        {
            cin >> n;
            if(n == -1) break;
            sizeofhead1++;
            singly_List(n, Head, Tail);
        }

        while (true)
        {
            cin >> n;
            if(n == -1) break;
            sizeofhead2++;
            singly_List(n, Head2, Tail2);
        }

        if(sizeofhead1 != sizeofhead2){
            cout << "NO" << endl;
            return 0;
        }

        while (Head != NULL)
        {
            if(Head2->val != Head->val){
                cout <<"NO";
                return 0;
            }
            Head2 = Head2->next;
            Head = Head->next;
        }

        cout << "YES" << endl;

     

    return 0;
}