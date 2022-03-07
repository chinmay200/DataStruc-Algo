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
    int j = c-1;

    int posi = 0, posj = 0;
    int num;
    cin >> num;

    while (i < r && j >= 0)
    {
        if(arr[i][j] < num){
            i++;
        }
        else if(arr[i][j] > num){
            j--;
        }
        else{
            posi = i;
            posj = j;
            break;
        }
    }

    cout << posi << " " << posj;    

    return false;
}