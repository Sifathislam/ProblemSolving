#include<bits/stdc++.h>
using namespace std;

int main(){

     int n; cin >> n;

     int sizeOfBody = (5 * 2) + n; 
     int sizeOfHead = (sizeOfBody / 2) + 1;
     int sizeOfSpace = (sizeOfBody / 2);
     int sizeOfTail = 5;
     int k = 1;
    
    for (int i = 1; i <= sizeOfHead; i++)
    {
        for (int j = 1; j <= sizeOfSpace; j++)
        {
                cout << " ";
        }
        for (int j = 1; j <=k ; j++)
        {
                cout << "*";
        }
        k+=2;
        sizeOfSpace--;
        cout << endl;
    }
    
    for (int i = 1; i <= sizeOfTail; i++)
    {
        for (int j = 1; j <=sizeOfTail; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    

    return 0;
}