#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n = 7;
    int arr[n] = {1,9,3,10,4,20,2};

    // 20
    // 6 6 2 3 1 4 1 5 6 2 8 7 4 2 1 3 4 5 9 6

    sort(arr , arr+n);
        int len = 1;
        int ans = 1;
    
        for(int i = 0; i < n;i++){
            if(arr[i]+1 == arr[i+1]){
                len += 1;
            }
            else if(arr[i] == arr[i+1]){
               continue; 
            }
            else{
                len = 1;
            }
    
            ans = max(len , ans);
        }
        cout << ans;
}