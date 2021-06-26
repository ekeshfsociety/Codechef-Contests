#include<bits/stdc++.h>

using namespace std ;

int binaryNumber (int n)
{
    int binaryNumber[32];

    int i=0;
    while(n>0)
    {
        binaryNumber[i] = n % 2;
        n = n / 2;
        i++;
    }

    int sum = 0;

    for(int j=0 ; j<i ; j++)
    {
        sum = 10 * sum + binaryNumber[j] ;
    }

    return sum; 
}

int main()
{
    cout << binaryNumber(5) << endl ;
    cout << binaryNumber(8) << endl ;
    cout << binaryNumber(9) << endl ;
    cout << binaryNumber(10) << endl ;
    cout << binaryNumber(11) << endl ;

    return 0;
}