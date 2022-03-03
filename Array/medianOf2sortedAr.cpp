#include <bits/stdc++.h>
using namespace std;

int median(int arr1[], int arr2[], int n1, int n2)
{
    if (n2 < n1)
    {
        return median(arr2, arr1, n2, n1);
    }

    int low = 0;
    int high = n1;

    int c2 = (n1 + n2 + 1) / 2 ;

    while (low <= high)
    {
        int c1 = (high + low) / 2 ;
        c2-=c1;
        
        int l1 = (c1 > 0)
                        ? nums1[c1 - 1]
                        : INT_MIN;
        int l2 = (c2 > 0) ? nums2[c2 - 1] : INT_MIN;
        int r1 = (c1 < n) ? nums1[c1] : INT_MAX;
        int r2 = (c2 < m) ? nums2[c2] : INT_MAX;

        if (l1 <= r2 && l2 <= r1)
        {
            if (n1 + n2 % 2 == 0)
            {
                return (max(l1, l2) + min(r1, r2)) / 2;
            }

            else
            {
                return max(l1, l2);
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
}

// double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
// {
//     if (nums1.size() > nums2.size())
//     {
//         return findMedianSortedArrays(nums2, nums1);
//     }
//     int n = nums1.size();

//     int m = nums2.size();

//     int start = 0;
//     int end = n;
//     int realmidinmergedarray = (n + m + 1) / 2;

//     while (start <= end)
//     {
//         int mid = (start + end) / 2;
//         int leftAsize = mid;
//         int leftBsize = realmidinmergedarray - mid;
//         int leftA = (leftAsize > 0)
//                         ? nums1[leftAsize - 1]
//                         : INT_MIN;
//         int leftB = (leftBsize > 0) ? nums2[leftBsize - 1] : INT_MIN;
//         int rightA = (leftAsize < n) ? nums1[leftAsize] : INT_MAX;
//         int rightB = (leftBsize < m) ? nums2[leftBsize] : INT_MAX;

//         // if correct partition is done
//         if (leftA <= rightB and leftB <= rightA)
//         {
//             if ((m + n) % 2 == 0)
//                 return (max(leftA, leftB) + min(rightA, rightB)) / 2.0;
//             return max(leftA, leftB);
//         }
//         else if (leftA > rightB)
//         {
//             end = mid - 1;
//         }
//         else
//             start = mid + 1;
//     }
//     return 0.0;
// }
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