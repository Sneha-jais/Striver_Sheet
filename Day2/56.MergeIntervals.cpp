/* Leetcode link: https://leetcode.com/problems/merge-intervals/

*/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intv) {
        
        int n=intv.size();

        //firstly sort the array
        sort(intv.begin(),intv.end());

        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            if(ans.empty()){
                ans.push_back(intv[i]);
            }
            else{
                //storing last interval of ans
                vector<int> &v=ans.back();
                //v[0] is starting of interval and v[1] is ending
                int y=v[1];
                if(y>=intv[i][0]){
                    v[1]=max(v[1],intv[i][1]);
                }
                else{
                    ans.push_back(intv[i]);
                }
            
            }
        }
        return ans;

    }
};
