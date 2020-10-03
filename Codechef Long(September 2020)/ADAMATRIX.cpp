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

        int arr[n][n];
        for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<n ; j++)
            {
                cin >> arr[i][j];
            }
        }

        int count {} ;

        for(int j=n-1 ; j>0 ; j--)
        {
            if(arr[0][j] != j+1 )
            {
                count++ ;
                for(int x=0 ; x<=j ; x++)
                {
                    for(int y=x+1 ; y<=j ; y++)
                    {
                        swap(arr[x][y] , arr[y][x]) ;
                    }
                }
            }
        }

        cout << count << endl ;

    }

    return 0 ;
}
