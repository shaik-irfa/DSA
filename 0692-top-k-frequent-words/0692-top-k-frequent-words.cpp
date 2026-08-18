class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> freq;
        for(auto each:words){
            freq[each]++;
        }
        vector<pair<int,string>> rever;
        for(auto each:freq){
            rever.push_back({each.second,each.first});
        }
        sort(rever.begin(),rever.end(),[](pair<int,string>& a,pair<int,string>&b){
            if(a.first !=b.first){
                return a.first>b.first;
            }
            return a.second<b.second;
        });
        vector<string> ans;
        for(int i=0;i<k;i++){
            ans.push_back(rever[i].second);
        }
        return ans;
    }
};