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

    int x;
    cin >> x;

    int strt,end;
    int mi = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int sum = arr[i];
        if(sum > x){
                end = i;
                strt = i-1;
                mi = min(mi , end-strt);
            }
        for (int j = i+1; j < n; j++)
        {
            sum+=arr[j];
            if(sum > x){
                end = j;
                strt = i-1;
                mi = min(mi , end-strt);
            }
        }
        
    }

    cout << mi;
        
    
}