#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int incSequence(vector<int>nums, int n){

    //     vector<int>dp(n,1);
    //    int ans = 1;
    //    for(int i=1;i<n;i++){
    //        for(int j=0;j<i;j++){
    //            if(a[i] > a[j]){
    //                 dp[i] = max(dp[i], dp[j]+1);
    //                 ans = max(ans,dp[i]);
    //            }
    //        }
    //    }
    //    return ans;
    vector<int>collection(n,1);
    
    for (int num : nums) {
        auto it = lower_bound(collection.begin(), collection.end(), num);
        if (it == collection.end()) {
            collection.push_back(num);
        } else {
            *it = num;
        }
    }
    
    return collection.size();
        
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n
        vector<int>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }

        Solution ob;
        cout<<ob.incSequence(nums,n);
    }
    return 0;
}