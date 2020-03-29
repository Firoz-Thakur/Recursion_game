0 1 1 2 3 5 8 13
0th to  nth
#include <iostream>
using namespace std;

int fibb(int n)
{
	if(n==0 || n==1)
	 return n;
	 
	 int ans=fibb(n-1) + fibb(n-2);
	 return ans;
}


int main() {
	// your code goes here
	int n;
	n=0;
	cout<<fibb(7);
	return 0;
}
