#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    // Take input 
    ll n;
    cin >> n;
    ll arr[n];

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Do the opaation 
    ll x; cin >> x;
    while (x--)
    {
        ll a, b, c; cin >> a >> b >> c;
        for (ll i = a; i <= b; i++)
        {
            arr[i]+=c;
        }
    }


    // Print the result 
    for (ll i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    

    return 0;
}