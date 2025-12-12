#include <math.h>
int digit_num(int x){
  int i=0; 
  while (x !=0)
    {
    x/=10;
    i++;
  }
  return i;
}
int digital_root(int n) {
  int x=0;
  int i=digit_num(n);
  int div=(int)pow(10,i-1);
  for (int j=0;j<i;j++)
    {
    x+=(n/div);
    n%=div;
    div/=10;
  }
  if (digit_num(x)>1){
    return digital_root(x);
  }
  else
    {
    return x;
  }
  
}
