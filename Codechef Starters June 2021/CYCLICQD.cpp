#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c,d;
        cin >> a >> b >> c >> d;

        ((a+c == 180) && (b+d==180)) ? cout << "YES" << endl : cout << "NO" << endl ;
    }

    return 0;
}