#include <bits/stdc++.h>
using namespace std;

int main(){
    int k,n;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    map<int,int> m;
    int i = 0;
    int cnt = 0;
    while (i < n)
    {
        int x = k - arr[i];
        if(m[x]){
            cnt+= m[x];
            m[arr[i]]++;
        }
        else{
            m[arr[i]] += 1;
        }
        i++;
    }
    
    cout << cnt;
}