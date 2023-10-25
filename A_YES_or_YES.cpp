#include <bits/stdc++.h>
using namespace std;

int main()
{

    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        string s;
        cin >> s;
        if (s == "YES" || s == "yES" || s == "Yes"|| s == "yeS" || s == "yEs" || s == "YeS" || s == "yes" || s == "YEs")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}