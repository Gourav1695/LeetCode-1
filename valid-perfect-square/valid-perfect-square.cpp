class Solution {
public:
    bool isPerfectSquare(int n) {
        int x=sqrt(n);
        return x*x==n;
    }
};