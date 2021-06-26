#include <bits/stdc++.h>

using namespace std;

int main()
{   
    int t;
    cin >> t;
    while(t--)
    {
        int a=0 , b=0 , x=0 ;
        cin >> a >> b >> x ;

        int result = (b-a);
        result = result / x ;

        cout << result << endl ;

    }

    return 0;
}