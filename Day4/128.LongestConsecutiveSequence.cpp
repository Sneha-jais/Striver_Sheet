//Leetcode link: https://leetcode.com/problems/longest-consecutive-sequence/

class Solution {

public:

    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n==0)
            return 0;
        int count=1,maxi=1;
    int prev=nums[0];

            for(int i=1;i<n;i++){
                if(nums[i]==prev+1){
                    count++;
                }
                else if(nums[i]!=prev){
                   count=1;
                }
                prev=nums[i];
                maxi=max(maxi,count);
            }

return maxi;

    }
};
