#include<stdio.h>
void dosquare(int n1,int n2)
{
   int result;
   result=(n1*n1)+(n2*n2)+(2*(n1*n2));
   printf("%d\n",result);
}
int main()
{
  dosquare(2,3);
  return 0;
}