#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int N{} , p{}, k{} ;
        cin >> N >> p >> k ;

        int x = (p%k) - 1 ;

        int remainder = ((n - 1)/k) ;
        remainder *= k ;
        remainder = n - 1 - remainder ;

        int result {} ;

        if(x > remainder)
        {
            result = (remainder+1) * ((n-1)/k+1) + (x - remainder) * ((n - 1) / k) ;
        }
        else {
            result = ((n-1)/k+1) * (x + 1) ;
        }

        for(int i = x+1 ; i<n ; i = i+k)
        {
            result++ ;

            if(i == p)
            {
                cout << result << endl ;
                break ;
            }
        }


    }

    return 0;
}