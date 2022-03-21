#include <bits/stdc++.h>
using namespace std;


void prevSmaller(int arr[] , int n, vector<int> &res){
    stack<int> num;
    for (int i = 0; i < n; i++)
    {
        while (!num.empty() && arr[num.top()] >= arr[i])
        {
            num.pop();
        }

        if(num.empty()){
            res.push_back(-1);
        }
        else{
            res.push_back(num.top());
        }
        num.push(i); 
    }
}


void nextSmaller(int arr[] , int n ,vector<int> &res){
    stack<int> num;
    int k = 0;
    for (int i = n-1; i >= 0; i--)
    {
        while (!num.empty() && arr[num.top()] >= arr[i])
        {
            num.pop();
        }

        if(num.empty()){
            res.push_back(n);
        }
        else{
            res.push_back(num.top());
        }
        num.push(i);
        
    }
    reverse(res.begin() , res.end());
}

int maxArea(int arr[] , int n){
    int ans = 0;
    vector<int> prev;
    vector<int> nex;

    prevSmaller(arr , n , prev);
    nextSmaller(arr , n , nex);

    for (int i = 0; i < n; i++)
    {
        int sol = (nex[i] - prev[i] + 1) * arr[i];
        ans = max(sol , ans);
    }
    return ans;
    
}



int main(){
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
    int i = 0;
    for (int j = 0; j < m; j++)
    {
        cur[j] = arr[i][j];
    }
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(arr[i][j] == 0){
                cur[j] = 0;
            }
            else{
                cur[j]++;
            }
        }
        

        int as = maxArea(cur , n);
        mx = max(mx , as);
    }
    
    cout << mx;
    
}