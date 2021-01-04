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

        string code ;
        cin >> code ;

        string arr = "abcdefghijklmnop" ;

        int letters = n/4 ;

        int start = 0;

        string sub ;

        for(int i=0 ; i<letters ; i++)
        {
            sub = code.substr(start,4) ;
            int binarytodec = 0;

            if(sub[0] == '1')
            {
                binarytodec += 8;
            }
            if(sub[1] == '1')
            {
                binarytodec += 4;
            }
            if(sub[2] == '1')
            {
                binarytodec += 2;
            }
            if(sub[3] == '1')
            {
                binarytodec += 1;
            }

            start = start + 4 ;

            cout << arr[binarytodec] ;
        }

        cout << endl ;
    }

    return 0;
}