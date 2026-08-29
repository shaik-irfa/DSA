class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(auto k:nums1){
            auto it=find(nums2.begin(),nums2.end(),k);
            if(it!=nums2.end()){
                ans.push_back(*it);
                nums2.erase(it);
            }
        }
        return ans;
    }
};