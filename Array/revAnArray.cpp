#include <iostream>
using namespace std;

void display(int arr[] , int n){
    cout << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
}

void revArray(int arr[] , int n){
    int last = n-1;
    for(int i = 0; i < n/2; i++){
        int temp = arr[last];
        arr[last] = arr[i];
        arr[i] = temp;
        last--;
    }
}

int main(){
    // int n;
    // cin >> n;
    int arr[5] = {1,2,3,4,5};
    display(arr , 5);
    revArray(arr , 5);
    display(arr , 5);
    // for(int i = 0; i < n; i++){
    //     cin >> arr[i];
    // }
}