#include <bits/stdc++.h>
using namespace std;

int leftMx(int pos , int arr[]){
    int mx = arr[pos];

    for (int i = pos; i >= 0; i--)
    {
        mx = max(arr[i] , mx);
    }
    return mx;
}
int rightMx(int pos , int arr[] , int n){
    int mx = arr[pos];

    for (int i = pos; i < n; i++)
    {
        mx = max(arr[i] , mx);
    }
    return mx;
}

int main(){
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int water = 0;

    for (int i = 0; i < n; i++)
    {
        int lft = leftMx(i , arr);
        int rgt = rightMx(i , arr , n);
        int mi = min(lft , rgt);

        int ans = abs(mi - arr[i]);

        water+=ans;
    }
    
    cout << water ;
    
}