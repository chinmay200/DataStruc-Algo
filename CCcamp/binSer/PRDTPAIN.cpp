#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        vector<int> num;
        int n;
        cin >> n;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            num.push_back(temp);
        }

        int i , j , k;
        i = 0;

        for ( i; i < n; i++)
        {
            for ( k = i+2; k < n; k++)
            {
                int j1 = upper_bound(num.begin() + i, num.begin() + k , (num[i] + num[k])/2) - num.begin();
                int j2 =  lower_bound(num.begin() + i, num.begin() + k , (num[i] + num[k])/2) - num.begin();
                
                j1 = min(j1 , k-1);
                j2 = min(j2 , k-1);
                int n1 = abs(num[j1] - (num[i] + num[k])/2);
                int n2 = abs(num[j2] - (num[i] + num[k])/2);
                if(n1 < n2){
                    j = j1;
                }
                else{
                    j = j2;
                }

                sum += (num[i] - num[j])*(num[j] - num[k]);
            }
            
        }
        
        


        cout << sum << endl;
        
    }
}