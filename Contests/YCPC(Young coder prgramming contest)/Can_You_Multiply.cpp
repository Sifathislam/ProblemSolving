#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
     long long int t; cin>> t; 
     while (t--)
     {
        long long int a, b; cin>> a >> b;

        long long int c = (a % 1000)* (b % 1000);
    
        long long int e = c % 100;
        
        cout << e << endl;
        
     }
     
    return 0;
}