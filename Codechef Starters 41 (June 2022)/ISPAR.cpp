#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int N{}, K{};
        cin >> N >> K ;

        if(K == 2)
        {
            cout << "ODD" << endl ;
        }
        else if(K == 1)
        {
            if(N%2==0)
            {
                cout << "EVEN" << endl;
            }
            else {
                cout << "ODD" << endl ;
            }
        }
        else {
            if(K%2==0)
            {
                cout << "EVEN"<< endl ;
            }
            else {
                K--;
                if(K%2 == 0)
                {
                    cout << "EVEN" << endl;
                }
                else {
                    cout << "ODD" << endl ;
                }
            }
        }

    }

    return 0;
}