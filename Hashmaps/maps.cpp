#include <bits/stdc++.h>
using namespace std;
 
int main(){
    map<int,int> m;

    m[1] = 10;
    m[9] = 11;
    m[5] = 12;
    m[3] = 14;

    m.insert({4,13});
    for (auto &it : m)
    {
        cout << it.first << " " << it.second <<endl;
    }

    map<int,int> :: iterator it1;

    for (it1 = m.begin(); it1 != m.end(); it1++)
    {
         cout << (*it1).first << " " << (*it1).second <<endl;
    }
    
    
}