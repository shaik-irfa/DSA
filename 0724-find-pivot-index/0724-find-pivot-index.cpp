class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++) {
            int left_sum = 0;
            for(int left = 0; left < i; left++) {
                left_sum += nums[left];
            }
            int right_sum = 0;
            for(int right = i + 1; right < nums.size(); right++) {
                right_sum += nums[right];
            }
            if(left_sum == right_sum) {
                return i;
            }
        }
        return -1;
    }
};