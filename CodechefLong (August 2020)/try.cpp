#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s, p;
        cin >> s >> p;

        vector<char> string1{};
        vector<char> string2{};

        for (auto num1 : s)
        {
            string1.push_back(num1);
        }

        for (auto num2 : p)
        {
            string2.push_back(num2);
        }

        int i{}, j{};

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

        i = 0;

        for (auto x : string2)
        {
            for (auto y : string1)
            {
                while (y <= x)
                {
                    cout << y;
                    i++;
                    continue;
                }
            }
        }

        for (auto x : string2)
            cout << x;

        for (int i; i < string1.size(); i++)
        {
            cout << string1.at(i);
        }
    }

    return 0;
}