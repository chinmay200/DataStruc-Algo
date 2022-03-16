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

    int mxcnt =0;
    int row = -1;

    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < m; j++)
        {
            if(arr[i][j] == 1){
                cnt++;
            }
        }

        if(cnt > mxcnt){
            mxcnt = cnt;
            row = i;
        }
    }
    
    cout << row;

}