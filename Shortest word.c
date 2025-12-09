#include <sys/types.h>
#include <string.h>

ssize_t find_short(const char *s)
{
   int length=1000;
   int i=0;
   int j=0;
   while(s[i] != '\0')
   {
     if(s[i]==' ')
     {
       if (length > j){
       length=j;
         }
       i++;
       j=0;
       continue;
     } 
     j++; 
     i++;
   }
   if (j > 0 && length > j)
   length = j;
    return length;
}
