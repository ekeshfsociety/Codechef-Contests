#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int t ;
    cin >> t ; 

    while(t--)
    {
        int n ;
        cin >> n ;

        long int linear_array[n*n] {} ;
        for (int i=1 ; i<=n*n ; i++)
        {
            linear_array[i-1] = i ;
        }

        int top = 0 ;
        int bottom = n - 1 ;
        int left = 0 ;
        int right = n - 1;

        int index = 0;

        long int result[n][n] {} ;

        while (1) {
            if (left > right)
                break;
        
            for (int i=left ; i<=right ; i++)
                result[top][i] = linear_array[index++];
        
            top++;

            if (top > bottom)
                break ;
        
            for (int i = top ; i<= bottom ; i++)
                result[i][right] = linear_array[index++];
            right-- ;

            if (left > right)
                break;

            for (int i = right; i>= left ; i--)
                result[bottom][i] = linear_array[index++];
            bottom-- ;

            if (top > bottom)
                break ;

            for (int i = bottom; i>= top; i--)
                result[i][left] = linear_array[index++] ;
            left++;
        }

        for (int i=0 ; i<n ; i++)
        {
            for (int j=0 ; j<n ; j++)
            {
                cout << result[i][j] << " " ;
            }

            cout << endl ;
        }

    }

    return  0;
}