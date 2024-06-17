#include<cmath>
class Solution {
public:
    bool judgeSquareSum(int c) {
        // base case
        if(c < 0) return false;

        // two pointer
        long l = 0;
        long r = (int) std::sqrt(c);

        while(l<=r){
            long sum = l*l + r*r;
            if(sum==c){
                return true;
            }else if(sum>c){
                r--;
            }
            else{
                l++;
            }
        }
        return false;
    }
};