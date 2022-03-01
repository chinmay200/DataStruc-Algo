#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int x;
    cin >> x;   
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int cnt= 0;
    
    for (int i = 0; i < n; i++)
    {
        if(arr[i] <= x){
            cnt++;
        }
    }

    int i = 0;
    int mi = INT_MAX;
    int num = 0;
    int smlCnt = 0;
    // cout << cnt;
    while (i < n)
    {

        if (num <= cnt)
        {
            if (arr[i] <= x)
            {
                smlCnt++;
            }
            num++;
        }
        else{
            cout << smlCnt << endl;
            mi = min(mi , cnt-smlCnt);
            cout << mi;
            num = 0;
        }
        i++;
    }

    cout << mi;
//     11
// 10 12 20 20 5 19 19 12 1 20 1
// 1
}