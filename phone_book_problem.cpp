given a number of the phonebook find all the possible subsequences of the string

#include <iostream>
using namespace std;

char sub[][100]={"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
void printkeystring(char *in,char *out,int i,int j)
{  
   if(in[i]=='\0')
    {
    	out[j]='\0';
    	cout<<out<<",";
    	return;
    }
  int digit=in[i]-'0';
  if(digit==0 || digit==1)
   printkeystring(in,out,i+1,j);
  for(int k=0;sub[digit][k];k++)
  {
  	out[j]=sub[digit][k];
  	printkeystring(in,out,i+1,j+1);
  }
}
int main() {
	// your code goes here
	char s[] ="23";
	char output[100];
	printkeystring(s,output,0,0);
	return 0;
}
