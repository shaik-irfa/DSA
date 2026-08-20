class Solution {
public:

    void ret(int start,vector<char>& s,int end){
        if(start>=end) return ;
        swap(s[start],s[end]);
        return ret(start+1,s,end-1);
    }
    void reverseString(vector<char>& s) {
            ret(0,s,s.size()-1);
    }
};