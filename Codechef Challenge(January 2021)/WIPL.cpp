//Wrong Answer, only few Test cases successful


#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n{} , k{} ;
        cin >> n >> k ;

        vector <int> arr {} ;

        for(int i=0 ; i<n ; i++)
        {
            int element {} ;
            cin >> element;
            arr.push_back(element) ;
        }

        int counttower1{} , counttower2{} ;
        int heighttower1{} , heighttower2{} ; 

        sort(arr.begin(), arr.end() , greater<int>());

        vector<int> tower1 {} ;
        vector<int> tower2 {} ;

        for(int i=0 ; i<=n-2 ; i=i+2)
        {
            tower1.push_back(arr[i]);
            heighttower1 += arr[i] ;
            counttower1++ ;

            if(heighttower1 >= k)
            {
                break ;
            }
        }

        for(int i=1 ; i<((counttower1-1)*2) ; i++)
        {
            tower2.push_back(arr[i]);
            heighttower2 += arr[i] ;
            counttower2++ ;

            if(heighttower2 >= k)
            {
                break;
            }
        }

        if(heighttower2 < k)
        {
            for(int i=(((counttower1-1)*2)+1) ; i<=n-1 ; i++)
            {
                tower2.push_back(arr[i]);
                heighttower2 += arr[i] ;
                counttower2++ ;

                if(heighttower2 >= k)
                {
                    break;
                }
            }

        }

        int result {} ;

        if(heighttower1<k || heighttower2<k)
        {
            result = -1 ;
        }
        else
        {
            result = counttower1 + counttower2 ;
        }

        cout << result << endl ;
    }

    return 0;
}