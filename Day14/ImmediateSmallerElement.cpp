//Coding ninjas link: https://www.codingninjas.com/studio/problems/immediate-smaller-element-_1062597?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0
void immediateSmaller(vector<int>& a)
{
	// Write your code here.
	int n=a.size();
	for(int i=0;i<n-1;i++){
		if(a[i]>a[i+1]){
			a[i]=a[i+1];
		}
		else{
			a[i]=-1;
		}
	}
	a[n-1]=-1;
}
