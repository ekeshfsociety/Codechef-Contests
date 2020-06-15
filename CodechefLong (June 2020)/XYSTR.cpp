#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t ;
    cin >> t ;

    while(t--)
    {
        string s ;
        cin >> s ;

        int maximum_pairs {} ;
        int previous = 0 ;

        int n ;
        n = s.size() ;

        int check = 0;
        int c ;

        if(n == 1)
        {
            maximum_pairs = 0 ;
        }

        else if (n == 2)
        {
            if (s == "xx" || s == "yy")
            {
                maximum_pairs = 0 ;
            }
            else
            {
                maximum_pairs = 1 ;
            }
            
        }

        else
        {
            for (int i=1 ; i<n ; i++)
            {
                if (i==1)
                {
                    if( (s.at(i-1) == 'x' && s.at(i) == 'y') || ( s.at(i-1) == 'y' && s.at(i) == 'x') )
                    {
                        maximum_pairs++ ;
                        previous = 1;
                    }
                }

                else
                {
                    if (previous)
                    {
                        previous = 0;
                        continue ;
                    }

                    else
                    {
                        if( (s.at(i-1) == 'x' && s.at(i) == 'y') || ( s.at(i-1) == 'y' && s.at(i) == 'x') )
                        {
                            maximum_pairs++ ;
                            previous = 1;
                        }
                    }
                    
                }
                
            }
        }

        cout << maximum_pairs << endl ;
    
    }

    return 0;
}