#include<bits/stdc++.h>
using namespace std;

int main(){

     int test_Case; cin >> test_Case;

     while (test_Case--)
     {
        int a, b, c; cin >> a >> b >> c;

        if(a + b >= 10 || b + c >= 10 || a + c >= 10) cout << "YES" <<endl;
        else cout << "NO" << endl;
     }
     

    return 0;
}