#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n = 5;
    int arr[n] = {4 ,2 ,0 ,1 ,6};

    int k = 0;
    int sum = arr[0];

    for(int i = 0; i < n; i++){
        sum = arr[i];
        if(sum == k){
            cout << true;
        }
        for(int j = i+1; j < n; j++){
            sum+=arr[j];
            if(k == sum){
                cout << true;
                break;
            }
        }
    }
}