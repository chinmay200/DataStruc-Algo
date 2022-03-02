#include <bits/stdc++.h>
#include "Palindrome.cpp"
using namespace std;


int main(){
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool chk = true;

    for (int i = 0; i < n; i++)
    {
        if(!(palin(arr[i]))){
            chk = false;
            break;
        };
    }
    
    if (chk)
    {
        cout << 1;
    }
    else{
        cout << 0;
    }
    
}