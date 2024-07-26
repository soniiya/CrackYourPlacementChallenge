#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int l=0,mid=0,h=n-1;

        while(mid<=h){
            if(nums[mid]==0){
                swap(nums[l++],nums[mid++]);
            }
            else if(nums[mid]==2){
                swap(nums[mid], nums[h--]);
            }else{
                mid++;
            }
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
        obj.sortColors(nums);

        for(int i=0;i<n;i++){
            cout<<nums[i]<<" ";
        }
    }
    return 0;
}