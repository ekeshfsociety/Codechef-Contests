#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t ;
    
    while (t--)
    {
        int n;
        cin >> n ;

        int array[n] ;
        for(int i=0 ; i<n ; i++)
        {
            cin >> array[i] ;
        }

        long int result = 0 ;

        for (int i=1 ; i<n ; i++)
        {
            result = result + (abs(array[i] - array[i-1]) - 1) ;
        }

        cout << result << endl ;
    }

    return 0;
    
}