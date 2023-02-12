// Power  of Four.............
// Time Complexity : O(1)
// Space Complexity : O(1)

class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<0){
            return 0;
        }
        else if(n==0){
            return 0;
        }
        else if(n==1){
            return 1;
        }
        else if(n<4){
            return 0;
        }
        else if(((n & (n-1)) == 0) && (n%3==1)){
            return 1;
        }
        else{
            return 0;
        }
    }
};
