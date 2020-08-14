#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t ;
    
    while (t--)
    {
        int n ;
        cin >> n ;

        vector <int> sequence ;
        int element ;

        for(int i=0 ; i<n; i++)
        {
            sequence.push_back(cin >> element) ;
        }

        sort(sequence.begin(), sequence.end())

        int size = sequence.size();

        if(size ==  1)
        {
            cout << "YES" << sequence.at(0) ;
        }

        else
        {
            if (sequence.at[size - 1] == sequence.at[size - 2])
            {
                cout << "NO" << endl ;
            }

            else
            {
                for (int i = size-2 ; i>=2 ; i++)
                {
                    if (sequence.at[i] == sequence.at[i-1] == sequence.at[2])
                    {
                        cout << "NO" << endl ;
                    }
                }
            }
            
        }
        






    }

    return 0;
    
}