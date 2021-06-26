#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        // long long int a ;
        // cin >> a;

        // string str = to_string(a);

        string str;
        cin >> str;
        long long int n = str.length();

        //stoi()

        string newstr = "";

        if(str[0] == '1')
        {
            newstr = "10" + str.substr(1,n-1);
        }
        else
        {
            newstr = "1" + str ;
        }

        cout << newstr << endl ;
    }

    return 0;
}