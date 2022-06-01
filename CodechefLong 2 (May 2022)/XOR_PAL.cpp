#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n ;

        string str;
        cin >> str ;

        int result = 0;

        if(true)
        {
            int start = 0;
            int end = n-1;

            while(start < end)
            {
                if(str[start] != str[end])
                {
                    result++;
                }
                start++;
                end--;
            }
        }

        cout << result << endl ;

    }

    return 0;
}