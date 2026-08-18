class Solution {
public:
    int countDigits(int num) {
        int temp=num;
        int ct_div=0;
        while(temp!=0){
            int last=temp%10;
            if(num%last==0){
                ct_div+=1;
            }
            temp=temp/10;
        }
        return ct_div;
    }
};