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
    int index = m;
    for (int i = 0; i < n; i++)
    {
        int low = 0;
        int high = m - 1;
        int mid;
        while(low <= high){
            
            mid = (high-low)/2 +low;
            if(arr[i][mid] == 0){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }

        }

        if(low < index){
            index = low;
            row = i;
        }

    }
    
    cout << row;

}