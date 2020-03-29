#include <iostream>
using namespace std;

int fact(int n)
{
	if(n==0)
	 return 1;
	 
	 int ans=n*fact(n-1);
	 return ans;
}


int main() {
	// your code goes here
	int n;
	n=5;
	cout<<fact(5);
	return 0;
}
