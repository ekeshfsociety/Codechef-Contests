#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n ;

        int arr[n] ;
        for(int i=0 ; i<n ; i++)
        {
            cin >> arr[i] ;
        }

        map<int, int> freq ;

        for(auto num1 : arr)
        {
            freq[num1]++ ;
        }

        int result = 0;

        for(auto num2 : freq)
        {
            result += (num2.second * (n - num2.second) ) ;
        }

        cout << result << endl ;

    }

    return 0;
}