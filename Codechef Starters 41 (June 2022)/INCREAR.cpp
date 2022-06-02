// #include<bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         int X{}, Y{};
//         cin >> X >> Y ;

//         int result = 0;

//         if(X == Y)
//         {
//             cout << result << endl ;
//         }
//         else {
//             while(X != Y)
//             {
//                 if(X > Y)
//                 {
//                     Y = Y + 2;
//                     result++;
//                 }
//                 else {
//                     X = X + 1;
//                     result++;
//                 }
//             }
//             cout << result << endl ;
//         }
//     }
//     return 0;
// }

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int X{}, Y{};
        cin >> X >> Y ;

        if(X == Y)
        {
            cout << "0" << endl ;
        }
        else if(X < Y) {
            cout << (Y-X) << endl ;
        }
        else {
            if(((X % 2 == 0) and (Y % 2 == 0)) or ((X % 2 == 1) and (Y % 2 == 1)))
            {
                cout << (((X-Y)/2) + ((X-Y)%2)) << endl ;
            }
            else {
                cout << ((((X-Y)/2) + ((X-Y)%2)) + 1) << endl ;
            }
        }
    }

    return 0;
}