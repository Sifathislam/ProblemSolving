#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int testCase; cin >> testCase;
    while (testCase--)
    {
        int n; cin >> n;
        int arr[n];
        for (int i = 1; i <= n; i++)
        {
            if(i < 3){
                arr[i] = i * n;
            }
            else{
                if((arr[i] + arr[i- 1]) % (i * n)!= 0 && arr[i] < (i * n)){
                    int value = i * n;
                    if(value > 100000){
                    value = value % 100000;
                    arr[i] = value;
                    }
                }
            }
        }

        for (int i = 1; i <= n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        
        
    }
    
     

    return 0;
}