#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    if(a == 0)
        return b;
    if(b == 0)
        return a;

    if(a=b)
        return a;

    if(a>b)
        return gcd(a-b , b);
    return gcd(a, b-a);
}



int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n , k;
        cin >> n >> k ;

        int arr[n] ;

        for(int i=0 ; i<n ; i++) {
            cin >> arr[i];
        }
        

    }

    return 0;
}