class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) {
            return 0;
        }
        set<int> nodup(nums.begin(), nums.end());
        vector<int> second(nodup.begin(), nodup.end());
        sort(second.begin(), second.end());
        vector<int> max_consq;
        int first = second[0];
        int count = 1;
        for(int i = 1; i < second.size(); i++) {
            if(first == second[i] - 1) {
                count++;
                first = second[i];
            }
            else {
                max_consq.push_back(count);
                count = 1;
                first = second[i];   
            }
        }
        max_consq.push_back(count);
        int maxiii = *max_element(max_consq.begin(), max_consq.end());
        return maxiii;
    }
};