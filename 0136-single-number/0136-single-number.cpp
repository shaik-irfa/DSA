class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto k:nums){
            mp[k]++;
        }
        for(auto z:mp){
            if(z.second==1){
                return z.first;
            }
        }
        return 0;
    }
};