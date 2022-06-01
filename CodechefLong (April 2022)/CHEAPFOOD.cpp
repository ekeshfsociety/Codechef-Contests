#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x {} ;
        cin >> x ;

        cout << ((x/10 > 100) ? (x/10) : 100) << endl ;
    }

    return 0;
}