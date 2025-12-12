#include <stddef.h>

#define NAMELIM     0x8

struct student {
    char name[NAMELIM+1];
    unsigned fives;
    unsigned tens;
    unsigned twenties;
};

const char *most_money(const struct student *v, size_t n)
{
  int result =0;
  int j=0;
  int sum=0;
  int tie =0;
  for (int i=0;i<n;i++)
    {
      sum=v[i].fives *5+v[i].tens*10+v[i].twenties*20;
    if (result< sum)
      {
      j=i;
      result=sum;
      tie=0;
    }else if (result==sum)
      {
      tie=1;
    }
    
  }
  if (tie)
    {
    return "all";
  }
    static char name_copy[NAMELIM + 1];
    strcpy(name_copy, v[j].name);

    return name_copy;
}
