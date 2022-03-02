#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int x;
    cin >> x;   
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int fav= 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] <= x){
            fav++;
        }
    }

    for (int i = 0; i < fav; i++)
    {
        if(arr[i] > x){
            cnt++;
        }
    }
    
    int res = INT_MAX;
    int strt = 0;
    int end = fav-1;
    while (end < n)
    {
        res = min(res , cnt);
        end++;
        if(arr[end] > x){
            cnt++;
        }
        if(arr[strt] > x){
            cnt--;
        }
        strt++;
    }
    


    cout << res;
//     11
// 10 12 20 20 5 19 19 12 1 20 1
// 1
}