#include <stdbool.h>

bool xo (const char* str)
{
  int countx=0,counto=0;
  bool answer=false;
  for(int i=0;str[i];++i)
  {
    if(str[i]=='x' ||str[i]=='X' )
    {
     countx++; 
    }else if(str[i]=='o' ||str[i]=='O' )
      {
      counto++;
    }
  }
  if(countx==counto)
  {
    answer=true;
  }
  return answer;
}
