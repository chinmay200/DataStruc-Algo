#include <iostream>
using namespace std;

void display(int arr[] , int n){
    cout << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
}

void findMinMax(int arr[] , int n){
    int mi,ma;
    mi = INT32_MAX;
    ma = INT32_MIN;
    for(int i = 0;i < n; i++){
        if(arr[i] > ma){
            ma = arr[i];
        }
        else if(arr[i] < mi){
            mi = arr[i];
        }
    }
    cout << "Max:" <<ma<<endl;
    cout << "Min:" <<mi<<endl;
}

int main(){
    int arr[5] = {423,323,541,342,443};
    display(arr,5);
    findMinMax(arr , 5);
}