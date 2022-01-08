#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int d,x,y,z;
        cin >> d >> x >> y >> z;

        int s1 = 0;
        int s2 = 0;

        s1 = 7*x ;
        s2 = (y*d)+(z*(7-d));

        cout << max(s1, s2) << endl ;

    }

    return 0;
}