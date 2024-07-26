#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
int maxProfit(vector<int>&nums){
    int n=nums.size();
    int profit=0;
    int minPrice=INT_MAX;

    for(int i=0;i<n;i++){
        minPrice=min(minPrice,nums[i]);
        profit=max(profit,nums[i]-minPrice);
    }
    return profit;
}
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }

        Solution obj;
        int ans=obj.maxProfit(nums);
        cout<<ans;
    }
    return 0;
}