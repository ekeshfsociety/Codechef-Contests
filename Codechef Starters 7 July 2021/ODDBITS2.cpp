#include<bits/stdc++.h>
#define ll long long


using namespace std;

ll int decToBinary(ll int n)
{
    ll int binaryNum[32];

    ll int i = 0;
    while (n > 0) {
 
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
 
    ll int count = 0;

    for (ll int j = i - 1; j >= 0; j = j - 2)
    {
        if(binaryNum[j] == 1)
        {
            count++;
        }
    }

    return count ;
}

int main()
{
    ll int t;
    cin >> t;
    while(t--)
    {
        ll int n{} ;
        cin >> n ;

        vector<int> v;

        ll int count = 0 ;

        if(n == 2)
        {
            cout << 3 << endl ;
            continue ;
        }

        for(ll int i=0 ; i<n ; i++)
        {
            count += decToBinary(i);
            if(count >= n)
            {
                cout << i << endl ;
                break ;
            }
        }
    }

    return 0;
}