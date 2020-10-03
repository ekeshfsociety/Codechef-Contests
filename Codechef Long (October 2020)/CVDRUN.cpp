#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t ;

    while(t--)
    {
        int n , k , x , y ;
        cin >> n >> k >> x >> y ;

        int flag = 0 ;
        int result = 0 ;
        vector <int> infected ;

        int arr[n] ;

        for(int i=0 ; i<n ; i++)
        {
            arr[i] = i ;
        }

        infected.push_back(x) ;

        while(flag != 1)
        {    
            if(binary_search(infected.begin() , infected.end() , y))
            {
                result = 1 ;
                flag = 1;
                break ;                
            }

            x = ((x + k) % n) ;

            if (x == y)
            {
                result = 1 ;
                flag = 1;
                break ; 
            }

            if(binary_search(infected.begin() , infected.end() , x))
            {
                result = 0 ;
                flag = 1 ;
                break ;
            }
            else
            {
                infected.push_back(x) ;
            }          
            
        }

        if(result)
        {
            cout << "YES" << endl ;
        }
        else
        {
            cout << "NO" << endl ;
        }

    }

}