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

    stack <mi>;
    int prev[n];
    for (int i = 0; i < n; i++)
    {
        while (!(mi.empty()) && arr[mi.top()] >= arr[i])
        {
            mi.pop();
        }

        if(mi.empty())
            prev[i] = 0;
        else
            prev[i] = mi.top()+1;
        mi.push(i);
        
    }

    while(!(mi.empty())){
        mi.pop();
    }

    int next[n];
    for (int i = n-1; i >= 0; i--)
    {
        while (!(mi.empty()) && arr[mi.top()] >= arr[i])
        {
            mi.pop();
        }

        if(mi.isEmpty())
            next[i] = n-1;
        else
            next[i] = mi.top()-1;
        mi.push(i);
    }

    for (int i = 0; i < n; i++)
    {
        ans = max(ans , (next[i] - prev[i] + 1) * arr[i]);
    }
    
    cout << ans;
    
}
// [2,1,5,6,2,3]