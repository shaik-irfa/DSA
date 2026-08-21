class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto e:nums){
            mp[e]++;
        }
        for(auto z:mp){
            if(z.second>1){
                return true;
                break;
            }
        }
        return 0;
    }
};