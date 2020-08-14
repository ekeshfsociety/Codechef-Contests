#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int h{}, p{};
        cin >> h >> p;

        do
        {
            h = h - p;
            p = floor(p/2);

        } while (p>0 && h>0);

        if (h > 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 1 << endl;
        }


    }

    return 0;
}