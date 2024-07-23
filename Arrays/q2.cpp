#include<bits/stdc++.h>
using namespace std;

class Solution{
    public: 
    void moveZeroes(vector<int>&nums){
        int n=nums.size();
        int j=0;

        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[j++]=nums[i];
            }
        }
        for(int i=j;i<n;i++){
            nums[i]=0;
        }
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
        obj.moveZeroes(nums);

        for(int i=0;i<n;i++){
            cout<<nums[i]<<" ";
        }
    }
    return 0;
}