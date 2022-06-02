#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int X{}, Y{}, Z{};
        cin >> X >> Y >> Z ;

        int total = (5*X) + (10*Y);

        int result = total / Z ;

        cout << result << endl ;

    }

    return 0;
}