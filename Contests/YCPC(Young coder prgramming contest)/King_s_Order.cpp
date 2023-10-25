#include<bits/stdc++.h>
using namespace std;

class Edges{
    public:

    long long int v, u , w;
    Edges(long long int u, long long int v, long long int w){
        this->u = u;
        this->v = v;
        this->w = w;
    }
};
int main(){
    vector<Edges> var;
     int n, e; cin >> n >> e;
    
    while (e--)
    {
        long long int u, v, w; cin >> u >> v >> w;
        var.push_back(Edges(u,v,w));
    }
    
    return 0;
}