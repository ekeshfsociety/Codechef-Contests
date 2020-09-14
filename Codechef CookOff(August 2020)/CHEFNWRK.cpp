#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int t {} ;
    cin >> t ;

    while (t--)
    {
        int n{} , k{} ;
        cin >> n >> k ;

        int flag = 0 ;
        
        int arr[n] ;
        for (int i=0 ; i<n ; i++)
        {
            cin >> arr[i] ;
            if (arr[i] > k)
            {
                flag = 2 ;
            } 
        }

        int weight {} , count {} ;

        for (int i=0 ; i<n ; i++)
        {
            if (flag == 2) break ;

            weight += arr[i] ;

            if (weight > k)
            {
                flag = 1;
                count++ ;
                weight = 0;
                i-- ;
            }

        }

        if (flag == 1)
        {
            cout << count + 1 << endl ;
        }
        else if (flag == 2)
        {
            cout << -1 << endl ;
        }
        else
        {
            cout << 1 << endl ;
        }
    }

    return 0;
}