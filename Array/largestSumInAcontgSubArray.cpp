#include <bits/stdc++.h>
using namespace std;

void findMaxContigSum(int arr[] , int n){
    int m = arr[0];
    int nextm = arr[0];
    for(int i = 1; i < n; i++){
        int num = arr[i];
        nextm = max(nextm+num , num);
        m = max(nextm , m);
        // cout << m << '\n';
    }

    cout << m;
}

int main(){
    int arr[5] = {1,-2,3,-1,4};
    findMaxContigSum(arr , 5);
}