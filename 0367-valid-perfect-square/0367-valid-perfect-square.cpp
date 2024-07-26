class Solution {
public:
    bool isPerfectSquare(int num) {
        int temp=sqrt(num);
        if(num == temp*temp )return true;
        return false;

    }
};