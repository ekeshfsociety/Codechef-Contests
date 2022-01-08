#include<bits/stdc++.h>

using namespace std;

int equation(int a, int b, int x)
{
    int eq = ceil((b - x)/2.0) + ceil((x - a) / 2.0);

    return eq ;
}

int main()
{
    int t ;
    cin >> t ;
    while(t--) {

    int a {} , b {} ;
    cin >> a >> b ;

    int newA = min(a,b);
    int newB = max(a,b);

    int result ;

    if(a==b)
    {
        result = equation(a,b,a);
    }
    else {
        result = max(equation(a,b,newA), max(equation(a,b,newA+1), max(equation(a,b,newB), equation(a,b,newB-1))));
    }

    cout << result << endl ;

    }

    return 0;
}