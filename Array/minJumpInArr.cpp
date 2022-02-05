#include <bits/stdc++.h>
using namespace std;

int minJump(int arr[] , int n){
    int m = 0, jump = 0;
    if(arr[0] == 0){
        return -1;
    }
    int mxjmp = 0;
    for(int i = 0; i < n; i++){
        m = max(m , i+arr[i]);
        if(mxjmp < i){
            return -1;
        }
        if(m >= n-1){
            jump++;
            break;
        }
        if(i == mxjmp){
            mxjmp = m;
            jump++;
        }
    }
    return jump;
}



int main(){
    int arr[4] = {2,1,0,3};
    cout << minJump(arr , 4);
}