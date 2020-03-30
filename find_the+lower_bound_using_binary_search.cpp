
//lower bound
#include <iostream>
using namespace std;
//int i=0;
int lower_bound(int ar[],int n,int key)
{
  int l=0;
  int h=n-1;
  int ans=-1;
  while(l<=h)
  {
  	int mid=(l+h)/2;
  	if(ar[mid]==key)
  	 {
  	 	ans=mid;
  	 	h=mid-1;
  	 }
  	else if(ar[mid]>key)
  	  h=mid-1;
  	else
  	 l=mid+1;
  }
  return ans;
}

int main() {
	// your code goes here
    int ar[]={1,1,2,2,2,2,2,2,3,3,3,3,3,4,5,6,6,6,9,9,};
    int n=sizeof(ar)/sizeof(int);
    int key=2;
    cout<<lower_bound(ar,n,key);
	return 0;
}
output::: 2(lower index of 2);

//upper bound

#include <iostream>
using namespace std;
//int i=0;
int lower_bound(int ar[],int n,int key)
{
  int l=0;
  int h=n-1;
  int ans=-1;
  while(l<=h)
  {
  	int mid=(l+h)/2;
  	if(ar[mid]==key)
  	 {
  	 	ans=mid;
  	 	l=mid+1;
  	 }
  	else if(ar[mid]>key)
  	  h=mid-1;
  	else
  	 l=mid+1;
  }
  return ans;
}

int main() {
	// your code goes here
    int ar[]={1,1,2,2,2,2,2,2,3,3,3,3,3,4,5,6,6,6,9,9,};
    int n=sizeof(ar)/sizeof(int);
    int key=2;
    cout<<lower_bound(ar,n,key);
	return 0;
}

//ouput: 7
