#include<bits/stdc++.h>
using namespace std;
typedef pair<int,string> pis;
int main(){

     int testCase; cin >> testCase;
     while (testCase--)
    {
        // Take input s 
        int n; cin >> n;
        int cypher[n];
        for (int i = 0; i < n; i++)
        {
            cin >> cypher[i];
        }
        vector<pis> v[n];
        for (int i = 0; i < n; i++)
        {
            int x; cin >> x;
            string s; cin >> s;
            v[i].push_back({x,s});
        }
        
        for (int i = 0; i < n; i++)
        {
            for (auto &&val : v[i])
            {
                for (auto &&s : val.second)
                {
                    if(cypher[i] == 0 && s == 'U'){
                        cypher[i] = 9;
                    }
                    else if (cypher[i] == 9 && s == 'D')
                    {
                        cypher[i] = 0;
                    }
                    else if(cypher[i] > 0 && cypher[i] <= 9 && s == 'U'){
                        cypher[i]--;
                    }
                    else if(cypher[i] >= 0 && cypher[i] < 9 && s == 'D'){
                        cypher[i]++;
                    }
                    
                }
                
                
            }
            
        }
        for (int i = 0; i < n; i++)
        {
            cout << cypher[i] << " ";
        }
        cout << endl;
         
     }
     

    return 0;
}