#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t ;
    cin >> t;
    while(t--)
    {
        int n,k,d;
        cin >> n >> k >> d ;

        int sum {} ;

        int arr[n] ;
        for(int i=0 ; i<n ; i++)
        {
            cin >> arr[i] ;
            sum += arr[i] ;
        }

        int result {} ;

        if (sum < k)
        {
            result = 0 ;
        }
        else
        {
            result = sum / k ;
            if(result > d)
            {
                result = d;
            }
        }

        cout << result << endl ;
        
    }

    return 0;
}