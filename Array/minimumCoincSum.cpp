#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
	vector<int> minCoins(int coins[], int M, int V) 
	{ 
	    // Your code goes here
const int INF = 1e9;
    vector<int> dp(V + 1, INF);
    dp[0] = 0;

    for (int i = 1; i <= V; i++) {
        for (int j = 0; j < M; j++) {
            if (i >= coins[j]) {
                dp[i] = min(dp[i], dp[i - coins[j]] + 1);
            }
        }
    }

    //return (dp[V] == INF) ? -1 : dp[V];
    return dp;
	    
	} 
};

int main(){
    int t;
    cin>>t;
    int v,m;
    cin>>v>>m;
    int coins[m];
    for(int i=0;i<m;i++){
        cin>>coins[i];
    }
    Solution ob;
    vector<int>res;
    res = ob.minCoins(coins,m,v);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}
