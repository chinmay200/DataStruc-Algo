#include <bits/stdc++.h>
using namespace std;

void display(int arr[] , int n){
    cout << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
}

int minHt(int arr[] , int n, int k){
    sort(arr, arr+n);
    int small = arr[0]+k;
    int last = arr[n-1]-k;
    int mi,mx;
    int ans = arr[n-1] - arr[0];
    for(int i = 0; i < n;i++){
        mi = min(small , arr[i+1]-k);
        mx = max(last,arr[i]+k);
        if(mi < 0){
            continue;
        }
        ans = min(ans , mx-mi);
    }
    return ans;
}

int maxHt(int arr[] , int n, int k){
    sort(arr, arr+n);
    int small = arr[0]-k;
    int last = arr[n-1]+k;
    int mi,mx;
    int ans = arr[n-1] - arr[0];
    for(int i = 0; i < n;i++){
        mi = min(small , arr[i+1]+k);
        mx = max(last,arr[i]-k);
        if(mi < 0){
            continue;
        }
        ans = max(ans , mx-mi);
    }
    return ans;
}

int main(){
    int arr[4] = {1,5,8,10};
    cout << minHt(arr,4,2);
}