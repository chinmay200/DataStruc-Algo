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
    int i = 0;
    int ans = INT_MAX;
    while (i < n-m)
    {
        ans = min(ans , arr[m-1+i] - arr[i]);
        i++;
    }

    cout << ans;
}