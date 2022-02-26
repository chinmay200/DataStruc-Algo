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
    int i = 0;
    while (i < n)
    {
        int sum = arr[i];
        if(sum > x){
                i = i+1;
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
        
        i++;
    }

    cout << mi;
        
    
}