//Leetcode link: https://leetcode.com/problems/two-sum/

//BruteForce

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
            int x=0,y=0;
    for(int i=0;i<nums.size()-1;i++)
    {
        for(int j=i+1;j<nums.size();j++)
        {
            if(nums[i]+nums[j]==target)
            {
                x=i;
                y=j;
                break;
            }
            
        }
    }
    return {x,y};
}
};

//Better

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        map<int,int>mp;

        for(int i=0;i<n;i++){
          int temp=nums[i];
          int needed=target-temp;
          if(mp.find(needed)!=mp.end()){
            return {mp[needed],i};
          }

          mp[nums[i]]=i;
          
        }

return {-1,-1};
}  
};


//Optimal
  
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
    
  vector<int>temp;
  for(int i=0;i<n;i++){
    temp.push_back(nums[i]);
  }
  
  sort(nums.begin(),nums.end());
    int left=0;
    int right=n-1;
    bool flag=false;
    while(left<right){
        if(nums[left]+nums[right]==target){
          flag=true;
          break;
        }
        else  if(nums[left]+nums[right]<target){
          left++;
        }
        else{
          right--;
        }
    }

int t1=-1,t2=-1;
  if(flag){
    for(int i=0;i<n;i++){
      if(temp[i]==nums[left] && t1==-1){
        t1=i;
        }

      if (temp[i]==nums[right] ){
        t2=i;
      }
    }
  }
  return {t1,t2};

}
        

};
