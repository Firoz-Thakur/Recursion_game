You are given a number n. You need to find the digital root of n.
DigitalRoot of a number is the recursive sum of its digits until we get a single digit number.
Eg.DigitalRoot(191)=1+9+1=>11=>1+1=>2


Examples:
Input:
2
1
99999
Output:
1
9

Explanation:
Testcase 1: Digital root for 1 is 1.
Testcase 2: Digital root for 99999 is 9 + 9 + 9 + 9 + 9 => 45 => 4 + 5 => 9.


int digitalRoot(int n)
{
    //Your code here
  if(n==0)
   return 0;
  
  int x=n%10+digitalRoot(n/10);
  int y=x%10 +digitalRoot(x/10);
  return y;

}
