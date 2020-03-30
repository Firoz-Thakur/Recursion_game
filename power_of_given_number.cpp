//power of number

#include <iostream>
using namespace std;

int fastpow(int a,int b)
{
  if(b==0)
   return 1;
  int smallans=fastpow(a,b/2);
  smallans=smallans*smallans;
  if(b&1)
    return a*smallans;
  return smallans;
}

int main() {
	// your code goes here
    int a=2,b=3;
    cout<<fastpow(a,b);
	return 0;
}
