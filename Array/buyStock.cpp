#include <bits/stdc++.h>
using namespace std;

int main(){
    int prices[5] = {7,1,5,3,6};
    int mi  =INT_MAX;
    int i = 1;
    int prof = 0;
    while(i < 6){
        mi = min(mi , prices[i-1]);
        prof = max(prof , prices[i]-mi);
        i++;
    }
    cout << prof;
}