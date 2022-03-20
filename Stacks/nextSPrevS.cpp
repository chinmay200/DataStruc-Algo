#include <bits/stdc++.h>
using namespace std;

void prevSmaller(int arr[] , int n){
    stack<int> num;
    for (int i = 0; i < n; i++)
    {
        while (!num.empty() && arr[num.top()] >= arr[i])
        {
            num.pop();
        }

        if(num.empty()){
            cout << -1 << " ";
        }
        else{
            cout << num.top() << " ";
        }
        num.push(i);
        
    }
}


void nextSmaller(int arr[] , int n){
    stack<int> num;
    vector<int> ans;
    for (int i = n-1; i >= 0; i--)
    {
        while (!num.empty() && arr[num.top()] >= arr[i])
        {
            num.pop();
        }

        if(num.empty()){
            // cout << -1 << " ";
            ans.push_back(-1);
        }
        else{
            // cout << num.top() << " ";
            ans.push_back(num.top());
        }
        num.push(i);
        
    }

    reverse(ans.begin() , ans.end());

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    
    
}

int main(){
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    prevSmaller(arr,n);
    cout << endl;
    nextSmaller(arr,n);
}