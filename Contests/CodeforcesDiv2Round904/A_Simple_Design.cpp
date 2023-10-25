#include <bits/stdc++.h>
using namespace std;

int main()
{

    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int x, k;
        cin >> x >> k;
        while (true)
        {
            int total = 0;
            int xx = x;
            while (xx > 0)
            {
                total += xx % 10;
                xx = xx / 10;
            }
            if (total % k == 0){
                cout << x << endl;
                break;
            }
            else{
                x++;
            }
        }
    }

    return 0;
}