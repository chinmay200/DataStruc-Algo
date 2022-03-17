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

    vector<int> sortarr;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sortarr.push_back(arr[i][j]);
        }
    }

    sort(sortarr.begin() , sortarr.end());
    for (int i = 0; i < n*n; i++)
    {
        cout<< sortarr[i] << " ";
    }
    
}