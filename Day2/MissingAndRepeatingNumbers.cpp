//Coding Ninja Link:

//Approach 1: Using simple mathematics
#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{

pair<int,int> p;

long long sn=(n*(n+1))/2;
long long s2n=(n*(n+1)*(2*n+1))/6;

long long s=0,s2=0;

for(int i=0;i<n;i++){
	s+=arr[i];
	s2+=(long long)arr[i]*(long long)arr[i];
}

long long v1=s-sn;
long long v2=s2-s2n;
v2=v2/v1; //v2 will be (x+y)

long long x=(v1+v2)/2;
long long y=x-v1;


p.first=int(y);
p.second=int(x);

return p;	
}

//Approach 2: Using bit manipulation

#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{

int x=0;
for(int i=0;i<n;i++){
	x^=arr[i];
	x^=(i+1);
}

int setBit=x&(~(x-1));


int zero=0,one=0;


for(int i=0;i<n;i++){
	if(arr[i]&setBit)
		zero^=arr[i];
	else
		one^=arr[i];
	
	if((i+1)&setBit)
		zero^=(i+1);
	else
		one^=(i+1);
}


int count=0;

for(int i=0;i<n;i++){
  if (arr[i] == zero) 
    count++;
  
}
    if(count==2)
		return { one,zero};
	return {zero,one};


}




