#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t ;
    
    while (t--)
    {
        int n, b, m ;
        cin >> n >> b >> m ;

        int array[m] {} ;
        int result {} ;

        for(int i=0 ; i<m ; i++)
        {
            cin >> array[i] ;
        }

        int current = ceil((array[0] / b) + 1) ;
        result++ ;

        for(int i=1 ; i<m ; i++)
        {
            if (ceil((array[i] / b) + 1) == current)
            {
                continue ;
            }

            else
            {
                current = ceil((array[i] / b) + 1) ;
                result++ ;
            }
            
        }

        cout << result << endl ;
    }

    return 0;
    
}