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

    int low = 0;
    int high = (r*c)-1;
    
    int num;
    cout << "Elem : ";
    cin >> num;
    int posi = -1;
    int posj = -1;

    while (low <= high)
    {
        int mid = (low+high) / 2;
        if(num > arr[mid/c][mid%c]){
            low = mid + 1;
        }

        else if(num < arr[mid/c][mid%c]){
            high = mid - 1;
        }
        else{
            posi = mid/c;
            posj = mid%c;
            break;
        }
    }
    
    if(posj && posi){
        cout << posi << " " << posj;
    }
    else{
        cout << "Element not present";
    }
}