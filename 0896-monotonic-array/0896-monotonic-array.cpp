class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int up = 1;
        int down = 1;

        for(int i = 1; i < nums.size(); i++) {

            if(nums[i] >= nums[i-1]) {
                up++;
            }

            if(nums[i] <= nums[i-1]) {
                down++;
            }
        }

        if(up == nums.size() || down == nums.size()) {
            return true;
        }

        return false;
    }
};