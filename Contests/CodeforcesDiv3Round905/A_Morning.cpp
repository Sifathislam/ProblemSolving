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
        int sec_Counter = 0;
        int i = 1;
        for (auto val : s)
        {
            
            int int_val = val - '0';
            while (true)
            {
                if (i == int_val)
                {
                    sec_Counter++;
                    break;
                }
                else if (i > int_val)
                {
                    sec_Counter++;
                    i--;
                    if (i < 0)
                    {
                        i = 9;
                    }
                }
                else if (i < int_val)
                {
                    sec_Counter++;
                    i++;
                    if (i > 9)
                    {
                        i = 0;
                    }
                }
            }
        }
        cout << sec_Counter << endl;
    }

    return 0;
}