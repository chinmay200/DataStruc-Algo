#include <bits/stdc++.h>

#define ll long long
using namespace std;

ll merge(ll arr[] , ll start , ll mid , ll end){
        ll counter = 0;
        int n1 = (mid-start+1);
        int n2 = end-mid;
        ll l[n1];
        ll r[n2];
        for(int i = 0; i < n1; i++){
            l[i] = arr[start+i];
        }

        for(int i = 0; i < n1; i++){
            r[i] = arr[mid+1+i];
        }
        int i = 0,j=0,k=start;
        while(i < n1 && j < n2){
            if(l[i] <= r[j]){
                arr[k] = l[i];
                k++,i++;
            }
            else{
                arr[k] = r[j];
                counter+=(n1-i);
                k++,j++;
            }
        }
        while(i < n1){
            arr[k++] = l[i++];
        }

        while(j < n2){
            arr[k++] = r[j++];
        }
        return counter;
    }


    ll mergeSort(ll arr[] , ll start, ll end){
        ll counter = 0;
        if(start < end){
            ll mid = (start+end)/2;
            counter += mergeSort(arr,start,mid);
            counter += mergeSort(arr,mid+1,end);
            counter += merge(arr,start,mid,end);
        }
        return counter;
    }

int main()
{
    ll arr[5] = {8, 3, 4, 5, 6};
    ll count = mergeSort(arr, 0, 4);
    cout << count;
}