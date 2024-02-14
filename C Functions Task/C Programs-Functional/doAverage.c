#include<stdio.h>
void doAverage(float n1,float n2,float n3)
{
  float result;
  result = (n1+n2+n3)/3;
  printf("%f\n",result);
}
int main(){
doAverage(1,2,3);
doAverage(12,16,27);
return 0;
}