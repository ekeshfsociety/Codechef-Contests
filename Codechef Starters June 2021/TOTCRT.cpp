#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n ;

        map<string, int> codechef;

        int threedivisons = 3*n ;

        for(int i=0 ; i<threedivisons ; i++)
        {
            string question;
            int submissions = 0;
            cin >> question >> submissions ;

            auto it = codechef.find(question);
            if(it != codechef.end())
            {
                it->second = it->second + submissions;
            }
            else
            {
                codechef.insert(pair<string,int>(question,submissions));
            }
        }

        vector<int > sorted ;

        for(auto num1 : codechef)
        {
            sorted.push_back(num1.second);
        }

        sort(sorted.begin() , sorted.end());

        for(auto num1 : sorted)
        {
            cout << num1  << " ";
        }

        cout << endl ;
    }

    return 0;
}