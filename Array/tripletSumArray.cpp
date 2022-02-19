#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;
    cin >> sum;
    int cnt = 0;

    // sort(arr,  arr+n);

    // int i = 0;
    // while (i < n - 2)
    // {
        // int k = i+1;
        // int j = n-1;
        // while (k < j)
        // {
        //     if(arr[i] + arr[k] + arr[j] == sum){
        //         cnt++;
        //         break;
        //     }

        //     else if(arr[i] + arr[k] + arr[j] < sum){
        //         k++;
        //     }
        //     else{
        //         j--;
        //     }
        // }

        // int j = i + 1;
        // unordered_set<int> s;
        // int diff = sum - arr[i];
        // while (j < n)
        // {
        //     if (s.find(diff - arr[j]) != s.end())
        //     {
        //         cnt++;
        //         break;
        //     }
        //     else
        //     {
        //         s.insert(arr[j]);
        //     }
        //     j++;
        // }

        // i++;
        for (int i = 0; i < n - 2; i++)
    {
 
        // Find pair in subarray A[i+1..n-1]
        // with sum equal to sum - A[i]
        unordered_set<int> s;
        int curr_sum = sum - arr[i];
        for (int j = i + 1; j < n; j++)
        {
            if (s.find(curr_sum - arr[j]) != s.end())
            {
                cnt++;
                break;
            }
            s.insert(arr[j]);
        }
    // }
    }

    // map<int,int>::iterator itr;

    // for (itr = m.begin();itr != m.end(); itr++)
    // {
    //     cout << itr->first <<" " <<itr->second;
    // }

    cout << endl;

    cout << cnt;
}