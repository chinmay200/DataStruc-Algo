#include <bits/stdc++.h>
using namespace std;


// void digit(vector<int> temp , int carr){
//     temp.push_back(carr);
// }

int main()
{
    int n;
    cin >> n;
    vector<int> fact;
    fact.push_back(1);
    int c = 0;
    for (int i = 2; i <= n; i++)
    {
        int size = fact.size();
        int j = 0;
        while(j < size){
            int temp = fact[j]*i+c;
            fact[j] = temp%10;
            c = temp/10;
            j++; 
        }

        while(c > 0){
            fact.push_back(c%10);
            c/=10;
        }
    }
    // cout << fact.size();
    
    for (int i = fact.size()-1; i >= 0; i--)
    {
        cout << fact[i];
    }
    
}