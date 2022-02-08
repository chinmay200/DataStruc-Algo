#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[6] = {1, 5, 10, 20, 40, 80};
    int arr2[5] = {6, 7, 20, 80, 100};
    int arr3[8] = {3, 4, 15, 20, 30, 70, 80, 120};

    int n1 = 6, n2 = 5, n3 = 8;
    int i1 = 0;
    int i2 = 0;
    int i3 = 0;

    vector<int> cnt;
    while(i1 < n1 && i2 < n2 && i3 < n3){
        if(arr1[i1] == arr2[i2] == arr3[i3]){
            cout << "Pushed" <<endl;
            cnt.push_back(arr1[i1]);
            i1++,i2++,i3++;
        }
        else{
            cout << i1 <<endl;
            cout << i2 <<endl;
            cout << i3 <<endl;
            int mx = max(arr1[i1] , max(arr2[i2] , arr3[i3]));
            if(arr1[i1] < mx){
                i1++;
            }
            if(arr2[i2] < mx){
                i2++;
            }
            if(arr3[i3] < mx){
                i3++;
            }
            else{
                cnt.push_back(arr1[i1]);
                i1++,i2++,i3++;
            }
        }
    }

    for (int i = 0; i < cnt.size(); i++)
    {
        cout << cnt[i] << " ";
    }
    
}