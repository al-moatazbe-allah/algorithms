#include <stddef.h>

int find_outlier(const int values[/* count */], size_t count)
{
  int result=0;
  int x=0,y=0;
  int values_check[count];
  for (int i=0;i<count;i++ )
    {
    if (values[i] %2==0)
      {
      x++;
      values_check[i]=0;
    }
    else if (values[i] %2 !=0)
      {
      y++;
      values_check[i]=1;
    }


  }
if(x>y)
  {
    for(int i=0;i<count;i++)
    {
      if (values_check[i]==1)
        {
        result=values[i];
        break;
      }
    }
  
    }else if (x<y)
  {
      for(int i=0;i<count;i++)
    {
      if (values_check[i]==0)
        {
        result=values[i];
        break;
      }
    }
  
}
  return result;
}
