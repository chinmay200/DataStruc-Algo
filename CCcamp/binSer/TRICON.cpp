#include <bits/stdc++.h>
using namespace std;

//Using binary search
//upper bound and lower bound 
//        0   0   0   1    1  1  1   1 
// sum = {0 , 1 , 3 , 6 , 6, 10 , 15 , 21 ..... }
//ht      0   1   2   3   4   5   6   7  
int Numcoins(int n){
    vector<int> sum;
    for (int i = 0; i < 100; i++)
    {
        int num = (i*(i+1))/2;
        sum.push_back(num);
    }

    for (int i = 0; i < sum.size(); i++)
    {
        cout << sum[i] << " ";
    }
    

    // sum.push_back(1);
    // sum.push_back(3);
    // sum.push_back(3);
    // sum.push_back(9);
    // sum.push_back(9);
    // sum.push_back(9);
    // sum.push_back(11);
    // sum.push_back(122);
    
    int low = 0;
    int high = sum.size()-1;
    int index = sum.size();
    while (low <= high)
    {
        int mid = (high-low)/2 + low;
        if (sum[mid] <= n)
        {   
            low = mid + 1;
        }
        else{
            index = min(mid,index);
            high = mid - 1;
        }
        
    }  

    return index-1;
    

}
 
int main(){
    int n;
    cin >> n;

    int coins = Numcoins(n);
    cout<< "\n\n" << coins;
}