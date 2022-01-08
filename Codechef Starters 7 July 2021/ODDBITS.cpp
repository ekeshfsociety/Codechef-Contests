#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n {} ;
        cin >> n ;

        vector<long long int> v;

        v.push_back(1);
        v.push_back(1);
        v.push_back(1);

        int switchpower = 0;
        int multiple = 2 ;

        for(int i=4 ; i<n ; i++)
        {
            int sqrroot = sqrt(i) ;
            if((sqrroot * sqrroot == i) && i!=4)
            {
                if(switchpower == 1)
                {
                    switchpower = 0;
                }
                else {
                    switchpower = 1 ;
                }

                multiple = multiple * 2 ;
            }

            

        }



    }

    return 0;
}