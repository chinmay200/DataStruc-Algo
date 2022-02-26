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
    int j = 1;
    int sum = arr[i];
    while (i < n && j < n)
    {
        if (sum > x)
        {   
            strt = i;
            end = j;
            mi = min(mi , j-i);
            sum-=arr[i];
            i++;
        }
        else{
            sum += arr[j];
            j++;
        }
        
    }

    cout << mi;
        
    
}