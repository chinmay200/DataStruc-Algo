#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int prof = 0;
    int n = 6;
    int arr[n] = {10, 22, 5, 75, 65, 80};
    int i = 0;
    int j = 1;
    int cnt = 2;
    int ans = 0;
    while (i < n && j < n && cnt >= 0)
    {
        if(arr[j-1] < arr[j]){
            prof = max(prof , arr[j] - arr[i]);
            cout << prof << " "; 
            // cout << i <<" " <<j << " ";
            j++;
        }
        else{
            ans += prof;
            cnt--;
            prof = 0;
            // cout << i <<" "<< j << " ";
            i= j;
            j = i + 1;
        }
    }
    ans+=prof;
    
    cout  <<"\n"<< ans;
}