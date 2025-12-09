int letters_to_numbers(const char *str) {
  int i=0;
  int sum=0;
  while(str[i] !='\0')
    {
    if(str[i] >= 'a' && str[i]<= 'z')
    {
      sum+= (-96+str[i]);
    }
    else if(str[i] >= 'A' && str[i]<= 'Z')
    {
      sum+= ((-64+str[i])*2);
    }
    else if(str[i]>='0' && str[i]<='9')
    {
      sum+=(str[i]-48);
    }
    else
    {
      sum+=0;  
    }
    
    }
  return sum; // <--- 
}
