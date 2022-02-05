#include <bits/stdc++.h>
#include "DisplayList.cpp"
using namespace std;

void merge(int arr1[] , int arr2[],int n1,int n2){
    int k = n1-1;
    int j = 0 ;
    int i = 0;
    while(i <= k && j < n2){
        if(arr1[i] > arr2[j]){
            swap(arr1[k] , arr2[j]);
            display(arr1,n1);
            display(arr2,n2);
            k--;
            j++;
        }
        else{
            i++;
        }
    }
    sort(arr1 , arr1+n1);
    sort(arr2 , arr2+n2);
}

int main(){
    int arr1[2] = {10,12};
    int arr2[3] = {5,18,20};
    // display(arr1,4);
    // display(arr2,5);
    merge(arr1,arr2,2,3);
    // display(arr1,4);
    // display(arr2,5);
    // merge()
}