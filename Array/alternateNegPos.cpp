#include <bits/stdc++.h>
using namespace std;

void shift(vector<int> &num, int i, int j)
{
    int temp = num[j];
    int k = j;
    while (j > i)
    {
        num[j] = num[j - 1];
        j--;
    }
    // cout << temp;
    num[i] = temp;
    cout << num[i];

    //  for (int i = 0; i < num.size(); i++)
    // {
    //     cout << num[i] << " ";
    // }
}

int main()
{
    //  {1, 2, 3, -4, -1, 4}
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(-4);
    arr.push_back(-1);
    arr.push_back(4);
    
    

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}