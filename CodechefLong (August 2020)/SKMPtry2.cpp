#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int t ;
    cin >> t ;

    while(t--)
    {
        string s , p ;
        cin >> s ;
        cin >> p ;

        for (auto num1 : p)
        {
            for (int i=0 ; i<s.size() ; i++)
            {
                if (num1 == s[i])
                {
                    s.replace(i , 1 , "");
                    break ;
                }
                else
                {
                    continue ;
                }
                
            }
        }

        sort(s.begin() , s.end()) ;
        
        char first = p[0] ;

        int next = 0 ;

        int flag = 0 ;

        int print {} ;

        if (p[0] > p[1])
        {
            print = 1 ;
        }

        else
        {
            print = 0 ;
        }

        for (int i=0 ; i<s.size() ; i++)
        {
            if (s[i] < first)
            {
                cout << s[i] ;
            }

            else if (s[i] == first)
            {
                if (print)
                {
                    cout << p ;
                    flag = 1 ;
                    next = i ;
                    break ;
                }
                else
                {
                    cout << s[i+1] ;
                }
                
            }
        }

        if (flag)
        {
            for (int i = next+1 ; i<s.size() ; i++)
            {
                cout << s[i] ;
            }
        }

        else
        {
            cout << p ;
            for (int i = next+1 ; i<s.size() ; i++)
            {
                cout << s[i] ;
            }
        }

        cout << endl ;

    }

    return 0;
}