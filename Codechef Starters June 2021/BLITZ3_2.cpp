#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n,a,b;
        cin >> n >> a >> b;

        int total_time = (2*(180+n));
        int time_left = (a+b);

        cout << total_time - time_left << endl ;
    }
}