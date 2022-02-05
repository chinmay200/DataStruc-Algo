#include <bits/stdc++.h>
using namespace std;

void display(vector<vector<int>> arr){
    int n = arr.size();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2;j++){
            cout << arr[i][j] << " ";
        }
    }
}

int main(){
        vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
        vector<vector<int>> merge;

        sort(intervals.begin() , intervals.end());
        vector <int> elem = intervals[0];
        for(int i = 1;i < intervals.size(); i++){
            if(intervals[i][0] <= elem[1]){
                elem[1] = max(intervals[i][1] , elem[1]);
            }
            else{
                merge.push_back(elem);
                elem = intervals[i];
            }
        }
        merge.push_back(elem);
        display(merge);
}