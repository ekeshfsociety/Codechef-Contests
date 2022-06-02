#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int Pa{}, Pb{}, Qa{}, Qb{};
        cin >> Pa >> Pb >> Qa >> Qb ;

        int maxP = max(Pa, Pb);
        int maxQ = max(Qa, Qb);

        if(maxP > maxQ)
        {
            cout << "Q" << endl ;
        }
        else if(maxP < maxQ)
        {
            cout << "P" << endl ;
        }
        else {
            cout << "TIE" << endl ;
        }
    }
    return 0;
}