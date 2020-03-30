#include <iostream>
using namespace std;
//int i=0;
int binarys(int *ar,int l,int h,int k)
{ 
  if(l>h)
   return -1;
  int mid=(l+h)/2;
  if(ar[mid]==k)
    return mid;
  if(ar[mid]>k)  
    return binarys(ar,l,mid-1,k);
  else
    return binarys(ar,mid+1,h,k);
  //return -1;
}

int main() {
	// your code goes here
    int ar[]={1,2,3,4,5,6};
    int n=6;
    int key=1;
    int low=0;
    int high=n-1;
    int x=binarys(ar,low,high,key);
    if(x==-1)
     cout<<"not found"<<endl;
    else
     cout<<"found at "<<x<<endl;
	return 0;
}
