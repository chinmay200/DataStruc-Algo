#include <bits/stdc++.h>
using namespace std;

void display(int arr[] , int n){
    cout << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
}

void oneSided(int arr[] , int n){
    int lst = n-1;
    int temp = 0;
    for(int i = 0; i < n/2; i++){
        if(arr[i] < 0){
            temp = arr[i];
            arr[i] = arr[lst];
            arr[lst] = temp;
            lst--;
        }
    }
}

int main(){
    int arr[5] = {1,-8,-1,-2,2};
    display(arr , 5);
    oneSided(arr , 5);
    display(arr,5 );

}