#include <bits/stdc++.h>
using namespace std;

void ConsTtree(vector<int> arr,int tree[], int indx ,int l,int r){
    if(l == r){
        tree[indx] = arr[l];
        return;
    }
    int mid = (l+r)/2;
    ConsTtree(arr,tree,2*indx+1,l,mid);
    ConsTtree(arr,tree,2*indx+2,mid+1,r);
    tree[indx] = max(tree[2*indx+1] , tree[2*indx+2]);
}


int main(){
    vector<int> arr;
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(31);
    int size = arr.size();
    int tree[4*size] = {INT32_MAX};
    ConsTtree(arr,tree,0,0,size-1);
    for(int i = 0; i < 4*size; i++){
        if(tree[i] != 0){
            cout << tree[i] << " ";
        }
    }
}