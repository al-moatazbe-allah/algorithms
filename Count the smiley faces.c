#include <stddef.h>

size_t count_smileys(size_t length, const char *const array[length]) {
  int result=0;
  int valid_eye=0;
  int valid_mouth=0;
  int valid_nose=0;
  int not_valid=0;
  for (int i=0;i<length;i++)
    { 
    int j=0;
    valid_eye=0;
    valid_mouth=0;
    valid_nose=0;
    not_valid=0;
    while(array[i][j] != '\0')
      {
      if (array[i][j] ==':' || array[i][j]==';')
        {
        valid_eye=1;
      }
      else if(array[i][j] =='~' || array[i][j]=='-')
        {
        valid_nose=1;
      }
      else if(array[i][j] =='D' || array[i][j]==')')
        {
        valid_mouth=1;
      }
      else
        {
        not_valid=1;
        break;
      }
      j++;
    }
    if(valid_eye==1 && valid_mouth==1 && not_valid==0){
      result++;
    }
  }

    return result;

}
