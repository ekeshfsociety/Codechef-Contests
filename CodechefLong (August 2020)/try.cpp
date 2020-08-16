#include <bits/stdc++.h>

using namespace std;

vector<char> funct(vector<char> a , vector<char> b);

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s, p;
        cin >> s >> p;

        vector<char> string1 ;
        vector<char> string2 ;

        string1.empty();
        string2.empty();

        for (auto num1 : s)
        {
            string1.push_back(num1);
        }

        for (auto num2 : p)
        {
            string2.push_back(num2);
        }

        string1 = funct(string1 , string2) ;

        int x = 0;
        int y = 0;

        for (auto x : string1) cout << x ;
        cout << endl ;

        for(auto y : string2) cout << y ;
        cout << endl ;
    }

    return 0;
}


vector<char> funct (vector<char> string1 , vector<char> string2)
{
        int i = 0;

        for (auto num3 : string2)
        {
            for (auto num4 : string1)
            {
                if (num3 == num4)
                {
                    string1.erase(string1.begin() + i);
                    i++;
                    break;
                }
                else
                {
                    i++;
                    continue;
                }
            }
        }

        sort(string1.begin(), string1.end());

        return string1 ;

}