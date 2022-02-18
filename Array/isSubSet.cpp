#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr;
    int n;
    vector<int> sub;
    int x;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;

        arr.push_back(temp);
    }

    cin >> x;

    for (int  i = 0; i < x; i++)
    {
        int temp;
        cin >> temp;
        sub.push_back(temp);
    }

    bool chk = false;
    
    for (int i = 0; i < x; i++)
    {
        chk = false;
        for (int j = 0; j < n; j++)
        {
            if(sub[i] == arr[j]){
                chk = true;
            }
        }

        if(!chk){
            cout << "Not a subset";
            break;
        }

        
    }

    if(chk){
        cout << "Is a subset";
    }
    
    
}