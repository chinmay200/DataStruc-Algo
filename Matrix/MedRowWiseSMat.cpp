#include <bits/stdc++.h>
using namespace std;

int main(){
    int r;
    cin >> r;
    int c;
    cin >> c;

    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    vector<int> temp;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            // cout << arr[i][]
            temp.push_back(arr[i][j]);
        }
        
    }

    sort(temp.begin() , temp.end());

    int n = temp.size();

     cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }
    

    int mid = n/2;

    if((r*c)%2 == 0){
        cout << (temp[mid] + temp[mid+1])/2;
    }
    else{
        cout << temp[mid];
    }
    
}