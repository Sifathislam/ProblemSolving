#include<bits/stdc++.h>
using namespace std;

int main(){

     int testCase; cin >> testCase;
     while (testCase--)
     {
        int n; cin >> n;
        int counter = 0;
        double total = 0;
        
        while (total < 100)
        {
            total += n * 0.20;
            counter++;
        }
        
        cout << counter << endl;
     }

    return 0;
}