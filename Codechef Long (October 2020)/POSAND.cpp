#include <bits/stdc++.h>

using namespace std ;

int factorial(int n) 
{ 
    // single line to find factorial 
    return (n==1 || n==0) ? 1: n * factorial(n - 1);  
} 

int check(int arr[] , int n)
{
    int flag = 1 ;
    for(int i=1 ; i<n ; i++)
    {
        if( (arr[i-1] & arr[i]) <= 0)
        {
            flag = 0 ;
            break ;
        }
    }
    return flag ;

}

int main()
{
    int t;
    cin >> t ;

    while(t--)
    {
        int n ;
        
        cin >> n ;

        int arr[n] ;
        for(int i=0 ; i< n ; i++)
        {
            arr[i] = i + 1 ;
        }

        sort(arr ,arr+n) ;

        int fact = factorial(n) ;

        int result {} ;

        int answer {} ;

        for(int i=0 ; i<fact ; i++)
        {
            result = check(arr , n);
            if(result)
            {
                answer = 1;
                break ;
            }

            next_permutation(arr, arr+n);   

        }

        if(answer)
        {
            for(auto num1 : arr)
            {
                cout << num1 << " " ;
            }

            cout << endl ;
        }

        else
        {
            cout << -1 << endl ;
        }       

    }

    return 0;
}