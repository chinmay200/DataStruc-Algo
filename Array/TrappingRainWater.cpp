#include <bits/stdc++.h>
using namespace std;

int leftMx(int pos , int arr[]){
    int mx = arr[pos];

    for (int i = pos; i >= 0; i--)
    {
        mx = max(arr[i] , mx);
    }
    return mx;
}
int rightMx(int pos , int arr[] , int n){
    int mx = arr[pos];

    for (int i = pos; i < n; i++)
    {
        mx = max(arr[i] , mx);
    }
    return mx;
}

int main(){
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int water = 0;

    int pref[n];

    pref[0] = arr[0];
    int suff[n];

    suff[n-1] = arr[n-1];

    for (int i = 1; i < n; i++)
    {
        pref[i] = max(pref[i-1] , arr[i]);
    }
    cout << endl;
    
    for (int i = n-2; i >= 0; i--)
    {
        suff[i] = max(suff[i+1] , arr[i]);
    }

    

    for (int i = 0; i < n; i++)
    {
        cout << pref[i] << " ";
    }

    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << suff[i] << " ";
    }
    

    for (int i = 0; i < n; i++)
    {
        int lft = pref[i];
        int rgt = suff[i];
        int mi = min(lft , rgt);

        int ans = abs(mi - arr[i]);

        water+=ans;
    }
    
    cout << water ;
    
}