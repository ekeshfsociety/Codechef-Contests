#include<bits/stdc++.h>

using namespace std;

int getSum(int n) 
{  
   int sum = 0; 
   while (n != 0) 
   { 
       sum = sum + n % 10; 
       n = n/10; 
   } 
   return sum; 
} 

int main()
{
    int t;
    cin >> t ;
    
    while (t--)
    {
        int n;
        cin >> n ;

        int a{} , b {} ;
        int chef {} , morty {} ;

        int chefScore {} , mortyScore {} , drawScore {} ;

        for (int i=0 ; i<n ; i++)
        {
            cin >> a >> b ;

            chef = getSum(a) ;
            morty = getSum(b) ;

            if (chef > morty)
            {
                chefScore++ ; 
            }

            else if (morty > chef)
            {
                mortyScore++ ;
            }

            else
            {
                chefScore++ ;
                mortyScore++ ;
            }

        }

        if (chefScore > mortyScore)
        {
             cout << 0 << " " << chefScore << endl ;
        }

        else if (mortyScore > chefScore)
        {
             cout << 1 << " " << mortyScore << endl ;
        }

        else
        {
             cout << 2 << " " << chefScore << endl ;
        }
        
        
    }

    return 0;
    
}