class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        long long a=x;
        long long sum=0;
        while(a%10!=a){
            sum=(sum*10)+a%10;
            a=a/10;
        }
        sum=sum*10+a;
        cout<<sum;
        if(sum==x)return true;
        return false;

    }
};