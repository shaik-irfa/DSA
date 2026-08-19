class Solution {
public:
bool recursive(int i,int n){
    if(pow(2,i)>n){
        return false;
    }
    if(pow(2,i)==n){
        return  true;
    }
    return recursive(i+1,n);

}
    bool isPowerOfTwo(int n) {
        if(n<=0){
            return false;
        }
       return  recursive(0,n);
    }
};