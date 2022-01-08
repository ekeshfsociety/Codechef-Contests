#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a1{}, a2{}, a3{}, a4{} ;
        cin >> a1 >> a2 >> a3 >> a4 ;

        map<int,int> freq ;

        freq[a1]++;
        freq[a2]++;
        freq[a3]++;
        freq[a4]++;

        if(freq.size() == 4)
        {
            cout << 2 << endl ;
        }
        else if (freq.size() == 3)
        {
            cout << 2 << endl ;   
        }
        else if(freq.size() == 2)
        {
            vector<int> cnt ;
            for(auto num1 : freq)
            {
                cnt.push_back(num1.second);
            }
            int maxcnt = max(cnt[0], cnt[1]);
            if(maxcnt == 2)
            {
                cout << 2 << endl ;
            }
            else if(maxcnt == 3)
            {
                cout << 1 << endl ;
            }
        }
        else if(freq.size() == 1)
        {
            cout << 0 << endl ;
        }
    }

    return 0;
}