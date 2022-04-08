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


    for (int i = 0; i < n; i++)
    {
        int l = prevmin(arr , i);
        int r = nextmin(arr , i , n);

        l++;
        r--;

        ans = max(ans , (r-l+1)*arr[i]);
    }
        cout << ans;
}
// [2,1,5,6,2,3]