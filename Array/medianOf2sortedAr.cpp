#include <bits/stdc++.h>
using namespace std;

double median(int nums1[], int nums2[], int n1, int n2)
{
    if (nums1.size() > nums2.size())
    {
        return findMedianSortedArrays(nums2, nums1, n2, n1);
    }

    // int n1 = nums1.size();
    // int n2 = nums2.size();

    int low = 0;
    int high = n1;

    int c2;

    while (low <= high)
    {
        int mid = (high + low) / 2;
        int c1 = mid;
        c2 = ((n1 + n2 + 1) / 2) - c1;

        int l1 = (c1 > 0)
                     ? nums1[c1 - 1]
                     : INT_MIN;
        int l2 = (c2 > 0) ? nums2[c2 - 1] : INT_MIN;
        int r1 = (c1 < n1) ? nums1[c1] : INT_MAX;
        int r2 = (c2 < n2) ? nums2[c2] : INT_MAX;

        if (l1 <= r2 && l2 <= r1)
        {
            if ((n1 + n2) % 2 == 0)
            {
                return (max(l1, l2) + min(r1, r2)) / 2.0;
            }

            else
            {
                return max(l1, l2) * 1.0;
            }
        }

        else if (l1 > r2)
        {
            high = c1 - 1;
        }

        else
        {
            low = c1 + 1;
        }
    }

    return 0.0;
}
int main()
{
    int n1;
    int arr1[n1];
    int n2;
    int arr2[n2];

    cin >> n1;
    cin >> n2;

    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    int ans = median(arr1, arr2, n1, n2);
    cout << ans;
}