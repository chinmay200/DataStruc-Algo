#include <bits/stdc++.h>
using namespace std;

int median(int arr1[] , int arr2[] , int n1 , int n2){
    if(n2 < n1){
        return median(arr2, arr1, n2 , n1);
    }

    int low = 0;
    int high = n1;

    while(low <= high){
        int c1 = (high-low)/2 + low;
        int c2 = (n1+n2+1)/2;

        int l1,l2,r1,r2;

        if(c1 == 0){
            l1 = INT_MIN;
        }

        else if (c1 == n1)
        {
            r1 = INT_MAX;
        }
        
        if(c2 == 0){
            l2 = INT_MIN;
        }

        else if (c2 == n2)
        {
            r2 = INT_MAX;
        }

        if(c1 != 0 && c1 != n1){
            l1 = arr1[c1-1];
            r1 = arr1[c1];
        }
        
        if(c2 != 0 && c2 != n1){
            l2 = arr2[c2-1];
            r2 = arr2[c2];
        }
        
        if(l1 <= r2 && l2 <= r1){
            if(n1+n2 % 2 == 0){
                return (max(l1 , l2)+min(r1,r2)) / 2;
            }

            else{
                return max(l1 , l2);
            }
        }

        else if(l1 > r2){
            high = c1-1;
        }

        else{
            low = c1+1;
        }

    }
}

int main(){
    int n1;
    int arr1[n1];
    int n2;
    int arr2[n2];

    cin >> n1;
    cin >> n2;

    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }
    
    int ans = median(arr1 , arr2 , n1, n2);
    cout << ans;
}