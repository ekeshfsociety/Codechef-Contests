#include <bits/stdc++.h>

using namespace std ;

bool isPowerOfTwo(int n)
{
   if(n==0)
   return false;
 
   return (ceil(log2(n)) == floor(log2(n)));
}

int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n ;
        cin >> n ;

        int arr[n] ;
        for(int i=0 ; i<n ; i++)
        {
            arr[i] = i + 1 ; 
        }

        if(n == 1)
        {
            cout << -1 << endl ;
        }
        else if(n == 2)
        {
            cout << -1 << endl ;
        }
        else if (n == 3)
        {
            cout << 2 << " " << 3 << " " << 1 << endl ; 
        }
        else if (isPowerOfTwo(n))
        {
            cout << -1 << endl ;
        }
        else
        {
            cout << 2 << " " << 3 << " " << 1 << " " ;
            for(int i=3 ; i<n ; i++)
            {
                if(isPowerOfTwo(arr[i]))
                {
                    if(i != n-1)
                    {   
                        cout << arr[i+1] << " " << arr[i] << " " ;
                        i++ ;
                    }
                    else
                    {
                        cout << arr[i] ;
                    }                    
                }
                else
                {
                    if(i != n-1)
                    {
                        cout << arr[i] << " " ;
                    }
                    else
                    {
                        cout << arr[i] ;
                    }                    
                }
            }

            cout << endl ;
        }
        
    }

    return 0 ;
}