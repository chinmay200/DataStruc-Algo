#include <bits/stdc++.h>
using namespace std;

void display(int arr[] , int n){
    cout << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
}

void DutchNatFlagAlgo(int arr[] , int n){
    int mid, low , high;
    mid = 0;low = 0;high = n-1;
    int temp;
    while (mid <= high)
    {
        switch (arr[mid])
        {
        case 1:
            mid++;
            break;
        case 0:
            temp = arr[mid];
            arr[mid] = arr[low];
            arr[low] = temp;
            mid++,low++;
            break;
        default:
            temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            high--;
            break;
        }
    }

}

int main(){
    int arr[5] = {0,1,2,0,2};
    display(arr , 5);
    DutchNatFlagAlgo(arr , 5);
    display(arr , 5);
}