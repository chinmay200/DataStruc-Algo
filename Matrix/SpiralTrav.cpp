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

    int strtRow = 0;
    int strtCol = 0;
    int endCol = c - 1;
    int endRow = r - 1;

    while ((strtRow <= endRow) && (strtCol <= endCol))
    {
        for (int i = strtCol; i <= endCol; i++)
        {
            cout << arr[strtRow][i];
        }

        strtRow++;
        for (int i = strtRow; i <= endRow; i++)
        {
            cout << arr[i][endCol];
        }

        endCol--;

        if (strtRow <= endRow)
        {
            for (int i = endCol; i >= strtCol; i--)
            {
                cout << arr[endRow][i];
            }
            endRow--;
        }

        if (strtCol <= endCol)
        {
            for (int i = endRow; i >= strtRow; i--)
            {
                cout << arr[i][strtCol];
            }
            strtCol++;
        }
    }
}