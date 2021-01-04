#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int t;
    cin >> t ;
    while(t--)
    {
        int n , m ;
        cin >> n >> m ;

        int arr1[n] , arr2[m] ;
        int sum1 {} , sum2 {}  ;

        int result {} ;

        for(int i=0 ; i<n ; i++)
        {
            cin >> arr1[i] ;
            sum1 += arr1[i] ;
        }

        for(int i=0 ; i<m ; i++)
        {
            cin >> arr2[i] ;
            sum2 += arr2[i] ;
        }

        sort(arr1 , arr1 + n);
        sort(arr2 , arr2 + m , greater<int>());

        int steps = 0 ;

        if(sum1 > sum2)
        {
            steps = 0;
        }
        else
        {
            steps = 0 ;

            for(int i=0 ; i<(min(n,m)) ; i++)
            {
                sum1 = sum1 - arr1[i] + arr2[i] ;
                sum2 = sum2 - arr2[i] + arr1[i] ;

                steps++;

                if(sum1 > sum2)
                {
                    break ;
                }
                else
                {
                    continue ;
                }           

            }

            if(sum1 < sum2)
            {
                steps = -1 ;
            }
            
        }

        cout << steps << endl ;

    }

    return 0;
}