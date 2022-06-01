#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int t1,t2,r1,r2;
        cin >> t1 >> t2 >> r1 >> r2 ;

        int time1 = t1*t1;
        int radius1 = r1*r1*r1 ;

        int time2= t2*t2;
        int radius2 = r2*r2*r2 ;

        float tr1 = time1/float(radius1);
        float tr2 = time2/float(radius2);

        if(tr1 == tr2)
        {
            cout << "YES" << endl ;
        }
        else{
            cout << "NO" << endl ;
        }
    }
    return 0;
}