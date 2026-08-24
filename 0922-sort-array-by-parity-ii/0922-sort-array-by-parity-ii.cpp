class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
    vector<int> even;
    vector<int> odd;
    for(auto i :nums){
        if(i%2==0){
            even.push_back(i);
        }
        else{
            odd.push_back(i);
        }
    }   
    vector<int> res;
    for(int i=0;i<nums.size()/2;i++){
        res.push_back(even[i]);
        res.push_back(odd[i]);
    }
    return res;
    }
};