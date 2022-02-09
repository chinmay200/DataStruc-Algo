#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int arr[5] = {6, -3, -10, 0, 2};
    int prod = 1;
    int cur = 1;
    for (int i = 0; i < 5; i++)
    {   
        cur = arr[i];
        for (int j = i+1; j < 5; j++)
        {
            cur = cur*arr[j];
            cout << cur << endl;
            prod = max(cur , prod);
        }
    }
    cout << prod;
}