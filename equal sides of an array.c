int sum_arr(const int *arr, int length)
{
  int sum=0;
  for (int i=0; i<length;i++)sum+=arr[i];
  return sum;
}
int find_even_index(const int *values, int length) {
  int result=-1;
  for (int i=0;i<length;i++)
  {
   if (sum_arr(values,i)==sum_arr(&values[i+1],length-i-1))
     {result=i;
     break;}
  }
