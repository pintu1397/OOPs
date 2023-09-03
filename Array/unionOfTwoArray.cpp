#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int>intersection(int A[], int B[],int m,int n){
        int i=0;
        int j =0;
        vector<int>v;
        //if(A[0] == B[0]) v.push_back(A[i])
        while(i < m and j < n){
            if(i>=0 and A[i] == A[i-1]){
                i++;
                continue;
            }
            if(j>=0 and B[j] == B[j-1]){
                j++;
                continue;
            }
            if(A[i] == B[j]){
                v.push_back(A[i]);
                i++;
                j++;
            }else if(A[i] < B[j]){
                 v.push_back(A[i]);
                i++;
            }else{
                v.push_back(B[j]);
                j++;
            }
        }
        while(i<m){
            v.push_back(A[i]);
                i++;
        }
        while(j<n){
            v.push_back(B[j]);
                j++;
        }
        return v;
    }
};
 int main() {
    int m,n;
    cin>>m>>n;
    int A[m],B[n];
    for(int i=0;i<m;i++){
        cin>>A[i];
    }
    for(int i=0;i<n;i++){
        cin>>B[i];
    }
    Solution ob;
    vector<int>res = ob.intersection(A,B,m,n);

    for(int x : res){
        cout<<x<<" ";
    }
    return 0;
}
/*5
4
2 20 20 40 60
10 20 20 20
20
*/