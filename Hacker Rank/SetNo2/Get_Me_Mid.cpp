#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    // Create an constructor
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void singly_List(int n, Node *&Head, Node *&Tail)
{
    Node *newNode = new Node(n);
    if (Head == NULL)
    {
        Head = newNode;
        Tail = newNode;
    }
    else
    {
        Tail->next = newNode;
        Tail = newNode;
    }
}

int main()
{

    Node *Head = NULL;
    Node *Tail = NULL;
    int n, sizeofhead = 0;
    vector<int> v;
    while (true)
    {
        cin >> n;
        if (n == -1)
            break;
        sizeofhead++;
        v.push_back(n);
    }
    if (sizeofhead == 1)
    {
        cout << v.back();
        return 0;
    }

    sort(v.begin(), v.end());
    while (!v.empty())
    {
        singly_List(v.back(), Head, Tail);
        v.pop_back();
    }

    int x = sizeofhead / 2;

    if (sizeofhead % 2 == 0)
    {
        x--;
        while (x--)
        {
            Head = Head->next;
        }
        cout << Head->val << " ";
        cout << Head->next->val;
    }
    else
    {
        while (x--)
        {
            Head = Head->next;
        }
        cout << Head->val;
    }

    return 0;
}