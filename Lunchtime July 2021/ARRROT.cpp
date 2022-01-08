#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n ;
        cin >> n ;

        vector<int> arr1 ;
        for(int i=0 ; i<n ; i++)
        {
            int element ;
            cin >> element ;
            arr1.push_back(element);
        }

        vector<int> arr2 ;
        for(int i=0 ; i<n ; i++)
        {
            int element ;
            cin >> element ;
            arr2.push_back(element);
        }

        int first = arr1[0] ;

        int min = INT_MAX ;

        vector<int> rotation ;

        for(int i=0 ; i<n ; i++)
        {
            if((arr2[i] + first) % n < min)
            {
                rotation.clear();
                rotation.push_back(i-1);
            }
            else if((arr2[i] + first) % n == min)
            {
                rotation.push_back(i-1);
            }
        }

        vector<int> arr3 ;

        if(rotation.size() == 1)
        {
            rotate(arr2.begin(), arr2.begin()+rotation[0]-1, arr2.end());

            for(int i=0 ; i<n ; i++)
            {
                arr3.push_back((arr1[i]+arr2[i]) % n) ;
            }

            for(auto num1 : arr3)
            {
                cout << num1 << " " ;
            }

            cout << endl ;
            continue ;
        }

        else {
            for(auto i : rotation)
            {
                vector<int> temp(arr2) ;
                rotate(temp.begin(), temp.begin()+i-1, temp.end());

                




            }

        }

        

        
    }

    return 0;
}