#include <bits/stdc++.h>
using namespace std;

int prevmin(int arr[] , int i){
    int x = -1;
    int pos = i;
    while(arr[i] <= arr[pos]){
        pos--;
        x = pos;
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

    for (int i = 0; i < n; i++)
    {
        int l = prevmin(arr , i);
        int r = nextmin(arr , i , n);

        l++ , r++;
        ans = max(ans , (r-l)*arr[i]);
    }
    
    
    cout << ans;
}