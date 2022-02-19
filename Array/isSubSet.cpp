#include <bits/stdc++.h>
using namespace std;

bool binSrc(vector<int> arr , int num){
    int l = 0;
    int e = arr.size()-1;

    while (l >= e)
    {
        int  mid = ((e - l)/2) + l
        if(arr[mid] < num){
            l = mid+1;
        }
        else if(arr[mid] > num){
            e = mid-1;
        }
        else{
            return true;
        }
    }
    return false;
    
}

int main()
{
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

    for (int i = 0; i < x; i++)
    {
        int temp;
        cin >> temp;
        sub.push_back(temp);
    }

   map<int,int> m;
   for (int i = 0; i < arr.size(); i++)
   {
       m[arr[i]] = 1;
   }

   for (int i = 0; i < sub.size(); i++)
   {
       if(!(m[sub[i]])){
           return "No";
        }
   }
   
   
    
    return "Yes";
}