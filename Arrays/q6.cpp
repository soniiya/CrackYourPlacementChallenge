#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int findDuplicate(vector<int>&nums){
        int n=nums.size();
        int i=0,j=1;

        sort(nums.begin(),nums.end());

        while(j<n){
            if(nums[i]==nums[j]){
                return nums[i];
            }else{
                i++;
                j++;
            }
        }
        return -1;
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

        Solution ob;
        int ans=ob.findDuplicate(nums);
        cout<<ans;
    }
    return 0;
}