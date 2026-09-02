class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> temp;
        for(auto k:nums){
            if(k!=0){
                temp.push_back(k);
            }
        }
        for(int i=0;i<temp.size();i++){
            nums[i]=temp[i];
        }
        for(int i=temp.size();i<nums.size();i++){
            nums[i]=0;
        }     
    }
};