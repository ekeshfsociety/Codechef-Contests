#include <bits/stdc++.h>

using namespace std;

int main()
{
    time_t start, end;
    time(&start);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr;

        for (int i = 0; i < n; i++)
        {
            int ele;
            cin >> ele;

            arr.push_back(ele);
        }

        sort(arr.begin(), arr.end()); // [2, 4 , 6 , 8 , 13 , 15]

        int newarr[arr[0]]; // [ , ]

        if (arr[0] == 1)
        {
            int count{};
            arr[n - 1] = 1;
            for (auto num1 : arr)
            {
                count += num1;
            }
            cout << count << endl;
            continue;
        }

        for (int i = 0; i < arr[0]; i++) // 2 -> 6 , 4
        {
            int count = 0;
            for (auto num1 : arr)
            {
                if (num1 % (i + 1) == 0)
                    count++;
            }
            newarr[i] = count;
        }

        int flag = 0;
        int result = 0;

        for (int i = 0; i < arr[0]; i++)
        { // 2 -> 0 , 1

            if (newarr[i] >= n - 1)
            {
                flag = 1;
                result = i + 1;
            }
        }

        if (flag == 0)
        {
            result = 1;
            arr[n - 1] = result; // [2, 4 , 6 , 8 , 13 , 1]

            int count = 0;

            for (auto num1 : arr)
            {
                count = count + num1;
            }

            cout << count << endl;
        }
        else
        {
            int count = 0;
            arr[n - 1] = result;
            for (auto num1 : arr)
            {
                count = count + (num1 / result);
            }

            cout << count << endl;
        }
    }
    time(&end);

    cout << "Time taken: " << end - start;
    return 0;
}