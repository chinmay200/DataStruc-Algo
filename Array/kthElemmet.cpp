#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[5] = {4,2,8,1,9};
    int k;
    cin >> k;
    sort(arr , arr+5);
    cout << arr[k-1];
}