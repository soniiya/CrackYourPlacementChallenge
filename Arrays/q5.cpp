#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> twoSum(vector<int>&nums, int k){
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==k){
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
            }
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

        Solution ob;
        vector<int>ans=ob.twoSum(nums,k);
        
        for(auto it:ans){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}