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

        sort(arr,arr+n) ;

        map<int,int> freq ;

        for(int i=0 ; i<n ; i++)
        {
            freq[arr[i]]++ ;
        }

        int result = 0 ;

        for(auto num1 : freq)
        {
            if(num1.first == 1)
            {
                continue ;
            }
            else if(num1.first == 2)
            {
                result = result + 1 ;
            }
            else {
                if(num1.second == 1)
                {
                    result++ ;
                }
                else if(num1.second > 1)
                {
                    result = result + min(num1.first-1 , num1.second);
                }
            }
        }

        cout << result << endl ;

    }

    return 0;
}