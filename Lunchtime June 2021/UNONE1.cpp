#include <bits/stdc++.h>

using namespace std ;

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

        vector <int> even;
        vector <int> odd;

        for(int i=0 ; i<n ; i++)
        {
            arr[i]%2==0 ? even.push_back(arr[i]) : odd.push_back(arr[i]) ;
        }

        for(auto num1 : even)
        {
            cout << num1 << " ";
        }
        for(auto num2 : odd)
        {
            cout << num2 << " ";
        }

        cout << endl ;
    }

    return 0;
}