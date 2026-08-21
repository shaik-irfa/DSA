class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto k:nums){
            mp[k]++;
        }
        int maxii=0;
        int ans=0;
        for(auto z:mp){
            if(z.second>maxii){
                maxii=z.second;
                ans=z.first;
            }
        }
        return ans;
    }

};