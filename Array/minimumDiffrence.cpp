#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int minDiff(vector<int>nums,int n){
        int ans = INT_MAX;
        if(n == 1) return ans;
        if(n==2) return abs(nums[0]-nums[1]);
        sort(nums.begin(),nums.end());
        
        for(int i=1;i<n-1;i++){
           // int temp  = min(nums[i]-nums[i-1],nums[i+1]-nums[i]);
    
            ans = min(ans,nums[i]-nums[i-1]);
        }
        return ans;
    }
    };
    int main(){
        int n ;
        cin>>n;
        
        vector<int>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i]; 
        }
        Solution ob;
        cout<<ob.minDiff(nums,n);
        return 0;
    }