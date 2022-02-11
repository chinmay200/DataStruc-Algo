#include <bits/stdc++.h>
using namespace std;

void revVec(vector<int> &num){
    int n = num.size()-1;

    for (int i = 0; i < num.size()/2; i++)
    {
        int temp = num[i];
        num[i] = num[n-i];
        num[n-i] = temp;
    }

   
    
}
 
int main(){
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    
    revVec(arr);

    
     for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] <<" ";
    }
}