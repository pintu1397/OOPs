#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<vector<int>>overlappedIntervals(vector<vector<int>>intervals){
        int n= intervals.size();
        sort(intervals.begin(),intervals.end());
        
        vector<vector<int>>ans;
        ans.push_back(intervals[0]);
        for(int i=1;i<n;i++){
            int j= ans.size()-1;
            if(intervals[i][0] < ans[j][1]){
                ans[j][0] = min(ans[j][0],intervals[i][0]);
                ans[j][1] = max(ans[j][1],intervals[i][1]);
            }else{
                ans.push_back(intervals[i]);
            }
        }
        return ans;        
    }
};
int main(){
// int n;
// cin >> n;
 vector<vector<int>>Intervals = {{6,8},{1,3},{2,4},{5,7},{0,10}};

// for(int i=0;i<n;i++){
//     int x,y;
//     cin>>x>>y;
//     Intervals[i].push_back(x);
//     Intervals[i].push_back(y);
// }
Solution ob;
vector<vector<int>> res = ob.overlappedIntervals(Intervals);
for(auto i : res){
    for(auto x : i){
        cout << x<< " ";
    }
    cout<<endl;
}
return 0;
}
