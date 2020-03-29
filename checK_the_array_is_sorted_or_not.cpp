#include <iostream>
using namespace std;

bool sorted(int *ar,int n)
{
	if(n==1)
	 return true;
	if(ar[0]<ar[1] && sorted(ar+1,n-1))
	  return true;
	return false;
}

int main() {
	// your code goes here
	int ar[]={1,2,3,48,5,6,7,143};
	int n=8;
	if(sorted(ar,n))
	 cout<<"yes";
	else
	 cout<<"no";
	return 0;
}
