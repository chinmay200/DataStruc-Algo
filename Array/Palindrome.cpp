#include <bits/stdc++.h>

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