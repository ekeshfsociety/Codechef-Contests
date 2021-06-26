#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string str;
        cin >> str;

        int n = str.size();

        string substr = str.substr(2,n-3);
        
        int result = 1;

        if(str[0] == '<' && str[1] == '/' && str[n-1]== '>')
        {
            if(str[2] == '>')
            {
                cout << "Error" << endl ;
                continue;
            }

            for(auto s : substr)
            {
                int k = 0;
                k = (int)s;

                if(( k >= 48 && k <= 57) || ( k >= 97 && k <= 122))
                {
                    continue;
                }
                else
                {
                    result = 0;
                    break;
                }
            }

        }
        else
        {
            cout << "Error" << endl;
            continue;
        } 

        (result) ? cout << "Success" << endl : cout << "Error" << endl ;

    }
    return 0;
}