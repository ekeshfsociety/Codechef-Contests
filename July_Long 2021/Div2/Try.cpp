#include<bits/stdc++.h>

using namespace std;

bool compar(string a , string b)
{
    int x = stoi(a.append(b));
    int y = stoi(b.append(a));

    if(x>y) {
        return (a>b) ;
    }
    else {
        return (b > a) ;
    }
}

int main()
{
    int n;
    cin >> n;

    vector <int> nums ;

    for(int i=0 ; i<n ; i++)
    {
        int element ;
        cin >> element ;

        nums.push_back(element);
    }

    vector<string> strnum ;

    for(auto i : nums)
    {
        strnum.push_back(to_string(i));
    }

    sort(strnum.begin(), strnum.end(), compar);

    for(int i=strnum.size()-1 ; i>=0 ; i--)
    {
        cout << strnum[i] ;
    }

    cout << endl ;

    return 0;
}