class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int even_digits=0;
        for(int i=0;i<nums.size();i++){
            string k=to_string(nums[i]);
            int len=k.size();
            if(len%2==0){
                even_digits+=1;
            }
        }
        return even_digits;
    }
};