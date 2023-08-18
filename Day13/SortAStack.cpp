//Coding ninjas links: https://www.codingninjas.com/studio/problems/sort-a-stack_985275?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

#include <bits/stdc++.h> 
void sortStack(stack<int> &s)
{
	// Write your code here

	   
priority_queue <int, vector<int>, greater<int> > v;

while(!s.empty()){
  v.push(s.top());
  s.pop();
}

//sort(v.begin(),v.end());

while(!v.empty()){
    s.push(v.top());
    v.pop();
}
   



}
