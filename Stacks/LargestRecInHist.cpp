#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    stack<int> s;
    int prev[n];
    for (int i = 0; i < n; i++)
    {
        while (!s.empty() && arr[s.top()] >= arr[i])
        {
            s.pop();
        }

        if (s.empty())
        {
            prev[i] = -1;
        }

        else
        {
            prev[i] = s.top();
        }

        s.push(i);
    }
    stack<int> mn;
    int next[n];
    for (int i = n - 1; i >= 0; i--)
    {
        while (!mn.empty() && arr[mn.top()] >= arr[i])
        {
            mn.pop();
        }

        if (mn.empty())
        {
            next[i] = n;
        }
        else
        {
            next[i] = mn.top();
        }
        mn.push(i);
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans , (next[i] - prev[i] - 1) * arr[i]);
    }
    
    cout << ans;
}