//Leetcode link: https://leetcode.com/problems/majority-element-ii/description/


//Brute Force:
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        vector<int>ans;
        int n=nums.size();
       
        for(int i=0;i<n;i++){
            if(ans.size()==0 || ans[0]!=nums[i]){
             int count=0;
            for(int j=0;j<n;j++){
                if(nums[i]==nums[j])
                    count++;
                 }
                 
        if(count>n/3){
           ans.push_back(nums[i]);
        }
            }
        if(ans.size()==2){
            break;
        }
        }
        
return ans;

    }
};



//Better Approach:
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        vector<int>ans;
        int n=nums.size();

        map<int,int>mp;

        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }

        for(auto it:mp){
            if(it.second>(n/3)){
                ans.push_back(it.first);
            }
        }

return ans;

    }
};
