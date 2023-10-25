#include<bits/stdc++.h>
using namespace std;
class Node {
public:
  int val;
  Node *prev;
  Node *next;
  // Create an constructor
  Node(int val) {
    this->val = val;
    this->prev = NULL;
    this->next = NULL;
  }
};
void Insert_Head(int val, Node* &head, Node* &tail){
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else{
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void InsertTail(int val, Node* &head, Node* &tail){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
    }
    else{
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void InserPosition(int val, int pos, Node* Head){
    Node* newNode = new Node(val);
    Node* tmp = Head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next->prev = newNode;
    tmp->next = newNode;
    newNode->prev = tmp;   
}
void printLeft(Node* Head){
    while (Head != NULL)
    {
        cout << Head->val << " ";
        Head = Head->next;
    }
    
}
void printRight(Node* Tail){
    while (Tail != NULL)
    {
        cout << Tail->val << " ";
        Tail = Tail->prev;
    }
    
}

int main(){
    Node* Head = NULL;
    Node* Tail = NULL;

    int testCase; cin >> testCase;
    int sizeoflist = 0;
    while (testCase--)
    {
        int n,val; cin >> n >> val;
        if(n == 0){
            sizeoflist++;
            Insert_Head(val,Head,Tail);
            cout << "L -> ";
            printLeft(Head);
            cout << endl;
            cout << "R -> ";
            printRight(Tail);
            cout << endl;
        }
        else if(n == sizeoflist){
             sizeoflist++;
            InsertTail(val,Head,Tail);
            cout << "L -> ";
            printLeft(Head);
            cout << endl;
            cout << "R -> ";
            printRight(Tail);
            cout << endl;
        }
        else{
           if(n > sizeoflist){
            cout << "Invalid" << endl;
           }
           else{
            sizeoflist++;
            InserPosition(val,n,Head);
            cout << "L -> ";
            printLeft(Head);
            cout << endl;
            cout << "R -> ";
            printRight(Tail);
            cout << endl;
           }
        }
    }
    


     

    return 0;
}