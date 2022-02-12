#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n = 5;
    int arr[n] = {4 ,2 ,-3 ,1 ,6};
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            return true;
        }
    }

    map<int,int> m;

    int sum = arr[0];
    m[sum] = 1;
    for (int i = 1; i < n; i++)
    {
        sum+=arr[i];
        if(sum == 0){
            cout << "true";
        }
        // cout << sum;
        if (m[sum])
        {
            cout << "True";
            break;
        }
        else{
            m[sum] = 1;
        }
        
    }
    
    
}