#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int n=prices.size();
       int ans=0;
       int minPrice=1e9;

       for(int i=0;i<n;i++){
        minPrice=min(minPrice,prices[i]);
        ans=max(ans,prices[i]-minPrice);
       } 
       return ans;
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