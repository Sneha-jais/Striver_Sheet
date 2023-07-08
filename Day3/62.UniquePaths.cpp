//Leetcode link: https://leetcode.com/problems/unique-paths/description/


//Brute force: It will show TLE
class Solution {
 public:
 int fun(int i, int j,int n,int m){

     if(i==(n-1) && j==(m-1))
            return 1; //we've reached our destination
    if(i>=n || j>=m){
        return 0; //we've reached at end point or out of matrix
    }
    else
        return fun(i+1,j,n,m)+fun(i,j+1,n,m);


 }
  int uniquePaths(int m, int n) {
  
  return fun(0,0,n,m);
  
   
  
  }
};



//Better Approach: Using DP

class Solution {
 public:
 int fun(int i, int j,int n,int m,vector<vector<int>>&dp){

     if(i==(n-1) && j==(m-1))
            return 1; //we've reached our destination
    if(i>=n || j>=m){
        return 0; //we've reached at end point or out of matrix
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    else
        return dp[i][j]=fun(i+1,j,n,m,dp)+fun(i,j+1,n,m,dp);


 }
  int uniquePaths(int m, int n) {
 
   vector<vector<int>> dp(m+1,vector<int>(n+1,-1));

  int num= fun(0,0,m,n,dp);

    if(m==1&&n==1)
            return num;
    
    return dp[0][0];
    }
  
};


//Optimal Solution

class Solution {
 public:
  int uniquePaths(int m, int n) {
 
 //Using nCr

int N=n+m-2;
int r=m-1;
double res=1;
for(int i=1;i<=r;i++){
    res=res*(N-r+i)/i;
}

  return (int)res;
    }
  
};
