//Leetcode link:https://leetcode.com/problems/powx-n/description/

class Solution {
public:
    double myPow(double x, int n1) {

        double ans=1.0;
        long n=n1;

        if(n<0){
            n=-1*n;
        }
        
        while(n>0){
            if(n%2==0){
                x*=x;
                n/=2;
            }
            else{
                ans*=x;
                n=n-1;
            }
        }

if(n1<0){
    ans=double(1.0)/(double)ans;
}
return ans;
    }
};
