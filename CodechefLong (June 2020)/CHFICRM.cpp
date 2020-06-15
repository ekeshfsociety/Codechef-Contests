#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t ;
    cin >> t ;

    while(t--)
    {
        int n ;
        cin >> n ;

        int array[n] ;
        for (int i=0 ; i<n ; i++)
        {
            cin >> array[i] ;
        }   

        int rs5 {} ;
        int rs10 {} ;
        int result ;

        result = 1 ;

        for (auto num1 : array)
        {
            if (num1 == 5)
            {
                rs5++ ;
            }

            else if (num1 == 10)
            {
                if (rs5 > 0)
                {
                    rs10++ ;
                    rs5 -- ;
                }
                else
                {
                    result = 0 ;
                    break ;
                }
                
            }

            else if (num1 == 15)
            {
                if (rs10 > 0)
                {
                    rs10-- ;
                }

                else if (rs5 > 1)
                {
                    
                    rs5 = rs5 - 2 ;
                }

                else
                {
                    result = 0;
                    break ;
                }
                
            }

        }

        if (result)
        {
            cout << "YES" << endl ;
        }

        else
        {
            cout << "NO" << endl ;
        }
        

    }

    return 0;
}