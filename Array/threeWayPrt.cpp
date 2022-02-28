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

    int a,b;
    cin >> a >> b;

    int ans[n] ;
    int j = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if(arr[i] <= a){
    //         ans[j] = arr[i];
    //         j++;
    //     }
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     if(arr[i] > a && arr[i] <= b){
    //         ans[j] = arr[i];
    //         j++;
    //     }
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     if(arr[i] >= b){
    //         ans[j] = arr[i];
    //         j++;
    //     }
    // }


    int l = 0;
    int r = n-1;
    int i = 0;
    while(i < n && i < r){
        if(arr[i] > b){
            int temp = arr[i];
            arr[i] = arr[r];
            arr[r] = temp;
            r--;
            i-=2;
        }

        else if (arr[i] < a)
        {
            int temp = arr[i];
            arr[i] = arr[l];
            arr[l] = temp;
            l++;
        }
        i++;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    
}