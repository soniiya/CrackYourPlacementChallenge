#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;

       for(int i=1;i<nums.size();i++){
        if(nums[i]!=nums[k-1]){
            nums[k]=nums[i];
            k++;
        }
       }

       return k;
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
        int ans=ob.removeDuplicates(nums);

        // for(auto it:nums){
        //     cout<<it<<" ";
        // }
        cout<<ans;
    }
    return 0;
}