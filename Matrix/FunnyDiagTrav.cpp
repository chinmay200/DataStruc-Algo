#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int row = 0;
    int col = 0;
    int i = 1;
    while (col < n)
    {
        while (col > -1)
        {
            cout << arr[row][col] << " ";
            col--;
            row++;
        }
        col = i;
        i++;
        row = 0;
    }

    i = 2;
    row = 1;
    col = n-1;
    while(row < n){
        while(row < n){
            cout << arr[row][col] << " ";
            row++;
            col--;
        }
        row = i;
        i++;
        col = n-1;
    }
}