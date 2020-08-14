#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t ;
    
    while (t--)
    {
        int s {} , n {} ;
        cin >> s >> n ;

        int result = 0 ;

        int original = s ;

        if(s % 2 == 0)
        {   

            result = (s / n) ;
            if(s%n != 0) result ++ ;
        }
        else
        {
            result = (s / n) ;
            if ( (s-1) % n != 0) result += 2 ;
            else
            {
                result++ ;
            }
            
        }

        cout << result << endl ;        

    }

    return 0;
    
}