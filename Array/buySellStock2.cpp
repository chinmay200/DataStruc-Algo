#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> prof;
    int n = arr.size();
    for(int i = 0; i < n; i++){
        prof.push_back(0);
    }
    int sell = arr[n-1];

    for (int i = n-2; i >= 0; i--)
    {   
        if(arr[i] > sell){
            sell     = arr[i];
        }
        prof[i] = max(prof[i+1] , sell - arr[i]);
    }
    int buy = arr[0];

    for (int i = 1; i < n; i++)
    {
        if(arr[i] < buy){
            buy = arr[i];
        }
        prof[i] = max(prof[i-1] , prof[i]+(arr[i] - buy));
    }
    cout << prof[n-1];
}