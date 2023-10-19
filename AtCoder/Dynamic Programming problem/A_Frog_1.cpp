#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+9; 
int arr[N];
int dp[N];
int ChoiceMin(int n){
    // Base case 
    if(n == 1) return 0;

    if(dp[n] != -1) return dp[n];
    
    if(n == 2) return dp[n] = abs(arr[1] - arr[2]);

    else{
        int choice1 = ChoiceMin(n - 1) + abs(arr[n] - arr[n - 1]);
        int choice2 = ChoiceMin(n - 2) + abs(arr[n] - arr[n - 2]); 
        return dp[n] = min(choice1, choice2);
    }  

}
int main(){
    
    int n; cin>> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        dp[i] = -1;
    }

    int result = ChoiceMin(n);

    cout << result << endl;
    

    

     

    return 0;
}