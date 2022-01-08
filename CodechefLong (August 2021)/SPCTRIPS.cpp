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

        int count = 1; 

        for(int i=1 ; i=n ; i++)
        {
            for(int j=1 ; j<n ; j++)
            {
                for(int k=1 ; k<n ; k++)
                {
                    if(i%j == k and j%k == 0)
                    {
                        count++ ;
                    }
                }
            }
        }

        cout << count << endl ;
    }

    return 0;
}