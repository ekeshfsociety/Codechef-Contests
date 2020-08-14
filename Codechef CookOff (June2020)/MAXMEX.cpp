#include<bits/stdc++.h>

using namespace std;

int fact(int n) {
   if (n == 0 || n == 1)
      return 1;
   else
      return n * fact(n - 1);
}

int main()
{
    int t;
    cin >> t ;
    
    while (t--)
    {
        int n , m ;
        cin >> n >> m ;

        vector <int> A ;
        int element ;
        int result = 0 ;
        for(int i=0 ; i<n ; i++)
        {
            cin >> element ;
            A.push_back(element) ;
        }

        sort(A.begin(), A.end());

        if(A.back() < m)
        {
            result = -1 ;
        }

        else
        {
            for (int j=1 ; j<(n-m) ; j++)
            {
                int comb = fact(n-m-1) / (fact(j) * fact(n-m-1-j));
                result = result + comb ;
            }
            
        }

        cout << result << endl ;
        
    }

    return 0;
    
}