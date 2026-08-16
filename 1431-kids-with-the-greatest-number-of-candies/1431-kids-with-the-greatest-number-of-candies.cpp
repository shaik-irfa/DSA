class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res;
        int max_ele=*max_element(candies.begin(),candies.end());
        for(int i=0;i<candies.size();i++){
            int check=candies[i]+extraCandies;
            if(check >= max_ele){
                res.push_back(true);
            }else{
                res.push_back(false);
            }
            
        }
        return res;
    }
};