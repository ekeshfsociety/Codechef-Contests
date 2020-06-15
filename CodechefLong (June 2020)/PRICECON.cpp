#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t ;

    while(t--)
    {
        int n , k ;
        cin >> n >> k ;

        int items[n] ;

        for (int i=0 ; i<n; i++)
        {
            cin >> items[i] ;
        }

        int absolute_diff {} ;

        for (auto num1 : items)
        {
            if (num1 > k)
            {
                absolute_diff += (num1 - k) ;
            }
        }

        cout << absolute_diff << endl ;
    }

    return 0;
}