#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a {} , b{} ;
        cin >> a >> b ;

        int result = a + b ;

        if(result < 3)
        {
            cout << 1 << endl ;
        }

        else if (result >= 3 && result <=10)
        {
            /* code */
            cout << 2<< endl ;
        }

        else if (result >= 11 && result <=60)
        {
            cout << 3<< endl ;
        }

        else if (result > 60)
        {
            cout << 4 << endl ;
        }
    }

    return 0;
}