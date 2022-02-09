#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int arr[5] = {6, -3, -10, 0, 2};
    int ma = arr[0];
    int mi = arr[0];
    int ans = arr[0];
    for (int i = 1; i < 5; i++)
    {   
        if(arr[i] < 0){
            swap(mi , ma);
        }
        ma = max(ma*arr[i] , arr[i]);
        mi = min(mi*arr[i] , arr[i]);
        ans = max(ma , ans);
    }
    cout << ans;
}