#include <bits/stdc++.h>
using namespace std;

void rev(vector<int> &bin){
    int n = bin.size()-1;
    int mid = n/2;

    for (int i = 0; i < mid; i++)
    {
        int temp = bin[n];
        bin[n] = bin[0];
        bin[0] = temp;
    }
    
}

void dectoBin(vector<int> &bin , int n){
    while (n > 0)
    {
        bin.push_back(n%2);
        n/=2;
    }

    rev(bin);
    
}

int main(){
    int n;
    cin >> n;

    vector<int> bin;
    dectoBin(bin , n);

    for (int i = 0; i < bin.size(); i++)
    {
        cout << bin[i];
    }
    
}