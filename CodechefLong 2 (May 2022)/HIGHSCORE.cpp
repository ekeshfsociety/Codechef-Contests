#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int N;
        cin >> N ;

        int NA, NB, NC, ND;
        cin >> NA >> NB >> NC >> ND ;

        int result = max(NA, max(NB, max(NC, ND)));

        cout << result << endl; 
    }
    
    return 0;
}