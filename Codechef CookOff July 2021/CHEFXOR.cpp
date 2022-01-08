#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n ;

        vector<int> arr;

        for(int i=0 ; i<n ; i++)
        {
            int element ;
            cin >> element ;

            arr.push_back(element) ;
        }

        sort(arr.begin(), arr.end()) ;

        int x = arr[n-1] ;

        for(int i=0 ; i<n ; i++)
        {
            arr[i] = arr[i] ^ x ;
        }

        int result = arr[0] ;
        
        for(int i=1 ; i<n ; i++)
        {
            result = result | arr[i] ;
        }

        cout << x << " " << result << endl ;

    }

    return 0;
}