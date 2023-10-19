#include <bits/stdc++.h>
using namespace std;

int main()
{

    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int arr[3];
        int arr2[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < 3; i++)
        {
            cin >> arr2[i];
        }
        sort(arr, arr + 3, greater<int>());
        sort(arr2, arr2 + 3, greater<int>());

        int arrSize = sizeof(arr) / sizeof(arr[0]);
        int arrSize2 = sizeof(arr2) / sizeof(arr2[0]);

        int Alice = accumulate(arr, arr + arrSize, 0, [](int a, int b)
                                { return a * 10 + b; });
        int Bob = accumulate(arr2, arr2 + arrSize2, 0, [](int a, int b)
                                 { return a * 10 + b; });

        if(Alice > Bob){
            cout << "Alice" << endl;
        }
        else if(Bob > Alice){
            cout <<"Bob" << endl;
        }
        else{
            cout << "Tie" << endl;
        }
    }
}