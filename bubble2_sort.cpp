buuble sort

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void fastbubblesort(int *ar,int n,int j)
{
	if(n==1)
	 return ;
	if(j==n-1)
	 return fastbubblesort(ar,n-1,0);
	if(ar[j]>ar[j+1])
	  swap(ar[j],ar[j]);
	 fastbubblesort(ar,n-1,j+1);
}
void bubblesort(int *ar,int n)
{
	if(n==1)
	 return;
	for(int i=0;i<n-1;i++)
	{
		if(ar[i]>ar[i+1])
		 swap(ar[i],ar[i+1]);
	}
  bubblesort(ar,n-1);
}

int main() {
	// your code goes here
  int ar[]={7,3,6,2,5};
  int n=5;
  bubblesort(ar,n);
  for(int i=0;i<n;i++)
   cout<<ar[i]<<" ";
  cout<<endl;
 fastbubblesort(ar,n,0);
 for(int i=0;i<n;i++)
   cout<<ar[i]<<" ";
	return 0;
}
