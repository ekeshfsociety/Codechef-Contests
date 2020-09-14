#include <bits/stdc++.h>

using namespace std ;

int number_of_sides (int n)
{
    if (n <= 5)
    {
        return n ;
    }

    else
    {
        return ( n + number_of_sides(n/2) ) ;
    }
    
}



int main()
{
    int t;
    cin >> t ;

    while(t--)
    {
        int n ;
        cin >> n ;

        int xi=0 , yi=0 ;

        for (int i=0 ; i<n ; i++)
        {
            cin >> xi >> yi ;   
        }

        int result = number_of_sides(n) ;

        cout << result << endl ;


    }

    return 0;
    
}