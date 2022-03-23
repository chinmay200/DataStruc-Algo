#include <bits/stdc++.h>
using namespace std;

int maxArea(int arr[], int n)
{
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
    stack<int> m;
    int next[n];
    for (int i = n - 1; i >= 0; i--)
    {
        while (!m.empty() && arr[m.top()] >= arr[i])
        {
            m.pop();
        }

        if (m.empty())
        {
            next[i] = n;
        }
        else
        {
            next[i] = m.top();
        }
        m.push(i);
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, (next[i] - prev[i] - 1) * arr[i]);
    }

    return ans;
}

int main()
{
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

    int cur[m];
    for (int j = 0; j < m; j++)
    {
        cur[j] = arr[0][j];
    }

    stack<int> p;
    int prev[m];

    for (int i = 0; i < m; i++)
    {
        while (!p.empty() && cur[p.top()] >= cur[i])
        {
            p.pop();
        }

        if (p.empty())
        {
            prev[i] = -1;
        }
        else
        {
            prev[i] = p.top();
        }
        p.push(i);
    }

    while (!p.empty())
    {
        p.pop();
    }

    int nex[m];
    for (int i = m; i > -1; i--)
    {
        while (!p.empty() && cur[p.top()] >= cur[i])
        {
            p.pop();
        }
        if (p.empty())
        {
            nex[i] = -1;
        }
        else
        {
            nex[i] = p.top();
        }
        p.push(i);
    }

}