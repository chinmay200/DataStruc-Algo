#include <bits/stdc++.h>
#include "DisplayList.cpp"
using namespace std;

void rev(int arr[] , int strt , int end){
    while (strt < end)
    {
        int temp = arr[strt];
        arr[strt] = arr[end];
        arr[end] = temp;
        strt++;
        end--;
    }

}

int main(){
    int arr[3] = {3,2,1};
    int s1 = 3 - 2;
        int s2 = 3 - 1;
        while(s1 >=0 && arr[s1] >= arr[s1+1]){
            s1--;
        }
        if(s1 >= 0){
            while(arr[s2] <= arr[s1]){
                s2--;
            }
            swap(arr[s2],arr[s1]);
        }
        rev(arr,s1+1,3-1);
        display(arr,3);
        }