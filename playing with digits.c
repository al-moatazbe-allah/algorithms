#include <math.h>
int digPow(int n, int p) {
  int result=0;
  int num=n;
  int i=p;
  int j=0;
  while (num !=0)
    {
    num/=10;
    j++;
  }
  int divider= pow(10,(j-1));
  num=n;
  while(divider !=0)
  {
    int factor=num/divider;
    result+=pow(factor,i);
    num%=divider;
    divider/=10;
    i++;
  }
	int final = (int)result % n==0? result/n:  -1 ;
  return final;
}
