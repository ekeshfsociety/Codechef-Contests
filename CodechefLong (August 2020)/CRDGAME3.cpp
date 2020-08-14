#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int pc{}, pr{};
        cin >> pc >> pr;

        int digitspc{}, digitspr{};

        if (pc % 9 == 0)
        {
            digitspc = pc / 9;
        }
        else
        {
            digitspc = (pc / 9) + 1;
        }

        if (pr % 9 == 0)
        {
            digitspr = pr / 9;
        }
        else
        {
            digitspr = (pr / 9) + 1;
        }

        if (digitspc < digitspr)
        {
            cout << 0 << " " << digitspc << endl;
        }
        else
        {
            cout << 1 << " " << digitspr << endl;
        }

    }

    return 0;
}