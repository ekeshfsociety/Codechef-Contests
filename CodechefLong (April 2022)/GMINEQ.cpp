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

        int arr[n];
        for(int i=0 ; i<n ; i++)
        {
            cin >> arr[i];
        }

        int posCount = 0;
        int negCount = 0;

        for(auto x: arr)
        {
            if(x == 1) {
                posCount++;
            }
            else {
                negCount++;
            }
        }

        int absDifference = abs(posCount - negCount);

        if(absDifference == 0)
        {
            cout << "YES" << endl ;
        }
        else if(absDifference == 1)
        {
            cout << "YES" << endl ;
        }
        else if(absDifference > 2)
        {
            cout << "NO" << endl ;
        }
        else if(absDifference == 2)
        {
            if((posCount % 2 == 1) or (negCount % 2 == 1))
            {
                cout << "NO" << endl ;
            }
            else {
                cout << "YES" << endl ;
            }
        }
    }
    return 0;
}