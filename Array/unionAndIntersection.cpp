#include <bits/stdc++.h>
using namespace std;

void intersection(int arr1[],int arr2[],int n1,int n2){
    int n = min(n1,n2);
    int ans[n] = {0};
    int k = 0;
    int j = 0,i = 0;
    while(i < n1 || j < n2){
        if(arr1[i] < arr2[j]){
            i++;
        }
        else if(arr1[i] > arr2[j]){
            j++;
        }
        else{
            ans[k] = arr1[i];
            j++,i++,k++;
        }
    }

    for(int i = 0 ;i < k; i++){
        cout << ans[i] << " ";
    }
}

void Union(int arr1[],int arr2[],int n1,int n2){
    int n = n1+n2;
    int k = 0;
    int i=0,j=0;
    int arr[n];
    while(i < n1 || j < n2){
        if(arr1[i] < arr2[j]){
            arr[k] = arr1[i];
            i++,k++;
        }
        else if(arr1[i] > arr2[j]){
            arr[k] = arr2[j];
            j++,k++;
        }
        else{
            arr[k] = arr1[i];
            j++,i++,k++;
        }
    }

    //For remaining elements in longer array
    while(i < n1){
        arr[k] = arr1[i];
            i++,k++;
    }
    while (j < n2)
    {
        arr[k] = arr2[j];
        j++,k++;
    }


    for(int i = 0 ;i < k; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr1[5] = {1,2,4,5,8};
    int arr2[4] = {4,5,9,11};
    intersection(arr1,arr2,5,4);
    cout << endl;
    Union(arr1 , arr2,5,4);
}