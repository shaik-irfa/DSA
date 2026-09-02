class Solution {
public:
    void rotate(vector<int>& nums, int k) {
                k = k % nums.size();
    reverse(nums.begin(), nums.end() - k);
    reverse(nums.end() - k, nums.end());
    reverse(nums.begin(), nums.end());
        // int n = nums.size();
        // k = k % n;
        // vector<int> temp;
        // for(int i = n - k; i < n; i++) {
        //     temp.push_back(nums[i]);
        // }
        // int i = n - 1;
        // for(int j = n - k - 1; j >= 0; j--) {
        //     nums[i] = nums[j];
        //     i--;
        // }
        // for(int j = 0; j < k; j++) {
        //     nums[j] = temp[j];
        // }
    }
};