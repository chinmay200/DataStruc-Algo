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

    int sum = 0;
    cin >> sum;
    int cnt = 0;

    sort(arr,  arr+n);

    int i = 0;
    while (i < n-2)
    {
        int k = i+1;
        int j = n-1;
        while (k < j)
        {
            if(arr[i] + arr[k] + arr[j] == sum){
                cnt++;
                break;
            }

            else if(arr[i] + arr[k] + arr[j] < sum){
                k++;
            }
            else{
                j--;
            }
        }

        i++;
        
    }
    
    
    cout << cnt;
    
}