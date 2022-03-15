#include <bits/stdc++.h>
using namespace std;

int main(){
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
    int col = n-1;
    int i = col-1;
    while (col > -1)
    {
        while (col != n-1)
        {
            cout << arr[row][col] << " ";
            col++;
            row++;
        }
        cout << arr[row][col] << " ";
        col = i;
        i--;
        row = 0;
    }

    i = 2;
    row = 1;
    col = 0;
    while(i <= n){
        while(row < n){
            cout << arr[row][col] << " ";
            row++;
            col++;
        }
        row = i;
        i++;
        col = 0;
    }
}