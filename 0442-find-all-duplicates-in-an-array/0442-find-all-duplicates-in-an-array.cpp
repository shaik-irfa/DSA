class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            int x=abs(nums[i]);
            int index=x-1;
            if(nums[index]>0){
                nums[index]=-nums[index];
            }else{
                ans.push_back(x);
            }
        }
        return ans;
    }
};