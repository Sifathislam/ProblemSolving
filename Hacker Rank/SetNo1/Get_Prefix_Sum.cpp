#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){

        ll n; cin >> n;
        ll arr[n];
        vector<ll> perfixSum;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        perfixSum.push_back(arr[0]);

        for (int i = 1; i < n; i++)
        {
            perfixSum.push_back(perfixSum[i-1]+arr[i]);
        }
        
        sort(perfixSum.begin(),perfixSum.end(),greater<ll>());

      for (int i = 0; i < perfixSum.size(); i++)
      {
        cout << perfixSum[i] << " ";
      }
      
        
        
        
        

    return 0;
}