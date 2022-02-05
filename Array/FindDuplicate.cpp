#include <bits/stdc++.h>
using namespace std;

int findDuplicate(int arr[] , int n){
    int num = n;
    for(int i = 0; i < n;i++){
        if(arr[abs(arr[i])-1] < 0){
            num = i;
            break;
        }
        else{
            arr[abs(arr[i])-1] *=-1;
        }
    }
    if(num != n){
        if(arr[num] < 0){
            return arr[num]*(-1);
        }
        return arr[num];
    }
    return -1;
}

int findDupNoMod(int arr[] , int n){
    int slow = arr[0];
    int fast = arr[0];

    do{
        slow = arr[slow];
        fast = arr[arr[fast]];
    }while(slow != fast);

    fast = arr[0];
    while(slow != fast){
        slow = arr[slow];
        fast = arr[fast];
    }
    return arr[fast];
}


int main(){
    int arr[6] = {2,1,3,5,3,2};
    cout << findDupNoMod(arr, 6);
}