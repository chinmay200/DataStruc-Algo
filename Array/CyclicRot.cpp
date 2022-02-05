#include <bits/stdc++.h>
using namespace std;

void display(int arr[] , int n){
    cout << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
}

void cyclicRotation(int arr[] , int n){
    int temp = arr[n-1];
    for(int i = n-1; i > 0; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
}

void revArray(int arr[] , int start , int end){
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void cyclicRotationK(int arr[] , int n , int k){
    int rot = k%n;
    revArray(arr, 0 ,n-rot-1);
    revArray(arr, n-rot , n-1);
    revArray(arr, 0 ,n-1);
}

int main(){
    int arr[4] = {1,2,3,4};
    display(arr , 4);
    // cyclicRotation(arr , 4);
    cyclicRotationK(arr , 4 , 4);
    display(arr , 4);
}