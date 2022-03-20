#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
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