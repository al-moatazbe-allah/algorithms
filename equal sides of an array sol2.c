int find_even_index(const int *values, int length) {
  int sum = 0;
  
  for(int i = 0; i < length; i++) sum += values[i];
  
  int left = 0;
  int right = sum;
  
  for(int i = 0; i < length; i++)
  {
    right -= values[i];
    if(left == right) return i;
    left += values[i];
  }
  return -1;
}
