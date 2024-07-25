#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
int chocolateProblem(vector<int>&nums,int n, int m){
    //int n=nums.size();
    int ans=INT_MAX;

    sort(nums.begin(),nums.end());
    for(int i=0;i<=n-m;i++){
       ans=min(ans,(nums[i+m-1]-nums[i])); 
    }
    return ans;
}
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }

        Solution obj;
        int ans=obj.chocolateProblem(nums,n,m);
        cout<<ans;
    }
    return 0;
}