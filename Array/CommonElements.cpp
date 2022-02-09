#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int arr1[3] = {1,2,3};
    int arr2[3] = {4,5,6};
    int arr3[3] = {7,8,9};

    int n1 = 3, n2 = 3, n3 = 3;
    int i1 = 0;
    int i2 = 0;
    int i3 = 0;
    vector<int> cnt;
    while (i1 < n1 && i2 < n2 && i3 < n3)
    {
        if(arr1[i1] < arr2[i2]){
            i1++;
        }
        else if(arr1[i1] > arr2[i2]){
            i2++;
        }
        else{
            if (arr1[i1] == arr1[i1-1])
            {
                i1++;
                continue;
            }
            
            while (i3 < n3 && arr3[i3] < arr1[i1]) i3++;
            
            if(arr3[i3] == arr1[i1]) {
                cnt.push_back(arr1[i1]);
            }
            i2++;
            i1++;
            
        }
    }


    for (int i = 0; i < cnt.size(); i++)
    {
        cout << cnt[i];
    }
    
    
}