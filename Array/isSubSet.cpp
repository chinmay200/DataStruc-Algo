#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    int n;
    vector<int> sub;
    int x;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;

        arr.push_back(temp);
    }

    cin >> x;

    for (int i = 0; i < x; i++)
    {
        int temp;
        cin >> temp;
        sub.push_back(temp);
    }

    bool chk = true;
    int cnt = 0;
    sort(arr.begin(), arr.end());
    sort(sub.begin(), sub.end());

    int k = 0;
    int j = 0;
    while (k != arr.size())
    {
        if (k == arr.size() - 1 && cnt != sub.size())
        {
            chk = false;
            cout << "No" << endl;
            break;
        }

        else if (arr[k] < sub[j])
        {
            k++;
        }

        else
        {
            j++;
            cnt++;
        }
    }

    if (chk)
    {
        cout << "Yes" <<endl ;
    }
}