#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x {} , y {} ;

        cin >> x >> y ;

        if(x==1 && y==1)
        {
            cout << 2 << endl ;
            continue ;
        }

        if(__gcd(x,y) > 1)
        {
            cout << 0 << endl ;
            continue ;
        }

        else if(__gcd(x+1, y) > 1)
        {
            cout << 1 << endl ;
            continue ;
        }

        else if(__gcd(x,y+1) > 1)
        {
            cout << 1 << endl ;
            continue ;
        }

        else {
            cout << 2 << endl ;
            continue ;
        }

    }

    return 0;
}