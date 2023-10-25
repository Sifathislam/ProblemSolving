#include<bits/stdc++.h>
using namespace std;

int main(){

     stack<int> s;
     queue<int>q;
    int s_n, q_n; cin >> s_n >> q_n;
    if(s_n != q_n){
        cout << "NO" ;
        return 0;
    }

     for (int i = 0; i < s_n; i++)
     {
        int x; cin>> x;
        s.push(x);
     }
     
     for (int i = 0; i < q_n; i++)
     {
        int x; cin>> x;
        q.push(x);
     }

     for (int i = 0; i < s_n; i++)
     {
        if(q.front() != s.top()){
            cout << "NO" << endl;
            return 0;
        }
        q.pop();
        s.pop();
     }
     cout << "YES" << endl;
     
     
     
     

    return 0;
}