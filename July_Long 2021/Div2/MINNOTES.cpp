#include<bits/stdc++.h>
#define ll long long


using namespace std;

int main()
{
    ll int t;
    cin >> t;
    while(t--)
    {
        ll int n;
        cin >> n ;

        vector<ll int> arr;
        
        for(ll int i=0 ; i<n ; i++)
        {
            ll int ele ;
            cin >> ele ;
            
            arr.push_back(ele);
        }

        sort(arr.begin(), arr.end());

        ll int result = arr[0] ;

        for(ll int i=1 ; i<=n-1 ; i++)
        {
            result = __gcd(result, arr[i]);
        }

        arr[n-1] = result ;

        ll int final_result  = 0;

        for(auto num1 : arr)
        {
            final_result = final_result + (num1 / result) ;
        }

        cout << final_result << endl ;

    }

    return 0;
}

// [4 , 8 , 9 , 10 , 13 , 15]

//  [2, 4 , 6 , 8 , 13 , 15]-> 34

// [6 , 4]

// [5, 14 , 11, 84] -> 31
