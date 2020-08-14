#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n{}, k{};
        cin >> n >> k;

        int max = k / 2;

        vector <int> P;
        int element{};
        for (int i=0; i<n; i++)
        {
            cin >> element;
            if (element <= max)
            {
                P.push_back(element);
            }
        }

        sort(P.begin(), P.end(), greater<int>());

        int flag = 0;
        int result = 0;

        for (auto num1 : P)
        {
            if (k % num1 == 0)
            {
                flag = 1;
                result = num1;
                break;
            }
        }

        if (flag)
        {
            cout << result << endl;
        }
        else
        {
            cout << -1 << endl;
        }

    }

    return 0;
}