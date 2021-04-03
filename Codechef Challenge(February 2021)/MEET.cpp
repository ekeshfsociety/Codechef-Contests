#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin.ignore();
        string p;
        getline(cin, p);

        vector <int> result;

        string meeting1 = p.substr(0,2);
        string meeting2 = p.substr(3,2);
        string meeting3 = p.substr(6,2);

        int hours = stoi(meeting1);
        int minutes = stoi(meeting2);

        int n;
        cin >> n;

        for(int i=0 ; i<n ; i++)
        {
            string free;
            cin.ignore();
            getline(cin, free);

            string begin1 = free.substr(0,2);
            string begin2 = free.substr(3,2);
            string begin3 = free.substr(6,2);
            string end1 = free.substr(9,2);
            string end2 = free.substr(12,2);
            string end3 = free.substr(15,2);

            int ibegin1 = stoi(begin1);
            int ibegin2 = stoi(begin2);
            int iend1 = stoi(end1);
            int iend2 = stoi(end2);

        }

        

    }



    return 0;
}