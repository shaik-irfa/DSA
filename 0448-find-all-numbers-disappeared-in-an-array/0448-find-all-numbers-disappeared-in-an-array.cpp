class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> up;
        for(auto k:nums){
            up[k]++;
        }
        int maxiii=nums.size();
        while(maxiii>0){
            if(up.find(maxiii)==up.end()){
                ans.push_back(maxiii);
            }
            maxiii--;
        }
        return ans;
    }
};