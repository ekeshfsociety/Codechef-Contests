#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n , q;
    cin >> n >> q;

    long long int arr[n] ;
    for(long long int i=0 ; i<n ; i++)
    {
        cin >> arr[i] ;
    } 

    for(long long int i=0 ; i<q ; i++)
    {
        long long int query;
        cin >> query;

        if(query == 2)
        {
            int y ;
            cin >> y ;
            cout << arr[y-1] << endl ;
        }
        else if (query == 1)
        {
            long long int l,r,x;
            cin >> l >> r >> x ;

            for(long long int i=l ; i<=r ; i++)
            {
                arr[i-1] = arr[i-1] + ((x + i - l) * (x + i - l));
            }
        }
    }

    return 0;
}