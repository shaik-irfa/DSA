class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxii=*max_element(nums.begin(),nums.end());
        int minni=*min_element(nums.begin(),nums.end());
        return gcd(maxii,minni);
    }
};