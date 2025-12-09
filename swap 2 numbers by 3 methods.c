// Online C compiler to run C program online
#include <stdio.h>
void swap1(int *x,int *y);
void swap2(int *x,int *y);
void swap3(int *x,int *y);
int main() {
    int x=5 , y=10;
    swap1(&x,&y);
    printf("%i %i",x,y);
    return 0;
}
void swap1(int *x,int *y)
{
    int z= *x;
    *x=*y;
    *y=z;
}
void swap2(int *x,int *y)
{
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}
void swap3(int *x,int *y)
{
    *x=*x ^*y;
    *y=*x ^*y;
    *x=*x ^*y;
}
