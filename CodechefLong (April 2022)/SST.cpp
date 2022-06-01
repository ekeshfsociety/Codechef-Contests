#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a{} , b{} ;
        cin >> a >> b;

        int valuationA = a*10;
        int valuationB = b*5;

        if(valuationA > valuationB)
        {
            cout << "FIRST" << endl ;
        }
        else if(valuationA < valuationB)
        {
            cout << "SECOND" << endl ;
        }
        else {
            cout << "ANY" << endl ;
        }
    }

    return 0;
}