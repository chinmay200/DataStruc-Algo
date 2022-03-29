#include <bits/stdc++.h>
using namespace std;

void binToDec(vector<int> &b, int &num){
    int i = 0;
    int n = b.size()-1;
    while (n >= 0)
    {
        int d = b[n];
        num += (pow(2 , i)*d);
        i++;
        n--;
    }
    
}

int main(){
    string bin;

    cin >> bin;

    vector<int> b;
    for (int i = 0; i < bin.length(); i++)
    {
        if(bin[i] == '1'){
            b.push_back(1);
        }
        else{
            b.push_back(0);
        }
    }
    
    int num = 0;
    binToDec(b , num);
    cout << endl;
    cout << num;
}