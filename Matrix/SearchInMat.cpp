#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r;
    cin >> r;
    int c;
    cin >> c;

    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    int i = 0;
    int j = (r*c)-1;
    
    int num;
    cin >> num;
    int posi,posj;

    while (i <= j)
    {
        int mid = (i+j) / 2;
        if(num > arr[mid/c][mid%c]){
            i = mid + 1;
        }

        else if(num < arr[mid/c][mid%c]){
            j = mid - 1;
        }
        else{
            posi = mid/c;
            posj = mid%c;
            break;
        }
    }
    
    cout << posi << " " << posj;    
 
    return false;
}