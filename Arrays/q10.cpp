#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
int subarrayDivisibleByk(vector<int>&nums, int k){
    int n=nums.size();
    int prefixMod=0,ans=0;
    unordered_map<int,int>mp;
    mp[0]=1;
    
    for(int i=0;i<n;i++){
        int prefixMod=(prefixMod+nums[i]%k+k)%k;
        if(mp.find(prefixMod)!=mp.end()){
            ans+=mp[prefixMod];
        }
        mp[prefixMod]++;
    }
    return ans;
}
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }

        Solution obj;
        int ans=obj.subarrayDivisibleByk(nums,k);
        cout<<ans;
    }
    return 0;
}