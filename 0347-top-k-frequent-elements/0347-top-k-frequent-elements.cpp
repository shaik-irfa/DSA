class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        map<int,int> freq;

        for(auto x : nums) {
            freq[x]++;
        }

        vector<pair<int,int>> v;

        for(auto x : freq) {
            v.push_back({x.first, x.second});
        }

        sort(v.begin(), v.end(), [](pair<int,int>& a, pair<int,int>& b) {
            return a.second > b.second;
        });

        vector<int> res;

        for(int i = 0; i < k; i++) {
            res.push_back(v[i].first);
        }

        return res;
    }
};