#include<bits/stdc++.h>
using namespace std;

int main(){
     
     int n; cin >> n;
     int space = n / 2;
     int star = 1;
     for(int i = 0; i < n; i++){
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < star; j++)
        {
            cout << "*";
        }
        cout << endl;
        
        if(i < n / 2){
            space--;
            star+=2;
        }
        else{
            space++;
            star-=2;
        }
     }
     

    return 0;
}