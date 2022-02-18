#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
     cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        stack<int> book;
        int n;
        cin >> n;
        
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if(x != -1){
                int num;
                cin >> num;
                book.push(num);
            }

            else{
                if(!book.empty()){
                    int del = book.top();
                    cout <<del << endl;
                    book.pop();
                }
                else{
                    cout << "kuchbhi?" << endl;
                }
            }
        }
           
    }
    return 0;
}
