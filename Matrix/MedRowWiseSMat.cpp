#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r;
    cin >> r;
    int c;
    cin >> c;

    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    int s = 0;
    int e = 100000000;

    int n = r * c;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        int smaller = 0;

        for (int i = 0; i < r; i++)
        {
            int lo = 0;
            int high = c - 1;

            while (lo <= high)
            {
                int m = (high - lo) / 2 + lo;

                if (arr[i][m] <= mid)
                {
                    lo = m + 1;
                }
                else
                {
                    high = m - 1;
                }
            }

            smaller += lo;
        }

        if (smaller <= n / 2)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }

    cout << s;
}