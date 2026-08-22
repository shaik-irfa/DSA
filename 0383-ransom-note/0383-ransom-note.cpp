class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char ,int> rn;
        unordered_map<char ,int> mg;
        for(auto r:ransomNote){
            rn[r]++;
        }
        for(auto m:magazine){
            mg[m]++;
        }
        int count=0;
        for(auto z:rn){
            auto it = mg.find(z.first);
            if(it!=mg.end()){
                if(it->second >= z.second){
                    count++;
                }
            }
        }
        return rn.size()==count;
    }
};