given a number print its equaivalent string using recursion.

#include <iostream>
using namespace std;

string s[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};

void printn(int n)
{
  if(n==0)
   return;
 printn(n/10);
 cout<<s[n%10]<<" ";
}

int main() {
	// your code goes here
    int n=33300000;
    printn(n);
	return 0;
}
