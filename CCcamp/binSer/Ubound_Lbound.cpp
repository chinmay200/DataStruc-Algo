#include <bits/stdc++.h>
using namespace std;

//Upper bound returns the index of where the element will be inserted if already exist it will be inserted in last position but not greater than next element
//lower bound returns the index of where the element will be inserted if already exist it will be inserted in first position but not lesser than previous element

// if element does not exist then lower_bound() and upper_bound() will return same index

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(3);
    v.push_back(12);
    v.push_back(14);

    //Returns the first occurence of element
    vector<int>::iterator lower = lower_bound(v.begin() , v.end() , 3);
    cout << (lower - v.begin());

    //Returns the last occurence of element
    vector<int>::iterator upper = upper_bound(v.begin() , v.end() , 3);
    cout << '\n'<<(upper - v.begin()-1);
}