#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int N{} , K{};
        cin >> N >> K;

        if(N%2 ==1)
        {
            if(K == 0)
            {
                cout << "No" << endl ;
            }
            else {
                cout << "Yes" << endl ;
            }
        }
        else {
            cout << "Yes" << endl ;
        }   

    }

    return 0;
}