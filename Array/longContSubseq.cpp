#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n = 7;
    int arr[n] = {1,9,3,10,4,20,2};

    // 20
    // 6 6 2 3 1 4 1 5 6 2 8 7 4 2 1 3 4 5 9 6

    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }
    
    int ans = 1;
    int len = 0;
    for (int i = 0; i < n; i++)
    {
        if(!s.count(arr[i]-1)){
            int num = arr[i];
            len = 1;
            while (s.count(num+1))
            {
                len+=1;
                num+=1;
            }
            
            ans = max(ans , len);
        }
    }

    cout << ans ; 
    
}