#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> findDuplicateAll(vector<int>&nums){
        int n=nums.size();
        vector<int>ans;

        sort(nums.begin(),nums.end());

         for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i-1]) {
                ans.push_back(nums[i]);
            }
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

        Solution ob;
        vector<int>ans=ob.findDuplicateAll(nums);
       
        if (ans.empty()) {
            cout << "No duplicates found" << endl;
        } else {
            for (auto num : ans) {
                cout << num << " ";
            }
            cout << endl;
        }
    }
    return 0;
}