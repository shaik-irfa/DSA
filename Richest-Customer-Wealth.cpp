// LeetCode #1672 — Richest Customer Wealth | Accepted Solution: https://leetcode.com/problems/richest-customer-wealth/
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> wealths;
        for(int i=0;i<accounts.size();i++){
            int sum=0;
            for(int j=0;j<accounts[i].size();j++){
                sum+=accounts[i][j];
            }
            wealths.push_back(sum);
        }
        int ans=*max_element(wealths.begin(),wealths.end());
        return ans;
    }
};