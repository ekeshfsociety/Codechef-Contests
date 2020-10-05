#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int t;
    cin >> t ;

    while(t--)
    {
        long long int n , k ;
        cin >> n >> k ;

        long long int arr[n] ;
        
        long long int i = 0;
        
        for(i=0 ; i<n ; i++)
        {
            cin >> arr[i] ; 
        }

        long long int result {} ;
        long long int flag = 0 ;

        for(i=0 ; i<n ; i++)
        {
            if(arr[i] < k)
            {
                result = i+1 ;
                flag = 1 ;
                break ;
            }
            
            arr[i+1] += (arr[i] - k);
            
        }
        if(flag)
        {
            cout << result << endl ;
        }
        else
        {
            result = n +(arr[n-1] / k);
            cout << result << endl ;
        }
        
    }

    return 0 ;
}