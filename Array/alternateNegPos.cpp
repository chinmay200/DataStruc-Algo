#include <bits/stdc++.h>
using namespace std;

void shift(vector <int> &num , int start , int end){
    int temp = num[end];
    while (start < end)
    {
        num[end] = num[end-1];
        end--;
    }
    
    num[start] = temp;
}

int main()
{
    //  {1, 2, 3, -4, -1, 4}
    //  {-4, 1, -1, 2, 3, 4}
    vector<int> arr;
    // arr.push_back(1);
    // arr.push_back(2);
    // arr.push_back(3);
    // arr.push_back(-4);
    // arr.push_back(-1);
    // arr.push_back(4);

    //-5, -2, 5, 2, 4, 7, 1, 8, 0, -8
    arr.push_back(-5);
    arr.push_back(-2);
    arr.push_back(5);
    arr.push_back(2);
    arr.push_back(4);
    arr.push_back(7);
    arr.push_back(1);
    arr.push_back(8);
    arr.push_back(0);
    arr.push_back(-8);
    
    int k = 0,j=0;

    // shift(arr,0,arr.size()-1);   

        // shift(arr,0,arr.size()-1);  
    for (int i = 0; i < arr.size(); i++)
    {
        if(j == arr.size()-1 || k == arr.size()-1){
            break;
        }
        // cout << arr[i] ;
        if(i%2 == 0){
            j=i;
            if(!(arr[i] < 0)){
                while(arr[j] >= 0) j++;
                shift(arr , i , j);
            }
        }
        else{
            k=i;
            if(!(arr[i] >= 0)){
                while(arr[k] < 0) k++;
                shift(arr , i , k);
            }
        }
    }
    // -5, 5, -2, 2, -8, 4, 7, 1, 8, 0
    

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}