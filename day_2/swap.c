#include<stdio.h>
void swap(int *a ,int *b)
{
  int i;
  int *c=&i;
  printf("c=%d ,&c =%d",*c,c);
  *c=*a;
printf(",c=%d ,&c =%d",*c,c);
  *a=*b;
printf(",c=%d ,&c =%d",*c,c);
  *b=*c;
printf(",c=%d ,&c =%d",*c,c);
}

void main()
{
  int a =2,b=3;
  swap(&a,&b);
  printf(",a= %d, b=%d",a,b);
}
