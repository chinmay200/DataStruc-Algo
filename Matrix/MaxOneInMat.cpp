#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int m;
    cin >> m;

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int row = 0;
    int i = m-1;
    int j = 0;
    while (i >= 0 && j < n)
    {
        if(arr[i][j] == 0){
            j++;
        }
        else if(arr[i][j] == 1){
            i--;
            row = j;
        }
    }
    
    cout << row;

}