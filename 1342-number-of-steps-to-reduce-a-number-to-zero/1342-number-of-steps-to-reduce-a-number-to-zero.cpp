class Solution {
public:

    int recursive(int num) {

        if (num == 0)
            return 0;

        if (num % 2 == 0) {
            return 1 + recursive(num / 2);
        } 
        else {
            return 1 + recursive(num - 1);
        }
    }

    int numberOfSteps(int num) {
        return recursive(num);
    }
};