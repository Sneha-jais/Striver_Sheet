//Leetcode link: https://leetcode.com/problems/reverse-pairs/

//Brute force (TLE)
class Solution {
public:
    int reversePairs(vector<int>& nums) {

        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]>2*nums[j])
                        count++;
            }
        }
return count;

    }
};


//Optimal solution

