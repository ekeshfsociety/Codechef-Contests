#include <bits/stdc++.h>

using namespace std;

void tokenize(string const &str, const char delim,
            vector<string> &out)
{
    size_t start;
    size_t end = 0;
 
    while ((start = str.find_first_not_of(delim, end)) != string::npos)
    {
        end = str.find(delim, start);
        out.push_back(str.substr(start, end - start));
    }
}

int main()
{   
    int t;
    cin >> t;
    while(t--)
    {
        int l , h;
        cin >> l >> h ;

        string s;
        cin >> s;

        vector<string> result;
        vector<int> size;

        tokenize(s, '1' , result);

        for(auto num1 : result)
        {
            size.push_back(num1.size());
        }

        if(size.empty())
        {
            cout << "NO" << endl ;
            continue;
        }
        
        sort(size.begin() , size.end(), greater<int>());

        if(size[0] >= h)
        {
            cout << "YES" << endl ;
        }

        else
        {
            int flag = 0;
            int required = h - size[0];


        }
    }


    return 0;
}