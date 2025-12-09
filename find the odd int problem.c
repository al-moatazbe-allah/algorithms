#include <stddef.h>

int find_odd (size_t length, const int array[length])
{
   int odd=0;
   for(int i=0;i<length;i++)
   {
     odd^=array[i];
   }
  
    return odd;
}
