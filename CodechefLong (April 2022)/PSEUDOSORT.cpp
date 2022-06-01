#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n ;
        cin >> n;

        long long arr[n];
        for(long long i=0 ; i<n ; i++)
        {
            cin >> arr[i];
        }

        long long count = 0;
        int flag = 2;
        long long first = 0;
        long long second = 0;


        for(long long i=0 ; i<=n-2 ; i++)
        {
            if(arr[i+1] < arr[i])
            {
                count++;
                if(flag == 2)
                {
                    flag = 1;
                    first = i ;
                }
                else if(flag == 1)
                {
                    second = i+1;
                }
            }
        }


        // cout << endl << "First :" << first << endl << "Second : " << second << endl << "Count : " << count ;

        if(count == 0)
        {
            cout << "YES" << endl ;
        }
        else if(count == 1)
        {
            swap(arr[first], arr[first+1])
            int temp = 1;

            for(long long i=0; i<n-1 ; i++)
            {
                if(arr[i+1] < arr[i])
                {
                    temp = 0;
                    cout << "NO" << endl;
                    break;
                }
            }

            if(temp != 0)
            {
                cout << "YES" << endl ;
            }
        }
        else if(count > 2)
        {
            cout << "NO" << endl ;
        }
        else if(count == 2)
        {
            swap(arr[first], arr[second]);

            // cout << "Array : " << endl ;

            // for(auto x : arr)
            // {
            //     cout << x << " " ;
            // }

            // cout << endl << endl ;

            int temp = 1;

            for(long long i=0; i<n-1 ; i++)
            {
                if(arr[i+1] < arr[i])
                {
                    temp = 0;
                    cout << "NO" << endl;
                    break;
                }
            }

            if(temp != 0)
            {
                cout << "YES" << endl ;
            }

        }
    }
    return 0;
}