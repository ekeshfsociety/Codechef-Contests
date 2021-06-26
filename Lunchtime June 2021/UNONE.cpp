#include<bits/stdc++.h>

using namespace std;

string concat(vector<string> vec, int n)
{
    string s = "" ;
    for(int i=0 ; i<n ; i++)
    {
        s = s + vec[i];
    }

    return s;
}

int ugly(string s, int n)
{
    int uglyCount = 0 ;
    for(int i=0 ; i<n ; i++)
    {
        string newsub  = s.substr(i,2);
        if(newsub == "11")
        {
            uglyCount++;
        }
    }

    return uglyCount;
}

string convertDecimalToBinary(int n)
{
    int binaryNumber = 0;
    int remainder, i = 1, step = 1;

    while (n!=0)
    {
        remainder = n%2;
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    string k = to_string(binaryNumber);
    return k;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for(int i=0 ; i<n ; i++)
        {
            cin >> arr[i];
        }

        int min = INT_MAX ;

        sort(arr , arr+n);

        vector <int> resultVector = {} ;

        do
        {
            vector <string> binString = {};

            for(int i=0 ; i<n ; i++)
            {
                binString.push_back(convertDecimalToBinary(arr[i])) ;
            }

            string s = concat(binString , n) ;
            int concatsize = s.size();
            int uglycount = ugly(s, concatsize);
            if(uglycount < min)
            {
                resultVector.clear();
                for(int i=0 ; i<n ; i++)
                {
                    resultVector.push_back(arr[i]);
                }
            }             
        } while (next_permutation(arr, arr+n));

        for(auto num1 : resultVector)
        {
            cout << num1 << " " ;
        }

        cout << endl ;

    }

    return 0;

}