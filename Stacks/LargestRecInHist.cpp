#include <bits/stdc++.h>
using namespace std;

int prevmin(int arr[] , int i){
    int x = -1;
    for (int j = i; j > -1; j--)
    {
        if(arr[i] > arr[j]){
            x = j;
            break;
        }
    }
    return x;
}

int nextmin(int arr[] , int i , int n){
    int x = n;
    for (int j = i; j < n; j++)
    {
        if(arr[j] < arr[i]){
            x = j;
            break;
        }
    }
    return x;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << prevmin(arr , 3);
    cout << nextmin(arr , 3 , n);
    
    
    // cout << ans;
}