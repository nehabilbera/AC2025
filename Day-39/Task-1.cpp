// Factorial Trailing Zeroes

int Zeroes(int n){
    int ans=0;
    while(n != 0){
        ans=ans+n/5;
        n=n/5;
    }
    return ans;
}

class Solution {
public:
    int trailingZeroes(int n) {
        return Zeroes(n);
    }
};
