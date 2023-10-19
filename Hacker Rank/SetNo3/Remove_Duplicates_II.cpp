#include<bits/stdc++.h>
using namespace std;

int main(){

     list<int> listitems;
     int val;
     while (true)
     {
        cin >> val;
        if(val == -1){
            break;
        }
        listitems.push_back(val);
     }
     listitems.sort();
     listitems.unique();

     for (auto &&i : listitems)
     {
        cout << i << " ";
     }
     
     

    return 0;
}