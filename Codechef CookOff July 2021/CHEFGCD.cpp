#include<bits/stdc++.h>

using namespace std;

int minOperations(int x, int y, int cnt)
{
    if(__gcd(x,y) > 1)
    {
        return cnt ;
    }

    int option1 = minOperations(x+1, y, cnt+1);
    int option2 = minOperations(x, y+1, cnt+1);

    int result = min(option1, option2) ;

    return result ;

}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x {} , y {} ;
        cin >> x >> y ;

        int hcf = __gcd(x,y) ;

        int result {} ;

        int count = 0;

        if(hcf > 1)
        {
            result = hcf ;
        }
        else {
            count = minOperations(x,y,count) ;
        }

        cout << count << endl ;
        
    }

    return 0;
}