//Leetcode link:https://leetcode.com/problems/majority-element/description/

//Better approach

class Solution {
public:
    int majorityElement(vector<int>& nums) {
          map<int,int>mp;
        int n=nums.size();
        
        for(int i=0;i<n;i++){
                mp[nums[i]]++;
        }

        for(auto it:mp)
        {
            if(it.second>n/2)
                return it.first;
        }
        return -1;

    }
};

//Above approach is using extra space so we need to optimise it, Below is optimal solution
class Solution {
public:
    int majorityElement(vector<int>& nums) {
     
     int count=0,ele;
     int n=nums.size();

     for(int i=0;i<n;i++){
         if(count==0){
             ele=nums[i];
             count++;
         }
         else if(nums[i]==ele){
             count++;
         }
         else{
             count--;
         }
     }
    
//From Moore's voting algorithm we got the element but we have to check it whether it is major element or not
    int counter=0;
    for(int i=0;i<n;i++){
        if(nums[i]==ele){
            counter++;
        }
    }
if(counter>n/2){
    return ele;
}

return -1;
    }
};
