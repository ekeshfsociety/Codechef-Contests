#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t ;
    
    while (t--)
    {
        int k {} ;
        cin >> k ;
        int temp = k;
        cout << "O" ;
        k = k - 1;  
        int i = 0;
        int row = 7;

        while(i < k)
        {
            cout << "." ;
            i++ ;
            row-- ;
            if (row == 0)
            {
                cout << endl ;
                row = 8;
            } 
        }

        k = 64 - temp ;
        i = 0;

        while(i < k)
        {
            cout << "X" ;
            i++;
            row--;
            if(row == 0)
            {
                cout << endl ;
                row = 8;
            }
        }

        cout << endl ;
        
        
    }

    return 0;
    
}