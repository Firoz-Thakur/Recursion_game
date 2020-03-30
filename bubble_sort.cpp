#include <iostream>
using namespace std;
//int i=0;
void bb(int *ar,int i,int n)
{ 
  if(n==1)
   return;
  if(i==n-1)
    return bb(ar,0,n-1);
  if(ar[i]>ar[i+1])
   swap(ar[i],ar[i+1]);
  return bb(ar,i+1,n);
  //return -1;
}

int main() {
	// your code goes here
    int ar[]={7,2,3,44,0,1};
    int n=6;
    bb(ar,0,n);
    for(int i=0;i<n;i++)
     cout<<ar[i]<<" "; 
	return 0;
}
