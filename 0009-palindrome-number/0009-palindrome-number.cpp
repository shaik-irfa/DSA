class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int temp=x;
        long long comp=0;
        while(temp!=0){
            comp=comp*10+(temp%10);
            temp=temp/10;
        }
        return comp==x;
    }
};