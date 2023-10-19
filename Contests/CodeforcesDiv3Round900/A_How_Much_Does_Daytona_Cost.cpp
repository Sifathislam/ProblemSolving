#include<bits/stdc++.h>
using namespace std;

int main(){

     int testCase; cin >> testCase;
     while (testCase--)
     {
        // Take input 
        int n, k; cin >> n >> k;
        int arr[n];
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if(arr[i] == k){
                flag = true;
                break;
            }
        }
        
        if(flag) {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        
     }
     

    return 0;
}