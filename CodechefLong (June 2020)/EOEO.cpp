#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        long long int ts;
        cin >> ts;

        if(ts % 2 == 1)
        {
            cout << ts/2 << "\n";
            continue;
        }
        while(ts%2!=1)
        {
            ts = ts/2;
        }
        cout << ts/2 << "\n";

    }

    return 0;
}