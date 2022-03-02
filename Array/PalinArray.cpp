#include <bits/stdc++.h>
using namespace std;

bool palin(int num){
    int temp = num;
    int rev = 0;
    while (temp>0)
    {
        int digit = temp%10;
        rev = (10*rev + digit);
        temp/=10;
    }

    if(rev == num){
        return true;
    }
    return false;
    
}

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