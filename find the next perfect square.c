#include <math.h>
long int findNextSquare(long int sq)
{
  long int x=sqrt(sq);
  if (pow(x,2)==sq)
    {
    return (long int)pow(x+1,2);
  }
  return -1;
}
