// Problem link: https://codeforces.com/contest/1881/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        int cnt = 0;
        bool w = true;
        while (true)
        {
            bool flag = false;
            cnt++;
            x += x;
            int i = 0;
            int j = 0;
            if (x.size() >= s.size())
            {
                while (true)
                {
                    if(i > s.size() || j > x.size()){
                        break;
                    }
                    if (s[i] == x[j])
                    {
                        i++;
                        j++;
                    }
                    else
                    {
                        j++;
                        i = 0;
                    }
                    if(i == s.size()){
                        flag = true;
                        break;
                    }
                }
                if(x.size() >= s.size() && flag == false){
                    cout << -1 << endl;
                    break;
                }
                else if(x.size() >= s.size() && flag == true){
                    cout << cnt << endl;
                    break;
                }
            }
        }
    }

    return 0;
}
