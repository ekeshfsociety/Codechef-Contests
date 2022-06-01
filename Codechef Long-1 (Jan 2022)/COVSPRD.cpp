#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n {} , d {} ;
        cin >> n >> d ;

        int infected = 1 ;

        for(int i=1 ; i<=10 ; i++)
        {
            infected = infected * 2 ;
            if(infected >= n)
            {
                cout << n << endl ;
            }
        }

        if(d<=10)
        {
            cout << infected << endl ;
        }

        
    }

    return 0;
}