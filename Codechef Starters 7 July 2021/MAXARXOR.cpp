#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n {} ;
        long long int k {} ;
        cin >> n >> k ;

        long long int total = pow(2,n);

        long long int ms = total / 2 ;

        vector<long long int> v ;

        for(long long int i=0 ; i<total ; i++)
        {
            v.push_back(i) ;
        }

        for(long long int i=1 ; i<=k ; i++)
        {
            swap(v[i] , v[total - k - 1]);
        }

        long long int result = 0 ;

        if(k > ms)
        {
            result = total * ms ;
        }
        else {
            result = total * k ;
        }

        cout << result << endl ;

    }

    return 0;
}