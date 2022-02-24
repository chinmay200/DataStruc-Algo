#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int m;

    cin >> m;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);
       
    int i = 0, j = m-1;
    int ans = INT_MAX;
    while(j < n){
        int diff = arr[j] - arr[i];
        ans = min(ans,diff);
        i++,j++;
    }

    cout <<  ans;
}