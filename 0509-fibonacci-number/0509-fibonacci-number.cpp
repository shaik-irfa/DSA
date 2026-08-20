class Solution {
public:
int tree(int n){
    if(n<=1) return n;
    int last=tree(n-1);
    int sc_last=tree(n-2);
    return last+sc_last;
}
    int fib(int n) {
        return tree(n);
    }
};