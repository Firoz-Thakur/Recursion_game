#include <iostream>
using namespace std;
//int i=0;
int search(int *ar,int n,int i,int k)
{ 
  if(i==n)
   return -1;
  if(ar[i]==k)
   return i ;
 /// i++;
  return search(ar,n,i+1,k);
  //return -1;
}

int main() {
	// your code goes here
    int ar[]={1,2,3,4,5,6};
    int n=6;
    int key=98;
    int ii=0;
    int x=search(ar,n,ii,key);
    if(x==-1)
     cout<<"not found"<<endl;
    else
     cout<<"found at "<<x<<endl;
	return 0;
}
