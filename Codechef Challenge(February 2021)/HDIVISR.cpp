#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n ;

    int result {} ;

    for(int i=10; i>=1 ; i--)
    {
        if(n%i == 0)
        {
            result = i;
            break;
        }
    }

    cout << result ;
}