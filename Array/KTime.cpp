#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n = 8;
    int arr[n] = {3, 1, 2, 2, 1, 2, 3, 3};

    int x = n/4;

    unordered_map<int,int> m;

    for (int i = 0; i < n; i++)
    {
        m[arr[i]] += 1; 
    }

    unordered_map<int , int>::iterator it;

    for (it = m.begin();it != m.end();it++)
    {
        if(it->second > x){
            cout << it->first << " ";
        }
    }
    
    
}