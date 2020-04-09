#include <iostream>
using namespace std;

void subsq(char *in,char *out,int i,int j)
{  
	if(in[i]=='\0')
	{   out[j]='\0';
		cout<<out<<",";
		return;
	}
	out[j]=in[i];
	subsq(in,out,i+1,j+1);
	subsq(in,out,i+1,j);
}
int main() {
	// your code goes here
	char s[] ="abc";
	char output[100];
	subsq(s,output,0,0);
	return 0;
}

abc,ab,ac,a,bc,b,c,,
