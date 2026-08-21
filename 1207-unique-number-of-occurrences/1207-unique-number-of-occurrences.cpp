class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(int i:arr){
            mp[i]++;
        }
        set<int> s;
        for(auto m:mp){
            s.insert(m.second);
        }
        return mp.size()==s.size();
    }
};