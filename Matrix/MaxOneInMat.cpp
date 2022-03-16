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

    int row = -1;
    int col = m-1;

    for (int i = 0; i < n; i++)
    {
        for (int j = col; j >= 0; j--)
        {
            if(arr[i][j] == 1){
                row = i;
                col--;
            }
            else{
                break;
            }
        }
        
    }
    

    cout << row;

}