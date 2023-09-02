//Leetcode link: https://leetcode.com/problems/next-greater-element-i/description/

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int,int>mp;
        int m= nums1.size();
        int n= nums2.size();

     
        st.push(nums2[n-1]);

   for(int i=n-2;i>=0;i--)
   {
         
         while( !st.empty() && st.top()<=nums2[i])
         {

        
             st.pop();
         } 

         if(!st.empty())
         { 
             if(i<n)
         mp[nums2[i]]=st.top();
         
         }

              st.push(nums2[i]);

   }

      vector<int>v(m,-1);

  for(int i=0;i<m;i++)
  {
      if(mp[nums1[i]]!=0)
      {
          v[i]=mp[nums1[i]];
      }
  }    

return v;

    }
};
