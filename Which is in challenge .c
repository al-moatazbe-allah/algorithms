// sz1: size of array1, sz2: size of array2, lg: size of the returned array
#include <string.h>
int cmp(const void* a, const void* b) {
    return strcmp(*(const char**)a, *(const char**)b);
}
char** inArray(char* array1[], int sz1, char* array2[], int sz2, int* lg) {
  int F=0;
  char **r = malloc(sz1 * sizeof(char*));
  for(int i=0;i<sz1;i++)
    {
    for (int j=0;j<sz2;j++)
      {
      if(strstr(array2[j],array1[i]) !=NULL)
        {
        r[F]=array1[i];
        F++;
        break;
      }
    }
  }
   qsort(r, F, sizeof(char*), cmp);
  *lg=F;
  return r;
}
